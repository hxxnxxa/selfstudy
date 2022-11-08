<div align='center'>
    <h1> A Simple and Robust Convolutional-Attention Network for Irregular Text Recognition</h1>
</div>

본 논문은 한글이 아닌 영문으로 구성된 MS COCO 데이터셋을 사용했다는 것을 참고하세요.

<br>

<h2>Author</h2>
<li>Peng Wang, Lu Yang, Hui Li, Yuyan Deng, Chunhua Shen, Yanning Zhang</li>
<li>중국 시안의 Northwestern Polytechnical 대학교 컴퓨터 공학부, 호주 Adelaide 대학교 컴퓨터 공학부</li>
<li>Accepted 2 Apr 2019</li>

<h2>Abstract</h2>
<li>불규칙한 텍스트 인식을 위한 간단하고 강력한 Convolution + Attention 네트워크</li>
<li>장면 이미지에서 임의의 불규칙한 텍스트를 읽는 것은 여전히 어려운 문제다.</li>
<li>기존 접근 방식 : 정교한 네트워크 구조를 통합하여 모양을 처리 또는 순환 신경망 사용</li>
<li>본 논문에서는 불규칙한 텍스트 인식을 위한 접근 방식 제안</li>
<li>입력 이미지를 시퀀스 표현으로 변환할 필요 없이 2차원 CNN 기능을 Attention 기반 시퀀스 디코더에 직접 연결한다.</li>
<li>순환 모듈이 적용되지 않았기 때문에 본 논문에서 제안한 모델은 병렬로 학습이 가능</li>

<h2>1. Introduction</h2>
<li>본 논문이 제안한 모델은 설계상 단순하다.</li>
<li>이미지 인코딩을 위한 CNN 모델과 맞춤형 어텐션 기반 시퀀스 디코더로만 구성된다.</li>
<li>2D 이미지 인코더와 1D 시퀀스 디코더가 직접 연결된다.</li>
<li>RNN 모듈을 사용하지 않고 이 모델을 병렬로 학습할 수 있다.</li>
<li>RNN 기반의 불규칙한 텍스트 인식기와 비교하여 본 모델은 역방향 패스에서 3배~18배 더 빠르고 정방향 패스에서 2배~12배 더 빠르다.</li>
<li>이러한 가속화는 실험의 속도를 높이고 더 큰 데이터셋에서 모델이 사용될 수 있는 확장성을 갖게 된다.</li>

<h2>2. Related Work</h2>
<h3>Irregular Scene Text Recognition</h3>
<li>불규칙한 장면에서의 텍스트 인식</li>
<li>개별 문자를 먼저 detect 하여 단어로 통합하는 상향식 방식 또는 그 반대인 하향식 방향을 사용한다.</li>
<li>전체적으로 다중 클래스 이미지 분류로 텍스트를 인식한다.</li>
<li>RNN은 일반적으로 Sequential feature 학습에 사용된다.</li>
<li>CTC와 Sequence-to-sequence의 학습 모델은 Scene Text Recognition에 많이 사용되는 방법이다.</li>

<h3>Non-recurrent Sequence Modeling</h3>
<li>최근 몇 년 동안 Sequence-to-Sequence 학습 프레임워크에서 반복구조를 제거하여 완전한 병렬 계산을 가능하게 하고 처리속도를 가속화하는 작업이 제안되었다.</li>
<li>Gehring과 다른 연구원들은 완전히 Convolution layer로 구현된 기계 번역을 위한 Architecture를 제안했지만 이는 먼 위치간의 종속성을 학습하는데 어려움이 있었다.</li>
<li></li>

<h2>3. Model Architecture</h2>
<h3>3.1 Encoder</h3>
<li></li>
<li></li>
<li></li>

<h3>3.2 Decoder </h3>
<li></li>
<li></li>
<li></li>

<h2>4. Experiments</h2>
<h3>4.1 Datasets</h3>
<li></li>
<li></li>
<li></li>

<h3>4.2 Implementation Details</h3>
<li></li>
<li></li>
<li></li>

<h3>4.3 Ablation Study</h3>
<li></li>
<li></li>
<li></li>

<h3>4.4 Comparison with State-of-the-art</h3>
<li></li>
<li></li>
<li></li>

<h3>4.5 Performance with Inaccurate Bounding-boxes</h3>
<li></li>
<li></li>
<li></li>

<h2>5. Conclusion</h2>
<li></li>
<li></li>
<li></li>

<br>

<a href='https://www.researchgate.net/publication/332169025_A_Simple_and_Robust_Convolutional-Attention_Network_for_Irregular_Text_Recognition'>논문 원본 보기</a>