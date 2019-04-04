def merge(l1, l2):
    p = 0
    q = 0
    l = []
    while p != len(l1) and q != len(l2):
        if l1[p] <= l2[q]:
            l.append(l1[p])
            p+=1
        else:
            l.append(l2[q])
            q+=1
    while p!=len(l1):
        l.append(l1[p])
        p+=1
    while q!=len(l2):
        l.append(l2[q])
        q+=1
    return l

k  = int(input())
l = []
total = 0
for p in range(k):
    l.append(list(map(int,input().split())))
    total += len(l[-1])

final = []
while len(l) != 1:    
    final = []
    k = len(l)
    for p in range(0,k,2):
        if p == k-1:
            final.append(l[p])
        else:
            final.append(merge(l[p], l[p+1]))
    l = final

l = l[0]
print(*l)
