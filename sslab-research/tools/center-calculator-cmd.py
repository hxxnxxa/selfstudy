# fontname, sylla_no 를 인자로 받는 코드

import cv2
from cv2 import FONT_HERSHEY_SIMPLEX
import numpy as np
import math
import typer

def bbox_center_calculator2(font_name: str, sylla_no:str, sylla_name: str):
    img = cv2.imread('D:/workspace/SF-GNN/codeHistory/fontImage/origin/' + font_name + '/' + sylla_no + '/' + font_name + '_' + sylla_name +'_origin.png')
    #img = np.full((256,256,3),255,np.uint8)
    f = open('D:/workspace/SF-GNN/codeHistory/yolov7-result5/' + font_name + '/' + sylla_no + '/labels/' +  font_name + '_' + sylla_name + '_bbox.txt','r')

    # 라인별로 읽어와서 data에 저장
    data = f.read().splitlines() # data의 데이터타입은 list
    lblList = []

    # 라인 별로 스페이스바 단위로 나누어 lblList에 append 하기
    for point in data:
        lblList.append(point.split(' '))

    # (x,y) 그리고 width, height 값을 저장할 리스트 선언
    x_center_list = []
    y_center_list = []
    width_list = []
    height_list = []
    lbl_index = []

    # 첫 번째 라인의 첫 번째 값은 x_center 값이므로 x_center_list 에 추가
    # 각각 라인별로 알맞은 리스트에 추가
    for i in range(len(lblList)):
        lbl_index.append(lblList[i][0])
        x_center_list.append(float(lblList[i][1]))
        y_center_list.append(float(lblList[i][2]))
        width_list.append(float(lblList[i][3]))
        height_list.append(float(lblList[i][4]))

    # yolo 형식을 pascal_voc 데이터로 변환하는 함수 선언
    def yolo_to_pascal_voc(x_center, y_center, w, h,  image_w, image_h):
        w = w * image_w
        h = h * image_h
        x1 = ((2 * x_center * image_w) - w)/2
        y1 = ((2 * y_center * image_h) - h)/2
        x2 = x1 + w
        y2 = y1 + h
        return [x1, y1, x2, y2]

    # 변환한 데이터를 저장할 리스트 선언
    lblList_pascal = []

    # 변환한 데이터를 저장할 리스트에 append 시키기
    for i in range(len(lblList)):
        lblList_pascal.append(yolo_to_pascal_voc(x_center_list[i], y_center_list[i], width_list[i], height_list[i], 256, 256))

    # yolo 형식을 pascal_voc 데이터형식으로 변환하면 실수로 나오기 때문에 정수형으로 다시 형변환을 할 것임
    # 정수형으로 형변환 한 것을 저장하기 위한 리스트 선언
    x1_int = []
    y1_int = []
    x2_int = []
    y2_int = []

    # rgb 색상표 리스트

    # 각각 리스트에 append 
    for i in range(len(lblList)):
        x1_int.append(math.ceil(lblList_pascal[i][0]))
        y1_int.append(math.ceil(lblList_pascal[i][1]))
        x2_int.append(math.ceil(lblList_pascal[i][2]))
        y2_int.append(math.ceil(lblList_pascal[i][3]))

    # lblList의 0번째 값이 레이블
    # lblList 길이만큼 반복하면서 원 그리기
    for i in range(len(lblList)):

        # HS
        if lbl_index[i] == '0':
            print('HS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,0,255), -1)
            cv2.putText(img, 'HS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,0,255),1,cv2.LINE_AA)

        # HE
        if lbl_index[i] == '1':
            print('HE')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,94,255), -1)
            cv2.putText(img, 'HE',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,94,255),2,cv2.LINE_AA)

        # VS
        if lbl_index[i] == '2':
            print('VS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,187,255), -1)
            cv2.putText(img, 'VS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,187,255),2,cv2.LINE_AA)

        # VE
        if lbl_index[i] == '3':
            print('VE')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,228,255), -1)
            cv2.putText(img, 'VE',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,228,255),2,cv2.LINE_AA)

        # MS
        if lbl_index[i] == '4':
            print('MS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,242,171), -1)
            cv2.putText(img, 'MS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,242,171),2,cv2.LINE_AA)

        # ML
        if lbl_index[i] == '5':
            print('ML')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (22,219,29), -1)
            cv2.putText(img, 'ML',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (22,219,29),2,cv2.LINE_AA)

        # MR
        if lbl_index[i] == '6':
            print('MR')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,216,0), -1)
            cv2.putText(img, 'MR',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,216,0),2,cv2.LINE_AA)

        # MB
        if lbl_index[i] == '7':
            print('MB')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,84,0), -1)
            cv2.putText(img, 'MB',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,84,0),2,cv2.LINE_AA)

        # H2V
        if lbl_index[i] == '8':
            print('H2V')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,0,1), -1)
            cv2.putText(img, 'H2V',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,0,1),2,cv2.LINE_AA)

        # V2H
        if lbl_index[i] == '9':
            print('V2H')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,0,95), -1)
            cv2.putText(img, 'V2H',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,0,95),2,cv2.LINE_AA)

        # H2S
        if lbl_index[i] == '10':
            print('H2S')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (221,0,255), -1)
            cv2.putText(img, 'H2S',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (221,0,255),2,cv2.LINE_AA)

        # V2S
        if lbl_index[i] == '11':
            print('V2S')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (127,0,255), -1)
            cv2.putText(img, 'V2S',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (127,0,255),2,cv2.LINE_AA)

        # HB
        if lbl_index[i] == '12':
            print('HB')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,0,0), -1)
            cv2.putText(img, 'HB',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,0,0),2,cv2.LINE_AA)

        # H2B
        if lbl_index[i] == '13':
            print('H2B')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,0,103), -1)
            cv2.putText(img, 'H2B',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,0,103),2,cv2.LINE_AA)

        # H3B
        if lbl_index[i] == '14':
            print('H3B')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,37,102), -1)
            cv2.putText(img, 'H3B',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,37,102),2,cv2.LINE_AA)

        # VBC
        if lbl_index[i] == '15':
            print('VBC')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,75,102), -1)
            cv2.putText(img, 'VBC',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,75,102),2,cv2.LINE_AA)

        # HBO
        if lbl_index[i] == '16':
            print('HBO')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,92,102), -1)
            cv2.putText(img, 'HBO',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,92,102),2,cv2.LINE_AA)

        # HBN
        if lbl_index[i] == '17':
            print('HBN')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,102,71), -1)
            cv2.putText(img, 'HBN',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,102,71),2,cv2.LINE_AA)

        # HSC
        if lbl_index[i] == '18':
            print('HSC')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (28,116,34), -1)
            cv2.putText(img, 'HSC',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (28,116,34),2,cv2.LINE_AA)

        # VB
        if lbl_index[i] == '19':
            print('VB')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (102,87,0), -1)
            cv2.putText(img, 'VB',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (102,87,0),2,cv2.LINE_AA)

        # HCS
        if lbl_index[i] == '20':
            print('HCS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (102,34,0), -1)
            cv2.putText(img, 'HCS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (102,34,0),2,cv2.LINE_AA)

        # VCS
        if lbl_index[i] == '21':
            print('VCS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (102,0,3), -1)
            cv2.putText(img, 'VCS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (102,0,3),2,cv2.LINE_AA)

        # VSC
        if lbl_index[i] == '22':
            print('VSC')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (102,0,42), -1)
            cv2.putText(img, 'VSC',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (102,0,42),2,cv2.LINE_AA)

        # RS
        if lbl_index[i] == '23':
            print('RS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (88,0,102), -1)
            cv2.putText(img, 'RS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (88,0,102),2,cv2.LINE_AA)

        # RS2
        if lbl_index[i] == '24':
            print('RS2')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (95,95,241), -1)
            cv2.putText(img, 'RS2',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (95,95,241),2,cv2.LINE_AA)

        # RL
        if lbl_index[i] == '25':
            print('RL')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (97,150,242), -1)
            cv2.putText(img, 'RL',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (97,150,242),2,cv2.LINE_AA)

        # RC
        if lbl_index[i] == '26':
            print('RC')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (97,203,242), -1)
            cv2.putText(img, 'RC',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (97,203,242),2,cv2.LINE_AA)

        # RR
        if lbl_index[i] == '27':
            print('RR')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (92,216,229), -1)
            cv2.putText(img, 'RR',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (92,216,229),2,cv2.LINE_AA)

        # RR2
        if lbl_index[i] == '28':
            print('RR2')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (292,229,188), -1)
            cv2.putText(img, 'RR2',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (292,229,188),2,cv2.LINE_AA)

        # B2RH
        if lbl_index[i] == '29':
            print('B2RH')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (127,229,134), -1)
            cv2.putText(img, 'B2RH',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (127,229,134),2,cv2.LINE_AA)

        # B2HS
        if lbl_index[i] == '30':
            print('B2HS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (229,209,92), -1)
            cv2.putText(img, 'B2HS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (229,209,92),2,cv2.LINE_AA)

        # B2V
        if lbl_index[i] == '31':
            print('B2V')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,153,103), -1)
            cv2.putText(img, 'B2V',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,153,103),2,cv2.LINE_AA)

        # B2VS
        if lbl_index[i] == '32':
            print('B2VS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,102,107), -1)
            cv2.putText(img, 'B2VS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,102,107),2,cv2.LINE_AA)

        # B2LH
        if lbl_index[i] == '33':
            print('B2LH')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (255,102,165), -1)
            cv2.putText(img, 'B2LH',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,102,165),2,cv2.LINE_AA)

        # MRML
        if lbl_index[i] == '34':
            print('MRML')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (220,97,243), -1)
            cv2.putText(img, 'MRML',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (220,97,243),2,cv2.LINE_AA)
        # H2SHS
        if lbl_index[i] == '35':
            print('H2SHS')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (166,97,243), -1)
            cv2.putText(img, 'H2SHS',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (166,97,243),2,cv2.LINE_AA)

        # INV1
        if lbl_index[i] == '36':
            print('INV1')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (0,0,152), -1)
            cv2.putText(img, 'INV1',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,0,152),2,cv2.LINE_AA)

        # INV2
        if lbl_index[i] == '37':
            print('INV2')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (39,157,47), -1)
            cv2.putText(img, 'INV2',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (39,157,47),2,cv2.LINE_AA)

        # INV3
        if lbl_index[i] == '38':
            print('INV3')
            print('x: ',math.ceil((((x1_int[i])+(x2_int[i]))/2)))
            print('y: ',math.ceil((((y1_int[i])+(y2_int[i]))/2)))
            x = math.ceil((((x1_int[i])+(x2_int[i]))/2))
            y = math.ceil((((y1_int[i])+(y2_int[i]))/2))
            cv2.circle(img, (x,y), 5, (153,130,0), -1)
            cv2.putText(img, 'INV3',(x,y),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (153,130,0),2,cv2.LINE_AA)

    #cv2.imshow('drawing', img)
    print('D:/workspace/SF-GNN/codeHistory/yolov7-result5/' + font_name + '/' + sylla_no + '/' + font_name + '_' + sylla_name + '_skeleton.png')
    cv2.imwrite('D:/workspace/SF-GNN/codeHistory/yolov7-result5/' + font_name + '/' + sylla_no + '/' + font_name + '_' + sylla_name + '_skeleton.png',img)
    
    #cv2.imwrite('D:/workspace/SF-GNN/codeHistory/yolov7-result5/'+font_name + '/sylla1/' + font_name + '_' + sylla_name+'_skeleton_HSHEVSVE2.png',img)
    #cv2.waitKey(0)
    #cv2.destroyAllWindows()

if __name__ == "__main__":
    typer.run(bbox_center_calculator2)

