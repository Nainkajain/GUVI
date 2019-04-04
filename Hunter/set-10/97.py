def gcd(k,m):
    if m == 0:
        return k
    return gcd(m, k%m)

k,m = map(int,input().split())
if gcd(k,m)==1:
    print("yes")
else:
    print("no")
