m=int(input())
n=5
def multiple(m, n): 
  a = range(n, (m * n)+1, n) 
  print(*a) 
multiple(m, n)
