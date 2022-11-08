<div align='center'>
    <h1> YOLOv7: Trainable bag-of-freebies sets new state-of-the-art for real-time object detectors</h1>
</div>

<h2>Terminology(memo)</h2>
<li>FPS : Frames Per Second, 1초에 화면이 얼마나 다시 그려지느냐의 단위, 30프레임이면 1초에 30번 화면을 다시 그리는 것</li>
<li>AP : Average Precision, Object Detection(물체 검출 알고리즘)의 성능을 평가하는 방법 중 하나</li>
<li></li>

<h2>Author</h2>
<li>Chien-Yao Wang, Alexey Bochkovskiy, Hong-Yuan Mark Liao</li>
<li>대만의 정보 과학 연구소(Academia Sinica)</li>
<li>Accepted 6 Jul 2022</li>

<h2>Abstract</h2>
<li>5FPS~160FPS 범위에서 속도와 정확도 모두 기존 Object Detection 모델을 모두 능가한다.</li>
<li>GPU V100에서 30FPS 이상의 Object detection 모델 중 가장 높은 정확도인 56.8% AP를 달성했다.</li>
<li>본 논문에서는 사전훈련된 가중치를 사용하지 않고 처음부터 MS COCO 데이터셋에서만 YOLOv7 을 훈련했다.</li>

<h2>1. Introduction</h2>

<h2>2. Related work</h2>
<h3>2.1 Real-time object detectors</h3>
<h3>2.2 Model re-parameterization</h3>
<h3>2.3 Model scaling</h3>

<h2>3. Architecture</h2>
<h3>3.1 Extended efficient layer aggregation networks</h3>
<h3>3.2 Model scaling for concatenation-based models</h3>

<h2>4. Trainable bag-of-freebies</h2>
<h3>4.1 Planned re-parameterized convolution</h3>
<h3>4.2 Coarse for auxiliary and fine for lead loss</h3>
<h3>4.3 Other trainable bag-of-freebies</h3>

<h2>5. Experiments</h2>
<h3>5.1 Experimental setup</h3>
<h3>5.2 Baseline</h3>
<h3>5.3 Comparison with state-of-the-arts</h3>
<h3>5.4 Ablation study</h3>

<h2>6. Conclusions</h2>

<h2>7. Acknowledgements</h2>

<h2>8. More comparison</h2>



<a href='https://arxiv.org/abs/2207.02696'>논문 원본 보기</a>
<a href='https://bskyvision.com/465'>AP 잘 정리해놓은 블로그 글 보기</a>