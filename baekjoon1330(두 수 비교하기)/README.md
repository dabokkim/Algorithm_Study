# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 1330번 두 수 비교하기 파이썬(python)  풀이</span>

- [백준 1330번 사칙연산](https://www.acmicpc.net/problem/1330)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.  <br>
## 입력 <br>
첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다. <br>
<br>
## 출력 <br>
첫째 줄에 다음 세 가지 중 하나를 출력한다.
<ul>
<li>
A가 B보다 큰 경우에는 '>'를 출력한다.
A가 B보다 작은 경우에는 '<'를 출력한다.
A와 B가 같은 경우에는 '=='를 출력한다.
</li>
</ul>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
문자를 입력받을 때 split()함수를 통해서 구분해준뒤 캐스팅한다. <br>
입력 받은 수를 if를 사용하여 조건식 만들기 <br>
<p>
A,B = input().split()
A =int(A)
B =int(B)

if A<B :
    print("<")
elif A>B :
    print(">")
elif A==B :
    print("==") 
