T = int(input())
for i in range(1,T+1) :
    A,B = map(int, input().split()) # T번 입력받음
    print('Case #' + str(i) + ':', A, '+', B, '=', A+B) # i는 정수형이지만 문자형과 같이 붙여쓰기 위하여 캐스팅한다.



