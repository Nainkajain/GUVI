from math import sqrt
def isPrime(k):
    for i in range(2, int(sqrt(k))+1):
        if not k%i:
            return False
    return True

def printAll(k):
    if 2<k:
        print(2,end=" ")
    for i in range(3, k, 2):
        if isPrime(i):
            print(i, end=" ")

printAll(int(input()))
