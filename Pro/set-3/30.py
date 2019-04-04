def checkDivisiblity(x):
  if not int(x)%8:
    return True
  return False

def check(s):
  for j in range(len(s)):
    if checkDivisiblity(s[j]):
      return True
  for j in range(len(s)):
    for j in range(j+1,len(s)):
      if checkDivisiblity(s[j]+s[j]):
        return True
  for j in range(len(s)):
    for j in range(j+1,len(s)):
      for k in range(j+1,len(s)):
        if checkDivisiblity(s[j]+s[j]+s[k]):
          return True
  return False

s = input()
if check(s):
  print("yes")
else:
  print("no")
