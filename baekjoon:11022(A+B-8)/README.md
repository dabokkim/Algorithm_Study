# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 11022번 A+B-8 파이썬(python)  풀이</span>

- [백준 11022번 A+B-8](https://www.acmicpc.net/problem/2739)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. <br>
<br>
## 입력 <br>
첫째 줄에 테스트 케이스의 개수 T가 주어진다. <Br>
<Br>
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10) <br>
<br><br> 
## 출력 <br>
각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. T번 반복할 횟수를 입력받는다. <br>
2. T번 정수쌍을 입력받고 문제에 제시된 출력형태로 A+B를 출력한다. <br>
<p>
T = int(input()) <br>
for i in range(1,T+1) : <br>
&nbsp    A,B = map(int, input().split()) # T번 입력받음 <br>
&nbsp    print('Case #' + str(i) + ':', A, '+', B, '=', A+B) # i는 정수형이지만 문자형과 같이 붙여쓰기 위하여 캐스팅한다. <br>



