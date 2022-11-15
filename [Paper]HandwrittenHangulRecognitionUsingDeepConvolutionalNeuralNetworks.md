<div align='center'>
    <h1> Handwritten Hangul recognition using deep convolutional neural networks</h1>
</div>

<br>

<h2>Author</h2>
<li>In-Jung Kim, Xiaohui Xie</li>
<li>독일 베를린의 슈프링어 페를라그 회사</li>
<li>Received: 10 February 2014</li>
<li>Revised: 15 August 2014</li> 
<li>Accepted: 20 August 2014</li>
<li>Published online: 9 September 2014</li>

<h2>Abstract</h2>
<li>DCNN기반의 손글씨체 인식 (HHN, Handwritten Hangul Recognition) 제안</li>

<h2>1. Introduction</h2>
<li>심층 합성곱 신경망(DCNN)이 많은 이미지 인식 분야에서 뛰어난 성능을 보인 것처럼 DNN 또한 많은 문제 영역에서 널리 채택되었다.</li>
<li><a href='https://ebbnflow.tistory.com/119'>DNN</a> : Deep Neural Network, 모델 내 은닉층을 2개 이상으로 하여 학습, DNN을 응용한 알고리즘이 CNN, RNN, LSTM, GRU 등</li>
<li>DNN은 통합 프레임워크 내에서 Feature 추출 및 분류를 통합한다. 이는 한글 필기에서 혼동되는 글자를 구별하는 데 필요한 판별 특징을 학습하는데 유리할 수 있다.</li>
<li>DNN은 높은 수준의 특징을 추출하는데 능숙하다.</li> 
<li>DCNN에서 사용하는 컨볼루션 레이어와 맥스풀링 레이어는 모양 변형을 처리하는 데 효과적이며 한글쓰기에서 과도한 필기체를 처리하는 데 핵심이 될 것이다.</li>
<li>본 연구는 DCNN을 이용하여 필기 한글 인식 방법을 제안한다.</li>

<h2>2. Related works</h2>
<h3>2.1 Handwritten Hangul recognition</h3>
<h3>2.2 Deep neural networks</h3>

<h2>3. The DCNN-based Hangul recognizer</h2>
<h3>3.1 Overall structure</h3>
<h3>3.2 Convolution layers</h3>
<h3>3.3 Max-pooling layers</h3>
<h3>3.4 Classification layers</h3>
<h3>3.5 Activation functions</h3>

<h2>4. Training DCNN</h2>
<h3>4.1 Gradient-based learning</h3>
<h3>4.2 Error criteria</h3>
<h3>4.3 Weight normalization</h3>

<h2>5. Further improvement techniques</h2>
<h3>5.1 Modified MSE criteria</h3>
<h3>5.2 Initializing convolution masks by edge operators</h3>
<h3>5.3 Elastic distortion</h3>
<h3>5.4 GPU-based parallel processing</h3>

<h2>6. Experiments</h2>
<h3>6.1 Experimental environment</h3>
<h3>6.2 Numeral digit recognition (MNIST)</h3>
<h3>6.3 Hangul recognition (SERI95a and PE92)</h3>

<h2>7. Conclusion</h2>

<br>

<a href='https://link.springer.com/article/10.1007/s10032-014-0229-4'>논문 원본 보기</a>