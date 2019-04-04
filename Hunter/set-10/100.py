from math import sqrt

def isPrime(k):
    if not k%2:
        return False
    for i in range(2, int(sqrt(k))+1):
        if not k%i:
            return False
    return True

k = int(input())
for i in range(2, k-2):
    if isPrime(i) and isPrime(k-i):
        print(i,k-i)
        break
    
