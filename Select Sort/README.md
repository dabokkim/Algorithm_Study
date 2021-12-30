# <span style="color:orange; font-size:17pt; font-weight:bold"> 선택 정렬 파이썬(python)  풀이</span>

<br><br>

# <span style="color: red; font-size:15pt">문제 정리</span>
새 학년의 시작이 되어 영통초등학교 3학년 2반 선생님은 새로운 교실, 새로운 아이들을 맞이하게 되었다. 늘 새 학년의 시작에 하는 것은 학생들에게 번호를 부여하는 것이다. <br>
그런데, 번호를 부여하는 기준은 보통 학생의 키 순서인데, 주로 작은 키부터 큰 키로 오름차순으로 번호가 부여된다. <br>
일단 선생님은 학생들을 모두 앞으로 나오게 하여 무작위로 일렬로 세웠다. 키가 들쑥날쑥하여 일정하지 않다. 이제 선생님은 이 학생들의 키를 재고 키 순서대로인 오름차순으로 번호를 부여하려 한다. <br>
프로젝트를 생성하여 다음의 과정을 거쳐서 키 순서대로 만드는 알고리즘을 작성해보자. <br>
입력한 키 데이터들이 교환이 수행될 때마다 현재의 키 데이터의 순서를 출력한다. <br>
(프로젝트 명은 Java로 작성하는 경우 Ex2Java로, C로 작성하는 경우 Ex2C로, C++로 작성하는 경우에는 Ex2Cpp로 작성하라.) <br>
## 입력 <br>
입력할 키 데이터를 프로그램 콘솔 키보드로부터 입력 받는다. <br>
입력할 키 데이터는 정수형으로 6개만 입력한다.  <br>
<br>
## 출력 <br>
입력한 키 데이터에 따른 정렬 결과를 프로그램 콘솔 터미널에 출력한다. <br>
입력한 키 데이터들이 교환이 수행될 때마다 현재의 키 데이터의 순서를 출력한다.  <br>
<br><br>

# <span style="color: red; font-size:15pt">문제 풀이</span>
1. 입력받을 숫자를 담을 빈 리스트를 생성해준다. <br>
2. 문자를 6개를 입력 받아야 하므로 반복문을 통하여 6번 입력을 받는다. <br>
3. 정렬 알고리즘 함수를 만든다. <br>
4. 리스트를 총 n번 비교한다고 할 시 스왑해야하는 횟수는 n-1이 된다. <br>
5. 최소값을 저장할 변수(min_number)를 설정한다. <br>
6. 임의의 최소값 변수 min_number와 인덱스를 1씩 올리는 반복을 하면서 리스트 내의 모든 수를 비교하여 최소값을 도출한다.<br>
7. 최소값을 리스트의 가장자리의 수와 스왑한다.<br>
8. 함수를 출력한다.<br>
<p>
list=[] <br>
num = int(input("정렬할 숫자의 갯수를 입력하시오 : "))<br>
for i in range(num):<br>
&nbsp    list.append(int(input("정렬할 숫자를 입력하시오 : ")))<br>
 <br>
def select_sort(list) :<br>
&nbsp&nbsp        for i in range(num-1) : <br>
&nbsp&nbsp&nbsp            min_number=i # 최소값을 저장할 변수 초기화<br>
&nbsp&nbsp&nbsp&nbsp           for j in range(i+1,num):<br>
&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp               if list[min_number]>list[j]:  # 최소값 구하는 루틴<br>
&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp                    min_number=j  # 최소값의 인덱스값을 넘겨줌<br>
&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp         list[i], list[min_number] = list[min_number], list[i]<br>
select_sort(list)<br>
print(list)<br>
