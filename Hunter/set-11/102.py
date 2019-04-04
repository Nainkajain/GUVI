l = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]

def digitSquare(k):
    if k <= 9:
        return l[k]
    return l[k%10] + digitSquare(k//10)

print(digitSquare(int(input())))
