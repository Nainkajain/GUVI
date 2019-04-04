string1 = input()
s2 = list(string1)
odd = True
for i in range(len(string1)):
    if odd and string1[i] not in " !@#$'":
        odd = False
        s2[i] = string1[i].upper()
    else:
        odd = True

print("".join(s2))
