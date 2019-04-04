n = int(input())
l = list(map(int,input().split()))
p = 1
l2 = []
for k in l:
    if k<0:
        l2.append(k)
    elif k>0:
        p *= k

l2 = list(sorted(l2, reverse=True))
if len(l2)%2:
    l2 = l2[1:]

for k in l2:
    p *= k

print(p)

