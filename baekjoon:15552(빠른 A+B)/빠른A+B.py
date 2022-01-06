import sys #sys를 포함하겠다는 것으로 sys.stdin.readline() 사용가능 -->input대신에 사용

T=int(input())
for i in range(T) :
    A,B=sys.stdin.readline().split()
    A=int(A)
    B=int(B)
    print(A+B)
