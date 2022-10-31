<div align='center'>
<h1>Character decomposition to resolve class imbalance problem in Hangul OCR</h1>
</div>

<h3>Author</h3>
<li>현대자동차</li> 
<li>김건욱, 손재민, 이강휴, 민재식</li>
<li>Accepted 12 Aug 2022</li>


<h3>Abstract</h3>
<li>한글 OCR에서 클래스 불균형 문제를 해결하기 위한 문자 분해</li>
<li>한글 OCR(Optical Character Recognition)에 대한 새로운 접근 방식 제시</li>
<li>한글은 11,172개의 서로 다른 문자를 52개 자소로 표현할 수 있는 글자로 각 문자를 자소의 조합으로 표현할 수 있다.</li>
<li>전체 문자 수가 신경망의 용량을 압도할 수 있기 때문에 기존 OCR 인코딩 방식은 자주 사용하는 더 작은 문자 집합을 미리 정의한다.</li>
<li><b>자소 인코딩(grapheme encoding)</b>이 한글 OCR에 효율적일 뿐만 아니라 성능도 있음을 보여준다.</li>
<li>여기서 제시하는 네트워크는 한글 OCR의 두 가지 주요 문제인 클래스 불균형과 대상 클래스 선택을 해결한다는 것을 보여준다.</li>

<h3>1. Introduction</h3>
1. <b>문제점 제시</b> 
<br>
<li>영어와 달리 각 한글 문자는 [자음 + 모음], [자음 + 모음 + 자음] 과 같이 2개 또는 3개의 자소 조합으로 표현된다. </li>
<li>총 문자 수는 11,172자에 달하며 이는 표현 능력에서 소프트맥스 계층을 쉽게 고갈시킬 수 있다. </li>
<li>따라서 현재 한글 OCR 시스템은 문자의 일부만 활용하고 가장 많이 사용되는 1000자 정도를 유지하고 있다.</li>

<b>2. 이전 연구의 한계</b> 
<br>
<li>이전 접근 방식은 균일하게 분포된 문자를 제공하기 위해 가상 이미지를 생성하려고 시도했지만 대상 도메인을 얻는 데 중요하지 않을 수 있는 문자를 학습하기 위한 추가 학습 시간이 발생한다.</li>

<b>3. 해결책 제시</b>
<br>
<li>이 문제를 해결하기 위해 문자를 자소로 분해할 것을 제안한다.</li>


<h3>2. Related Work</h3>


<h3>3. Method</h3>


<h3>4. Experiments</h3>
<h4>4.1 Datasets</h4>
<h4>4.2 Implementation Details</h4>
<h4>4.3 Experimental Settings</h4>
<h4>4.4 Quantitative Results</h4>
<h4>4.5 Further Analysis</h4>


<h3>5. Conclusion</h3>