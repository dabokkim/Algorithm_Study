# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 2739번 구구단 파이썬(python)  풀이</span>

- [백준 2739번 나머지](https://www.acmicpc.net/problem/2739)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다. <br>
시간을 나타낼 때, 불필요한 0은 사용하지 않는다. <br>
<br>
## 입력 <br>
첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.<br>
<br><br> 
## 출력 <br>
첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력한다. (입력과 같은 형태로 출력하면 된다.) <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 단수를 입력받는다. <br>
2. 입력받은 단수와 1부터9까지 반복하면서 곱한다. <br>
<p>
N = int(input()) <br>
for i in range(1,10,1) : <br>
&nbsp    result =N*i <br>
&nbsp    print(N, "*", i, "=", result) <br>

