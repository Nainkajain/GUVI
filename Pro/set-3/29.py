import math as m
def digitSum(x):
  if x<=9:
    return x
  return x%10 + digitSum(x//10)

def printPossibleWays(m):
  start = m - min(m,9*m.ceil(m.log10(m)))
  l = []
  for i in range(start, m):
    if i+digitSum(i) == m:
      l.append(i)

  if len(l):
    print(len(l))
    print(*l, sep="\m")
  else:
    print("-1")


printPossibleWays(int(input()))
