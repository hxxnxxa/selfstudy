<div align='center'>
    <h1> YOLOv7: Trainable bag-of-freebies sets new state-of-the-art for real-time object detectors</h1>
</div>

<h2>Terminology(memo)</h2>
<li>FPS : Frames Per Second, 1초에 화면이 얼마나 다시 그려지느냐의 단위, 30프레임이면 1초에 30번 화면을 다시 그리는 것</li>
<li>AP : Average Precision, Object Detection(물체 검출 알고리즘)의 성능을 평가하는 방법 중 하나</li>

<h2>Author</h2>
<li>Chien-Yao Wang, Alexey Bochkovskiy, Hong-Yuan Mark Liao</li>
<li>대만의 정보 과학 연구소(Academia Sinica)</li>
<li>Accepted 6 Jul 2022</li>

<h2>Abstract</h2>
<li>5FPS~160FPS 범위에서 속도와 정확도 모두 기존 Object Detection 모델을 모두 능가한다.</li>
<li>GPU V100에서 30FPS 이상의 Object detection 모델 중 가장 높은 정확도인 56.8% AP를 달성했다.</li>
<li>본 논문에서는 사전훈련된 가중치를 사용하지 않고 처음부터 MS COCO 데이터셋에서만 YOLOv7 을 훈련했다.</li>

<h2>1. Introduction</h2>
<li>컴퓨터 비전 분야에서 Real time object detection은 매우 중요한 주제이다.</li>
<li>다중 객체 추적, 자율 주행, 로봇 공학, 의료 이미지 분석에 사용된다.</li>
<li>일반적으로 CPU, GPU, NPU를 사용한다.</li>
<li>Apple사의 Apple neural engine, Intel의 neural compute stick, Nvidia의 Jetson AI edge 장치들, Qualcomm의 neural processing engine, MediaTek의 AI processing unit, Kneron의 AI SoCs등이 NPU이다.</li>
<li>본 논문은 제안한 모듈과 최적화 방법을 Trainable Bag 이라고 표현한다.</li>
<li>재매개변수화, 동적 레이블 할당이 네트워크 학습 및 Object detection 분야에서 중요해졌고 Object detection의 많은 문제를 발전시켰다.</li>
<li>본 논문은 여기서 발견한 몇 가지 새로운 문제를 제시하고 이를 해결하기 위한 효과적인 방법을 고안한다.</li>

<h2>2. Related work</h2>
<h3>2.1 Real-time object detectors</h3>
<li></li>
<li></li>
<li></li>

<h3>2.2 Model re-parameterization</h3>
<li></li>
<li></li>
<li></li>

<h3>2.3 Model scaling</h3>
<li></li>
<li></li>
<li></li>

<h2>3. Architecture</h2>
<h3>3.1 Extended efficient layer aggregation networks</h3>
<li></li>
<li></li>
<li></li>
<h3>3.2 Model scaling for concatenation-based models</h3>
<li></li>
<li></li>
<li></li>

<h2>4. Trainable bag-of-freebies</h2>
<h3>4.1 Planned re-parameterized convolution</h3>
<li></li>
<li></li>
<li></li>
<h3>4.2 Coarse for auxiliary and fine for lead loss</h3>
<li></li>
<li></li>
<li></li>
<h3>4.3 Other trainable bag-of-freebies</h3>
<li></li>
<li></li>
<li></li>

<h2>5. Experiments</h2>
<h3>5.1 Experimental setup</h3>
<li></li>
<li></li>
<li></li>
<h3>5.2 Baseline</h3>
<li></li>
<li></li>
<li></li>
<h3>5.3 Comparison with state-of-the-arts</h3>
<li></li>
<li></li>
<li></li>
<h3>5.4 Ablation study</h3>
<li></li>
<li></li>
<li></li>

<h2>6. Conclusions</h2>
<li></li>
<li></li>
<li></li>

<h2>7. Acknowledgements</h2>
<li></li>
<li></li>
<li></li>

<h2>8. More comparison</h2>
<li></li>
<li></li>
<li></li>

<br>

<a href='https://arxiv.org/abs/2207.02696'>논문 원본 보기</a>
<br>
<a href='https://bskyvision.com/465'>AP란?</a>