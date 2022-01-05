# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 10950번 A+B-3 파이썬(python)  풀이</span>

- [백준 10950번 A+B-3](https://www.acmicpc.net/problem/10950)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.. <br>
<br>
## 입력 <br>
첫째 줄에 테스트 케이스의 개수 T가 주어진다. <br>

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)<br>
<br><br> 
## 출력 <br>
각 테스트 케이스마다 A+B를 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 반복할 횟수를 T만큼 입력받는다. <br>
2. 반복문을 통행 T만큼 A+B를 반복하여 실행한다. <br>
<p>
T=int(input()) <br>

for i in range (0,T,1) : <br>
&nbsp    A,B=input().split() <br>
&nbsp    A=int(A) <br>
&nbsp    B=int(B) <br>
&nbsp    print(A+B) <br>
