H,M = input().split()
H = int(H)
M = int(M)
new_M =0
new_H =0

if H!=0 and M<45 :
	new_M=60-(45-M)
	new_H=H-1
	print(new_H, end=" ")
	print(new_M)

elif H>=0 and M>=45 :
	new_M=M-45
	new_H=H
	print(new_H, end=" ")
	print(new_M)

elif H==0 and M<45 :
	new_M=60-(45-M)
	new_H=23
	print(new_H, end=" ")
	print(new_M)
