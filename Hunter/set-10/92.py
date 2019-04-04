string1 = input()
possible = False

for i in range(1,len(string1)):
    if string1[-i] > string1[-i-1]:
        possible = True
        s2 = list(string1)
        s2[-i], s2[-i-1] = s2[-i-1], s2[-i]
        break

if possible:
    print("".join(s2))
else:
    print(-1)
