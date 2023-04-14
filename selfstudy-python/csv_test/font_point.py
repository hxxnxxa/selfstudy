import os
import os.path
import cv2
import numpy as np
from pynput.mouse import Listener
import csv

# --------------------------------------------------------------------------------
# '궁'에 해당하는 폰트 이미지 가져와서 포인트 찍고 csv로 저장하기, 작업 중

drawing = False

def point(event, x, y, flags, param):
    global drawing

    # 마우스 우클릭 시, x좌표와 y좌표를 txt 파일에 저장
    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        cv2.circle(img, (x,y), 20, (0,0,255), 3)
        #print(x,y)
                
        with open('font_dataset/궁/point.csv','a', encoding="UTF-8") as f:
            wr = csv.writer(f)
            wr.writerow([x,y])
            #f.write('(%d,' % x)
            #f.write('%d)\t' % y)
                
    # 마우스 좌클릭 시, separate -1을 txt 파일에 저장
    elif event == cv2.EVENT_RBUTTONDOWN:
        #sep = -1
        #print("sep: ",sep)
        with open('font_dataset/궁/point.csv','a', encoding="UTF-8") as f:
            #f.write('%d\t' % sep)
            f.write('\t')

    # 마우스 좌클릭 떼면 drawing mode false
    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False
                
for i in os.listdir('font_data/궁/') :
    path = 'font_data/궁/'
    img_name = i
    full_path = path+'/'+img_name
    with open('font_dataset/궁/point.csv','a', encoding="UTF-8") as f:
        f.write(img_name + '\t')

    img_array = np.fromfile(full_path, np.uint8)
    img = cv2.imdecode(img_array, cv2.IMREAD_COLOR)

    cv2.imshow('image', img)
    cv2.setMouseCallback('image', point)

    #key = cv2.waitKey(0) & 0xFF
    key = cv2.waitKey()

    # esc 키 > 종료
    if key == 27 :
        break
        cv2.destroyAllWindows()

    # 오른쪽 방향키 > 개행 
    elif key == ord('n') :
        with open('font_dataset/궁/point.csv','a', encoding="UTF-8") as f:
            f.write('\n')

# --------------------------------------------------------------------------------
# '궁'에 해당하는 폰트 이미지 가져와서 포인트 찍고 txt로 저장하기, 테스트 완료
"""
drawing = False

def point(event, x, y, flags, param):
    global drawing

    # 마우스 우클릭 시, x좌표와 y좌표를 txt 파일에 저장
    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        cv2.circle(img, (x,y), 20, (0,0,255), 3)
        #print(x,y)
                
        with open('font_dataset/궁/point.txt','a', encoding="UTF-8") as f:
            f.write('(%d,' % x)
            f.write('%d)\t' % y)
                
    # 마우스 좌클릭 시, separate -1을 txt 파일에 저장
    elif event == cv2.EVENT_RBUTTONDOWN:
        sep = -1
        #print("sep: ",sep)
        with open('font_dataset/궁/point.txt','a', encoding="UTF-8") as f:
            f.write('%d\t' % sep)

    # 마우스 좌클릭 떼면 drawing mode false
    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False
                
for i in os.listdir('font_data/궁/') :
    path = 'font_data/궁/'
    img_name = i
    full_path = path+'/'+img_name
    with open('font_dataset/궁/point.txt','a', encoding="UTF-8") as f:
            f.write(img_name + '\t')

    img_array = np.fromfile(full_path, np.uint8)
    img = cv2.imdecode(img_array, cv2.IMREAD_COLOR)

    cv2.imshow('image', img)
    cv2.setMouseCallback('image', point)

    #key = cv2.waitKey(0) & 0xFF
    key = cv2.waitKey()

    # esc 키 > 종료
    if key == 27 :
        break
        cv2.destroyAllWindows()

    # 오른쪽 방향키 > 개행 
    elif key == ord('n') :
        with open('font_dataset/궁/point.txt','a', encoding="UTF-8") as f:
            f.write('\n')
"""

# --------------------------------------------------------------------------------
# 하나의 폰트 이미지를 가져와서 좌표값을 저장하기, 테스트 완료
"""
def point(event, x, y, flags, param):
    global drawing

    # 마우스 우클릭 시, x좌표와 y좌표를 txt 파일에 저장
    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        cv2.circle(img, (x,y), 20, (0,0,255), 3)
        #print(x,y)
                
        with open('font_dataset/궁/Arita-Bold_궁.txt','a') as f:
            f.write('(%d,' % x)
            f.write('%d)\t' % y)
                
    # 마우스 좌클릭 시, separate -1을 txt 파일에 저장
    elif event == cv2.EVENT_RBUTTONDOWN:
        sep = -1
        #print("sep: ",sep)
        with open('font_dataset/궁/Arita-Bold_궁.txt','a') as f:
            f.write('%d\t' % sep)
                
    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False

path = 'font_data/궁/'
img_name = "Arita-Bold_궁.png"
full_path = path+'/'+img_name

img_array = np.fromfile(full_path, np.uint8)
img = cv2.imdecode(img_array, cv2.IMREAD_COLOR)

cv2.imshow('image',img)
cv2.setMouseCallback('image', point)
cv2.waitKey(0)
cv2.destroyAllWindows()
"""

# --------------------------------------------------------------------------------
# 좌표값을 csv로 저장하기(상대적 위치 안됨)
"""
f = open('font_dataset/궁/mouse_logs.csv', 'w', newline='')
wr = csv.writer(f)

def on_click(x, y, button, pressed):
    #print('마우스 클릭 좌표 {0},{1} 클릭 값 {2}'.format(x,y,pressed))
    wr.writerow([x, y, button])

with Listener(on_click=on_click) as listener:
    listener.join()
    f.close()
"""

# --------------------------------------------------------------------------------
# print file list(remove the extension)
"""
dir = r"D:/workspace/font_sslab/font_data/궁"
files = os.listdir(dir)
idx = 0

for i in files:
    idx = idx + 1

    if i.count(".")==1 :
        V = i.split(".")
        print("files(%d) : " % idx, V[0])
"""

# --------------------------------------------------------------------------------
# point function
"""
def point(event, x, y, flags, param):
    global drawing

    # 마우스 우클릭 시, x좌표와 y좌표를 txt 파일에 저장
    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        cv2.circle(img, (x,y), 20, (0,0,255), 3)
        #print(x,y)
                
        with open('font_dataset/'+V[0]+'.txt','a') as f:
            f.write('(%d,' % x)
            f.write('%d)\t' % y)
                
    # 마우스 좌클릭 시, separate -1을 txt 파일에 저장
    elif event == cv2.EVENT_RBUTTONDOWN:
        sep = -1
        #print("sep: ",sep)
        with open('font_dataset/'+V[0]+'.txt','a') as f:
            f.write('%d\t' % sep)
                
    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False
"""