#선택 정렬(파이썬)
list=[]
num = int(input("정렬할 숫자의 갯수를 입력하시오 : "))
for i in range(num):
    list.append(int(input("정렬할 숫자를 입력하시오 : ")))
    
def select_sort(list) :
        for i in range(num-1) : 
            min_number=i # 최소값을 저장할 변수 초기화
            for j in range(i+1,num):
                if list[min_number]>list[j]:  # 최소값 구하는 루틴
                    min_number=j  # 최소값의 인덱스값을 넘겨줌
            list[i], list[min_number] = list[min_number], list[i]
select_sort(list)
print(list)

