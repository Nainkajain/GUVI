m = list(input().split())
for i in range(len(m)):
    m[i] = m[i].lower()

m = sorted(m)
print(*m, sep="\n")
