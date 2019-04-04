n = int(input())
l = list(map(int,input().split()))

maximum_count = 1
count = 1
for k in range(1,n):
    if l[k] >= l[k-1]:
        count += 1
    elif maximum_count < count:
        maximum_count = count
        count = 1

print(maximum_count)
