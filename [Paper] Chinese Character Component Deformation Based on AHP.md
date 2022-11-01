<div align='center'>
    <h1>Chinese Character Component Deformation Based on AHP</h1>
</div>

<h2>Paper information</h2>
<li>Category: Article</li>
<li>Author: Tian Chen, Fang Yang, Xiang Gao</li>
<li>Received 27 Aug 2022</li>
<li>Accpted 3 Oct 2022</li>
<li>Published 6 Oct 2022</li>

<h2>Abstract</h2>
<li>기존 연구에서 구성 요소를 변형하여 새로운 문자를 생성하는 것은 동일한 스타일의 한자 라이브러리를 생성하는 효과적인 방법이다. 여기서 구성 요소 변형은 Affine 변환에 의해 수행된다.</li>
<li>Affine 변환에서 매개변수를 계산할 때 기존 방법은 일반적으로 많은 수동 설정 또는 복잡한 계산 문제가 있다.</li>
<li>기존 연구의 문제를 해결하기 위해 본 논문은 AHP(Analytic Hierarchy Process)기반의 한자 성분 변형 방법 제안</li>
<li>Affine 변환에서 제어점 선택에 영향을 미치는 요인을 결정한 다음 AHP를 사용하여 특징점의 가중치를 계산하고 가중치에 따라 제어점을 선택한다.</li>
<li>Affine 변환의 전제 조건으로 한자 골격 지도와 이웃 정보를 기반으로 한 한자 특징점의 매칭 방법도 제안</li>

<h2>1. Introduction</h2>
<li>기존 적은 수의 한자에서 원래의 서체를 유지하면서 자동으로 더 많은 문자를 생성하는 방법을 제안한다.</li>
<li>기존의 인쇄 글꼴을 대상 글꼴로 변환하기 위해 대상 글꼴의 쓰기 스타일을 학습하는데 이는 구조와 스타일이 실제 문자와 다른 경우가 많다.</li>
<li>이는 딥러닝 기반 접근 방식이 이미지 질감과 색상 전달에 뛰어나지만 한자는 복잡한 구조를 가지고 있기 때문에 발생한다.</li>
<li>요소(구성요소 및 획)의 위치와 형상이 조금만 변경되어도 의미나 스타일이 크게 바뀔 수 있다.</li>

<a href='https://www.mdpi.com/2076-3417/12/19/10059'>논문 원본 보기</a>