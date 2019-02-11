n1=int(input())
m1=0
while(n1>0):
  d=n1%10
  m1=m1+(d*d)
  n1=n1//10
print(m1)
