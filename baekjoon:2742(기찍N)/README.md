# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 2742번 기찍N 파이썬(python)  풀이</span>

- [백준 2742번 기찍N](https://www.acmicpc.net/problem/2742)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.<br>
<br>
## 입력 <br>
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.<br>
<br><br>
## 출력 <br>
첫째 줄부터 N번째 줄 까지 차례대로 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 몇번 반복할지를 변수 N으로 입력받는다. <br>
2. N번 반복하면서 큰수부터 차례대로 출력해야하므로 N부터 0까지 -1씩 감소하면서 출력한다. <br>
<p>
N = int(input()) <br>
for i in range(N,0,-1) : <br>
&nbsp    print(i)
