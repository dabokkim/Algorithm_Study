# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 2741번 N찍기 파이썬(python)  풀이</span>

- [백준 2741번 N찍기](https://www.acmicpc.net/problem/2741)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오. <br>
<br>
## 입력 <br>
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.<br>
<br><br> 
## 출력 <br>
첫째 줄부터 N번째 줄 까지 차례대로 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 반복해서 출력할 갯수를 입력받는다. <br>
2. 그 갯수만큼 반복문을 통하여 변수 i에 값을 할당하여 출력한다. <br>
<p>
N = int(input()) <br>
for i in range(1,N+1) : <br>
&nbsp    print(i) <br>
