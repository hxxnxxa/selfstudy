import cv2
import os
import glob
import numpy as np
from pathlib import Path
from PIL import Image, ImageDraw
import typer

# originLblDir = "datasets/coco128/images/B098_314F/train/labels/"
# originImgDir = "datasets/coco128/images/B098_314F/train/images/"

fontImg = np.zeros((256,256,3), np.uint8)

# ---------------------- yolo 형식의 bbox 값을 voc 형식으로 변환하는 함수
def yolo_to_pascal_voc(x_center, y_center, w, h, image_w, image_h):
    w = int(w * image_w)
    h = int(h * image_h)
    x1 = int(((2 * x_center * image_w) - w)/2)
    y1 = int(((2 * y_center * image_h) - h)/2)
    x2 = int(x1 + w)
    y2 = int(y1 + h)
    cv2.rectangle(fontImg,(x1,y1),(x2,y2),(0,255,0), 2)

    return 

# ------------------------ 한글 값을 인자로 받아서 해당 경로의 Bbox 확인 
def bbox_check(uni: str) :
    originLblDir = "ideaSentence/2_Myeongjo/" + uni + "/labels/"
    originImgDir = "ideaSentence/2_Myeongjo/" + uni + "/images/"

    print("originLblDir: ", originLblDir)
    print("originImgDir: ", originImgDir)

    files = glob.glob(originLblDir+"/*.txt")

    fontImg = np.zeros((256,256,3), np.uint8)
    for name in files:
        if not os.path.isdir(name):
            src = os.path.splitext(name)
            imgFile = originImgDir+Path(name).stem+".png"
            imgResultPath = originImgDir+"../crop/"
            imgResult = originImgDir+"../crop/"+Path(name).stem+".png"
            fontImg = cv2.imread(imgFile)
            lblFilefd = open(name)
            
            if not os.path.exists(imgResultPath):
                os.makedirs(imgResultPath)

            lblTxt = list(lblFilefd.readline().split())

            while lblTxt:
                print(lblTxt)
                x_center = float(lblTxt[1])
                y_center = float(lblTxt[2])
                w = float(lblTxt[3])
                h = float(lblTxt[4])
                image_w = 256
                image_h = 256

                yolo_to_pascal_voc(x_center, y_center, w, h,  image_w, image_h)
                lblTxt = list(lblFilefd.readline().split())
            print("imgResult:",imgResult)     
            cv2.imwrite(imgResult,fontImg)
            lblFilefd.close()

if __name__ == "__main__":
    typer.run(bbox_check)