# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 2753번 윤년 파이썬(python)  풀이</span>

- [백준 2753번 윤년](https://www.acmicpc.net/problem/2753)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오. <br>
<br>
윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.<br>
<br>
예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 하지만, 2000년은 400의 배수이기 때문에 윤년이다. <br>
<br>
## 입력 <br>
첫째 줄에 연도가 주어진다. 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다. <br>
<br>
## 출력 <br>
첫째 줄에 윤년이면 1, 아니면 0을 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 숫자를 입력받고 윤년의 조건식을 사용해서 조건문을 만들어 출력한다. <br>
<p>
year = int(input()) <br>
<br>
if year%4==0 and year%100!=0 or year%400==0 :<br>
&nbsp	print("1")<br>
else : <br>
&nbsp	print("0")
