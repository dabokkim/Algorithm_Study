# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 14681번 사분면 고르기 파이썬(python)  풀이</span>

- [백준 14681번 사분면 고르기](https://www.acmicpc.net/problem/10999)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다. <br>
사분면은 아래 그림처럼 1부터 4까지 번호를 갖는다. "Quadrant n"은 "제n사분면"이라는 뜻이다.<br>
<br>
예를 들어, 좌표가 (12, 5)인 점 A는 x좌표와 y좌표가 모두 양수이므로 제1사분면에 속한다.<br>
점 B는 x좌표가 음수이고 y좌표가 양수이므로 제2사분면에 속한다.<br>
<br>
점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오. <br>
단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다. <br>
<br>
## 입력 <br>
첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0) <br>
<br>
## 출력 <br>
점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
0,0을 기준으로 좌표에 맞는 사분면을 조건식으로 만든다 <br>
<p>
X = int(input()) <br>
Y = int(input()) <br>
<br>
if X>0 and Y>0 :<br>
&nbsp 	print("1")<br>
elif X<0 and Y>0 :<br>
&nbsp 	print("2")<br>
elif X<0 and Y<0 :<br>
&nbsp 	print("3")<br>
elif X>0 and Y<0 :<br>
&nbsp 	print("4")<br>
