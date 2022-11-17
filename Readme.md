<div align='center'>
    <h1>폰트 관련 연구 기록</h1>
</div>

<br>
<br>

<h2>2021.09.16 (목)</h2>
<li>Faster R CNN Object Detection을 활용한 획 요소 검출 결과 발표</li>
<li>이사님과 추가적으로 미팅하여 획 요소 DB화를 어떻게 해야할 지에 대한 미팅 필요, 실제 참여는 X</li>

<br>
<br>

<h2>2021.09.23 (목)</h2>
<li>Neural Font Style Transfer  논문 읽는 중</li>
<li>Ammar 피드백: 다음주까지 Neural Font Style Transfer 를 폰트에 어떻게 적용할 수 있을지에 대한 아이디어 생각 해 오기</li>

<br>
<br>

<h2>2021.09.30 (목)</h2>
<li>교수님 피드백: 영어는 폰트를 만드는데 많은 규칙들이 존재한다. 한글은 아직 아무 규칙이 존재하지 않는다. 그 규칙을 정하기 위해, 정근호 이사에게 어떤 글자의 Feature를 뽑아야 하는지에 대한 데이터를 받을 예정이다. 3년이 걸린다고 하니 이에 대해서는 기대하지 않는 것이 좋다. Faster R-CNN 관련, 뽑은 feature를 따로 DB화를 해 보아라. 적은 수이지만 8가지 획 요소에 대한 DB화부터 해 보아라.</li>
<li>Ammar 피드백: Neural Font Style Transfer 논문을 읽고 다 끝나면 알려줄 수 있도록 준비 해 보아라.</li>

<br>
<br>

<h2>2021.11.25 (목)</h2>
<li>폰트 획 요소를 분류하는 작업을 시도하고 있는데 잘 안된다.</li>
<li>Ammar 피드백: 정확도는 얼마나 잘 나오는가? 모델은 어떤 걸 사용했는가? 이미 공식적으로 존재하는 모델을 사용했는가?</li>
<li>내 대답: 정확도는 로그를 찍어보면 잘 나왔는데 그래프로 띄워서 확인했을 때 잘 나오지 않았다. (나는 왜 헛소리를 했는가?)</li>
<li>현수 피드백: Faster R-CNN, Tensorflow의 Object detection은 2015년 정도에 나온 것들이다. 견문을 넓히기 위해 최신 모델을 가져와 써보도록 해라.</li>

<br>
<br>

<h2>2022.01.14 (금)</h2>
<h3>논문 보는 방법</h3>
<li>Key Idea(main idea), 기존 이론과의 차이점, 결론점</li>
<li>예를 들어 Faster R CNN에 대한 논문을 볼 때, key idea는 rpn이다.</li>
<li>바로 Faster R-CNN에 대한 공부가 아닌, 이론이 나온 순서대로 숙지해두고 논문을 보는 것이 맞다.</li>

<br>
<br>

<h2>2022.01.19 (수)</h2>
<h3>제안서 작성 중</h3>
<li>Depth camera, Typo 키네틱스, multilingual → navigation</li>
<li>자율주행 - 도메인 고려하면 좋을 것 같다.</li>

<br>
<br>

<h2>2022.01.26 (수)</h2>
<h3>폰트 연구에 대한 정근호 이사님과 현수의 피드백</h3>
<li>한글 글꼴 분류 : 타이포그라피 홈페이지에 들어가서 분류체계에 대한 논문을 찾아보아라.</li>
<li>참고하면 좋은 논문 : 한글 글자체의 인상(印象).pdf</li>
<li>연구 활용 분야에 대해서는 다음과 같이 생각 해 볼 수 있다 : 속성 제어 분야, 비슷한 폰트 찾기, 폰트 정보를 모를 때 검색하여 찾기, 신뢰도</li>
<li>글자의 첫 인상 → 글자의 획 요소에 대한 쓰임새, 비슷한 그림체의 폰트 검색하기</li>
<li>면적에 대해 한 가지 숫자로 뽑아보기</li>
<li>유의미한 획 요소와 무의미한 획 요소 찾아보기</li>

<br>
<br>

<h2>2022.04.07 (목)</h2>
<li>미경선배와 하고있는 프로젝트 및 내가 보고있는 논문, 깃허브 소개</li>
<li>현수 피드백: 폰트 DB화에 어떻게 XAI를 사용할 것인가? 졸업 발표했을 때 최교수님 말고 다른 심사위원 분께서 명조체에서 고딕체로 가는 중간값을 알 수 있냐는 질문을 주셨음. 이에 대해 XAI로 구현할 수 있을까. 더 방법을 찾아볼 필요가 있다. 폰트 선정은 개발 분야가 아닌 예술 분야이기 때문에 어려운 부분이 있을 수 있다.</li>
<li>결희 질문: 연령대 별, 컨셉 별로 작업물의 폰트를 추천해주는 것이 맞느냐? 맞다!</li>

<br>
<br>

<h2>2022.04.14 (목)</h2>
<li>미경선배와 하고 있는 프로젝트에 대한 요약 및 현재 이슈에 대해 공유했다.</li>
<li>현수 피드백: 한글 폰트에 대해 정형화된 수치 데이터가 없어서 이에 대해 연구하고 논문을 쓰면 인용 수가 많고 유용한 논문이 될 것이다. 한 번 생각 해 보아라.</li>

<br>
<br>

<h2>2022.06.23 (목)</h2>
<h3>Github repository 관리 및 작성 방향</h3>
<li>현재 너무 중구난방으로 퍼져있다. 데이터셋 저장소, yolo-v5 저장소 따로 되어있는 것은 좋지 않다.</li>
<li>사용자가 저장소 하나만 다운로드 받고 모든 코드가 돌아갈 수 있도록 작성하는 것이 좋다.</li>

<h3>논문 서베이</h3>
<li>논문 서베이는 계속 할 것, 1번과는 별도로 진행</li>
<li>한글 글꼴 용어 사전: 용어에 대한 정의가 있는 교재이므로 나중에 찾아볼 때 이용할 것</li>
<li>한글 디자인 교과서: 1순위로 읽을 것, 지하철로 이동할 때</li>
<li>한글의 글자 표현: 2순위로 읽을 것</li>

<br>
<br>

<h2>2022.06.30 (목)</h2>
<h3>깃허브 코드 관리</h3>
<li>정리하라는 건 삭제하라는게 아니다. 그동안 만든 코드를 왜 삭제했는가.</li>
<li>저장소 따로 하나 만들어서 그동안 썼던 코드와 그에 대한 히스토리를 모두 남겨놓도록 하여라.</li>

<h3>그래프 관련 스터디</h3>
<li>한 노드에서 두 개 노드를 거쳐서 갈 수 있는 노드까지의 거리 구하기 → 구글링 해 보면 수식이 나와있다.</li>
<li>GNN 알고리즘 한 번 찾아보아라.</li>
<li>SSLAB 에서 하는 HPC 또한 매트릭스 연산이라 Graph 관련 도서가 많이 있으니 찾아보아라.</li>

<h3>font2img</h3>
<li>폰트 이미지 캔버스 사이즈 : 256 x 256</li>
<li>폰트 크기 : “무 궁 화 꽃 이 피 었 습 니 다” 폰트 크기와 맞출 것, 문제 생길 시 180으로 맞출 예정</li>
<li>폰트 이미지에서 획 요소가 잘린 부분이 있다면 그 Bbox는 삭제해라. → Bbox 모두 그려서 확인할 것</li>
<li>고딕계열 “무” 좌표 찍은 파일(사이즈 변경 전), 명조계열 “무” 좌표 찍은 파일 깃허브에 업로드</li>

<h3>쉘 스크립트 프로그래밍 훈련</h3>
<li>폰트 생성 코드 쉘 스크립트로 작성</li>
<li>폰트 사이즈 확인 코드 쉘 스크립트 작성</li>
<li>폰트 Bbox_check 코드 쉘 스크립트 작성</li>
<li>awk, sed 관련 명령어 쉘 스크립트 작성</li>

<br>
<br>

<h2>2022.07.07 (목)</h2>
<li>구글드라이브 - 공유문서 - 고민하고 있는 부분 올릴 것 - 문제 있었던 것, 해결한 부분, 포인트 찍은 부분</li>
<li>하던 것 계속 집중해서 끝내버릇하는 습관을 들일 것, 중단은 되도록이면 하지 말 것</li>
<li>최박사님 피드백: 컨퍼런스 논문 - 저널 논문 - 학위 논문이 가장 이상적인 루트, 일과 논문은 따로 생각하도록 해라, 'A환경에서 B를 위한 C의 방법 개발'을 염두에 두고 일 하라.</li>

<br>
<br>

<h2>2022.07.14 (목)</h2>
<li>yolov5 고딕, 명조계열 detect 완료</li>

<br>
<br>

<h2>2022.07.21 (목)</h2>
<h3>Detect 관련 부분 처리</h3>
<li>전체 다시 뜨는 방법</li>
<li>opencv 를 이용하여 detect 된 부분의 좌표값을 캔버스에 찍어보기</li>
<li>yolo형식의 데이터셋이 (x,y,w,h) 값이었다면 캔버스에 opencv를 이용하여 점을 찍기위해서는? </li>
<li>한글의 특징: position 별로 구분  → 초성, 중성, 종성(c,v,f) → position 대표 글자 선정 및 boxing 처리</li>
<li>고딕과 명조의 아,사,자,차,카,타,하 에 대한 label을 바꿀 필요가 있다.</li>

<h3>DeepLearning을 이용한 OCR 처리</h3>
<li>논문 리뷰는 1주 5회, 딥러닝 관련 논문으로</li>

<br>
<br>

<h2>2022.08.04 (목)</h2>
<h3>차주 수요일(8/10)까지 Bbox-center값 데이터 업로드</h3>
<li>yolo의 데이터셋이 몇 사분면의 좌표값을 나타냈는지 확인하여 1사분면의 데이터로 변환할 것</li>
<li>PNG와 TXT 파일 모두 업로드할 것</li>
<li>폰트 A > sylla1 > 무.txt, 궁.txt, 화.txt, … *.txt 형식으로 업로드 할 것</li>

<h3>논문을 쓰기위해 해야할 처절한 몸부림</h3>
<li>각 폰트의 특징을 어떻게 뽑아야할까? 여기서 폰트란, 손글씨체는 결과가 잘 안나왔으니 지워도 된다. 고딕과 명조만 해도 된다.
<li>특징 뽑으려면 여러 포인트의 한 좌표값이 필요하겠지?</li>
<li>옛날 타자기 시절, 각 글자의 위치는 지정되어있다. 이는 탈네모꼴 이라고 하여 정해진 사각형 안에 글자 조합이 없었다. 현재 네모꼴이라고 하여 네모난 상자 안에 한글의 조합이 되어있다. 가독성을 높이기 위해서이다.</li>
<li>그래서 폰트 별로 ‘우’ 의 중성이 다른 이유는 밀도 때문이라고도 할 수 있다. 사각형 안의 밀도.</li>
<li>요한이가 컨퍼런스 논문 쓴다고 불안해 할 필요가 없다. 폰트 관련 논문은 고민할 시간이 필요하고 하나를 쓰기 시작하면 그에 파생되어 여러 개를 동시에 쓸 수도 있다. 남 신경쓰지말고 내 할 일 해라.</li>

<br>
<br>

<h2>2022.08.08 (월)</h2>
<li>skeleton 찍는 코드 작성 완료 및 데이터 확인</li>

<br>
<br>

<h2>2022.08.18 (목)</h2>
<h3>유닛테스트(Unit Test)</h3>
<li>코드를 짜서 맞는지 확인하는 테스트</li>
<li>컴퓨터 프로그래밍에서 소스 코드의 특정 모듈이 의도된대로 정확히 작동하는지 검증하는 절차</li>
<li>코드를 작성할 때 return type에 대한 고려가 필수다.</li>
<li>그리고 에러 발생 시 에러를 처리할 수 있는 코드도 작성해야 한다.</li>
<li>지난 직장에서 후임이 버퍼 사이즈를 너무 작게 줘서 공장 가동이 멈췄던 경험이 있다.</li>
<li>개발자의 코드 작성 목표는 코드가 죽지 않도록 작성해야하고 에러가 발생하면 에러 처리에 대한 코드도 작성해야 한다. 그리고 원하는 기능이 있는지 확인해야 한다.</li>

<h3>석사가 가져야 할 자세</h3>
<li>석사과정의 목표는 문제를 줬을 때 해결하는 것이다.</li>
<li>완벽하지 않아도 되고 어디까지 해결했는지 알려주는 것이 reaction의 첫 번째다.</li> 
<li>지금 내가 Computer Science의 기초를 쌓는 것은 학사의 목표이다.</li>

<h3>다음 계획</h3>
<li>다음 미팅(8/25) 전까지 폰트 속성에 대해 스터디를 해오고 논문 주제에 대해 논의 해 보자.</li>

<br>
<br>

<h2>2022.09.29 (목)</h2>
<h3>봐야할 논문</h3>
<li>Stroke-Based Online Hangul Korean Character Recognition</li>
<li>Character decomposition to resolve class imbalance problem in Hangul OCR</li>
<li>YOLOv7: Trainable bag-of-freebies sets new state-of-the-art for real-time object detectors</li>
<li>Handwritten Hangul recognition using deep convolutional neural networks</li>

<h3>폰트 생성 관련</h3>
<li>Encoder, Decoder 역할 확인 필요</li>

<h3>화요일까지 할 일</h3>
<li>학습결과 skeleton 까지 뽑아놓기 (centering 된 이미지만 detect 할 것)</li>
<li>폰트는 Google 폰트, Naver 폰트를 이용하여 폰트 이미지 만들어놓기</li>
<li>11,172자에 대해 랜덤하게 뽑아보기 루틴 만들어보기(나중에)</li>

<h3>YOLOv7 파라미터 정리</h3>
<li>1. batch-size</li>
<li>2. config 값 </li>
<li>3. weight 값</li>
<li>4. hyp 는 어떤 역할을 하는가?</li>

<h3>다음 계획</h3>
<li>선배님과 쓰게될 논문은 OCR + skeleton이 될 예정</li>
<li>다음 미팅은 yolov7 파라미터 정리해서 내일 오후 두시 온라인으로 진행할 예정</li>

<br>
<br>

<h2>2022.10.20(목)</h2>
<h3>다음 계획</h3>
<li>내가 만들었던 코드에 대해, 기능을 수행하기 위한 tool 만들어놓기</li>
<li>script 로라도 자동 실행 되게끔</li>
<li>이게 모여서 내 논문이 될 것이다.</li

<br>
<br>

<h2>2022.10.27 (목)</h2>
<h3>초성,중성,종성 분리하는 코드 작성</h3>
<li>무 -> position 정보를 알게 되면 -> c,v,f 분리 가능 -> 후처리</li>
<li>비율을 알 수 없는 경우 학습 결과 이용해서 detect 해 보고 결과 확인</li>

<br>
<br>