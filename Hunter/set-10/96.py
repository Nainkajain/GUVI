def num(k):
    if k<9:
        return k
    return 9 + 10*num(k-9)
    
k = int(input())
print(num(k))
