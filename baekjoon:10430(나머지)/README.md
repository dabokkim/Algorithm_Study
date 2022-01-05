# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 10430번 나머지 출력 파이썬(python)  풀이</span>

- [백준 10430번 나머지](https://www.acmicpc.net/problem/10430)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
(A+B)%C는 ((A%C) + (B%C))%C 와 같을까? <br>
<br>
(A×B)%C는 ((A%C) × (B%C))%C 와 같을까? <br>
<br>
세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오. <br>
<br>
## 입력 <br>
첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000) <br>
<br>
## 출력 <br>
첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
3가지 문자를 입력받을때 split()함수를 통해서 구분해준뒤 캐스팅한다. <br>
이후에 문제의 주어진 식을 사용한다. <br>
<p>
A,B,C = input().split() <br> 
A =int(A) <br>
B =int(B) <br>
C =int(C) <br>
print((A+B)%C,((A%C) + (B%C))%C,(A*B)%C,((A%C) * (B%C))%C, sep='\n') <br>
