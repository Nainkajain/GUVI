def digitCount(k):
    if k<=9:
        return 1
    return 1 + digitCount(k//10)

def posMul(k, power):
    if k <= 9:
        return k**power
    return (k%10)**power + posMul(k//10, power)

k = int(input())
print(posMul(k, digitCount(k)))
