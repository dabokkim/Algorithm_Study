# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 10869번 사칙연산 파이썬(python)  풀이</span>

- [백준 10869번 사칙연산](https://www.acmicpc.net/problem/10869)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.  <br>
## 입력 <br>
두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000) <br>
<br>
## 출력 <br>
첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
문자를 입력받을 때 split()함수를 통해서 구분해준뒤 캐스팅한다. <br>
이후에 사칙연산의 식을 사용하여 계산한다. <br>
<p><br>
A,B = input().split() <br>
A = int(A) <br>
B = int(B) <br>
print(A+B) <br>
print(A-B) <br>
print(A*B) <br>
print(int(A/B)) <br>
print(int(A%B)) <br>
