years=int(input())
if((years%400==0) or ((years%4==0) and (years%100!=0))):
  print("yes")
else:
  print("no")
