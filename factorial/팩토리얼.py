#알고리즘(팩토리얼)
num = int(input("정수를 입력하세요 : "))
def factorial(num) :
    sum=1
    for i in range (1,num+1,1) : #num-1까지 연산하므로 num포함시키기위해 num+1
        sum*=i
    return sum
print(factorial(num))
