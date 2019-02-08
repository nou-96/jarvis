numb=int(input(""))
k=0
for i in range(2,numb//2+1):
    if(numb%i==0):
        k=k+1
if(k<=0):
    print("yes")
else:
    print("no")
