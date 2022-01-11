# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 2438번 별 찍기-1 파이썬(python)  풀이</span>

- [백준 2438번 별 찍기-1](https://www.acmicpc.net/problem/2438)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제 <br>
<br>
## 입력 <br>
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다. <br>
<br><br> 
## 출력 <br>
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 몇번 째줄 까지 입력을 받을 것인지 정수를 입력받는다. <br>
2. 반복문을 사용하여 다음줄로 넘어갈 때마다 별을 하나씩 늘려가면서 출력한다. <br>
<p>
count = int(input()) <br>
for i in range(1,count+1): <br>
&nbsp    print('*'*i) # i가1씩증가하므로 계단식으로 출력하려면 *출력 시마다 곱해준다. <br>
