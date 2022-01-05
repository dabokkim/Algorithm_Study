# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 8393번 합 파이썬(python)  풀이</span>

- [백준 8393번 합](https://www.acmicpc.net/problem/8393)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오. <br>
<br>
## 입력 <br>
시간을 나타낼 때, 불필요한 0은 사용하지 않는다. <br>
<br>
<br><br> 
## 출력 <br>
1부터 n까지 합을 출력한다. <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. n까지 더할 수를 입력받는다. <br>
2. 도출될 합을 초기화해주고, n+1까지 반복문을 통하여 숫자를 1씩 증가하면서 sum변수에 누적시킨다. <br>
<p> <br>
n= int(input()) <br>
sum=0 <br>
for i in range(1,n+1,1) :  <br>
&nbsp    sum+=i <br>
print(sum) <br>
