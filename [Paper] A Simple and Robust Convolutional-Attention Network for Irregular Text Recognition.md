<div align='center'>
    <h1> A Simple and Robust Convolutional-Attention Network for Irregular Text Recognition</h1>
    본 논문은 한글이 아닌 영문으로 구성된 MS COCO 데이터셋을 사용했다는 것을 참고하세요.
</div>

<br>

<h2>Author</h2>
<li>Peng Wang, Lu Yang, Hui Li, Yuyan Deng, Chunhua Shen, Yanning Zhang</li>
<li>중국 시안의 Northwestern Polytechnical 대학교 컴퓨터 공학부</li>
<li>호주 Adelaide 대학교 컴퓨터 공학부</li>
<li>Accepted 2 Apr 2019</li>

<h2>Abstract</h2>
<li>불규칙한 텍스트 인식을 위한 Convolution + Attention 네트워크</li>
<li>장면 이미지에서 임의의 불규칙한 텍스트를 읽는 것에 대한 문제 해결 모델을 제안한다.</li>
<li>기존 접근 방식: 정교한 네트워크 구조를 통합하여 다양한 모양을 처리 || Annotation 추가 || 시퀀스 모델링을 위한 순환 신경망 사용</li>
<li>본 논문이 제안한 네트워크는 2차원 CNN 기능을 Attention 기반 시퀀스 디코더에 직접 연결한다.</li>
<li>입력 이미지를 시퀀스 표현으로 변환할 필요가 없다.</li>
<li>RNN에 비해 3배~18배의 역전파, 2배~12배의 순전파를 달성했다.</li>
<li>본 모델은 단어 수준 주석으로만 학습된다.</li>
<li>Bbox가 부정확해도 인식 성능을 유지한다.</li>
<li>종단 간 텍스트 감지 및 인식 작업에 적합하다.</li>

<h2>1. Introduction</h2>
<li>네트워크의 구성: 이미지 인코딩을 위한 CNN 모델 + 어텐션 기반 시퀀스 디코더</li>
<li>2D 이미지 인코더와 1D 시퀀스 디코더가 직접 연결</li>
<li>Sequence-to-Sequence 텍스트 인식기와 다르게 입력 이미지를 시퀀스 표현으로 변환하지 않는다.</li>
<li>단어(word) 수준 주석만 필요하므로 문자(character) 수준 주석이 제공되지 않는 실제 데이터로 학습이 가능하다.</li>
<li>최초의 종단간 학습이 가능한 비순환 네트워크였다.</li>

<h2>2. Related Work</h2>
<h3>Irregular Scene Text Recognition</h3>
<li>해당 인식 방법은 시퀀스로 모델링하고 다중 클래스 이미지 분류로 인식한다.</li>

<h3>Non-recurrent Sequence Modeling</h3>

<h2>3. Model Architecture</h2>
<h3>3.1 Encoder</h3>
<h3>3.2 Decoder </h3>

<h2>4. Experiments</h2>
<h3>4.1 Datasets</h3>
<h3>4.2 Implementation Details</h3>
<h3>4.3 Ablation Study</h3>
<h3>4.4 Comparison with State-of-the-art</h3>
<h3>4.5 Performance with Inaccurate Bounding-boxes</h3>

<h2>5. Conclusion</h2>
<li>단순한 아키텍처: CNN 인코더를 Attention 기반 디코더에 직접 연결한다.(입력 이미지를 시퀀스로 변환하지 않는다.)</li>
<li>병렬 훈련: 비순환 네트워크</li>
<li>단순 훈련 데이터: 단어 수준 주석의 훈련 데이터가 필요하다.</li>
<li>다양한 크기의 이미지의 Feature를 통합하고 가로 세로 비율을 유지하면서 입력 이미지의 크기를 조정하는 등 다양하게 확장할 수 있다.</li>

<br>

<a href='https://www.researchgate.net/publication/332169025_A_Simple_and_Robust_Convolutional-Attention_Network_for_Irregular_Text_Recognition'>논문 원본 보기</a>