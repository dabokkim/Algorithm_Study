# <span style="color:orange; font-size:17pt; font-weight:bold">BOJ 2884번 알람시계 파이썬(python)  풀이</span>

- [백준 2884번 알람시계](https://www.acmicpc.net/problem/2884)
<br><br>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
상근이는 매일 아침 알람을 듣고 일어난다. 알람을 듣고 바로 일어나면 다행이겠지만, 항상 조금만 더 자려는 마음 때문에 매일 학교를 지각하고 있다. <br>
<br>
상근이는 모든 방법을 동원해보았지만, 조금만 더 자려는 마음은 그 어떤 것도 없앨 수가 없었다.<br>
<br>
이런 상근이를 불쌍하게 보던, 창영이는 자신이 사용하는 방법을 추천해 주었다.<br>
<br>
바로 "45분 일찍 알람 설정하기"이다.<br>
<br>
이 방법은 단순하다. 원래 설정되어 있는 알람을 45분 앞서는 시간으로 바꾸는 것이다. 어차피 알람 소리를 들으면, 알람을 끄고 조금 더 잘 것이기 때문이다. 이 방법을 사용하면, 매일 아침 더 잤다는 기분을 느낄 수 있고, 학교도 지각하지 않게 된다.<br>
<br>
현재 상근이가 설정한 알람 시각이 주어졌을 때, 창영이의 방법을 사용한다면, 이를 언제로 고쳐야 하는지 구하는 프로그램을 작성하시오. <br>
<br>
## 입력 <br>
첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) 그리고 이것은 현재 상근이가 설정한 놓은 알람 시간 H시 M분을 의미한다.<br>
<br>
입력 시간은 24시간 표현을 사용한다. 24시간 표현에서 하루의 시작은 0:0(자정)이고, 끝은 23:59(다음날 자정 1분 전)이다. 시간을 나타낼 때, 불필요한 0은 사용하지 않는다. <br>
<br>
## 출력 <br>
첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력한다. (입력과 같은 형태로 출력하면 된다.) <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 45분 앞당겨진 시간을 new_H,new_M으로 초기화한다. <br>
2. H가 00시를 기준으로 조건문을 작성한다. <br>
3. H가 00시 보다크고 M이 45보다 크면 H는 그대로, M은 45를 빼준다. <br>
4. H가 00시 보다크고 M이 45보다 작거나 같으면 H는 1을 빼주고 M은 45를 빼준값을 다시 60분에서 빼준다. (분은 60분까지이므로) <br>
5. H가 00시 이고 M이 45보다 작으면 H는 23으로 설정해주고 M은 45를 빼준값을 다시 60분에서 빼준다. (하루가 24시간이므로) <br>
<br>
<p>
H,M = input().split() <br>
H = int(H) <br>
M = int(M) <br>
new_M =0 <br>
new_H =0 <br>
<br>
if H!=0 and M<45 : <br>
&nbsp	new_M=60-(45-M) <br>
&nbsp	new_H=H-1 <br>
&nbsp	print(new_H, end=" ") <br>
&nbsp	print(new_M) <br>
<br>
elif H>=0 and M>=45 : <br>
&nbsp	new_M=M-45 <br>
&nbsp	new_H=H <br>
&nbsp	print(new_H, end=" ") <br>
&nbsp	print(new_M) <br>
<br>
elif H==0 and M<45 : <br>
&nbsp	new_M=60-(45-M) <br>
&nbsp	new_H=23 <br>
&nbsp	print(new_H, end=" ") <br>
&nbsp	print(new_M) <br>
