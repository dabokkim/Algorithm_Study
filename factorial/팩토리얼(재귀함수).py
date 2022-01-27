#팩토리얼 재귀함수적용
num = int(input("정수를 입력하세요 : "))
def factorial(num):
    if num>1 :
        return num*factorial(num-1)
    else :
        return 1
print(factorial(num))
