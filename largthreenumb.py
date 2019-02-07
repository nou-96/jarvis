numb1 = input()
numb2 = input()
numb3 = input()
if (numb1 >= numb2) and (numb1 >= numb3):
   largest = numb1
elif (numb2 >= numb1) and (numb2 >= numb3):
   largest = numb2
else:
   largest = numb3
print(largest)
