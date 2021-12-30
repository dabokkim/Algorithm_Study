#버블정렬(파이썬)
list=[]
num = int(input("정렬할 숫자의 갯수를 입력하시오 : "))
for i in range(num):
    list.append(int(input("정렬할 숫자를 입력하시오 : ")))
def bubble_sort(list) :
    for j in range(num-1,0,-1): # 정렬완료된 숫자를 제외한 크기만큼을 비교해야하므로 크기를 1씩 감소시킨다
        for i in range(j) : # j크기만큼 동안 인접한 두 숫자를 비교하여 정렬을 수행
            if list[i]>list[i+1] :
                list[i], list[i+1] = list[i+1], list[i]
            elif list[i]<=list[i+1] : 
                continue
bubble_sort(list)
print(list)
