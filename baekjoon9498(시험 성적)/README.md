# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 9480번 시험 성적 파이썬(python)  풀이</span>

- [백준 9480번 시험성적](https://www.acmicpc.net/problem/9480)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.  <br>
## 입력 <br>
첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다. <br>
<br>
## 출력 <br>
시험 성적을 출력한다.
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
<p><br>
score = int(input()) <br>
if score>89 and score<=100 : <br>
&nbsp    print("A") <br>
elif score>79 and score<90 : <br>
&nbsp    print("B") <br>
elif score>69 and score<80 : <br>
&nbsp    print("C") <br>
elif score>59 and score<70 : <br>
&nbsp    print("D") <br>
else : <br>
&nbsp    print("F") <br>
