string1 = list(input().split())
for i in range(len(string1)):
    string1[i] = string1[i][::-1]
print(" ".join(string1))
