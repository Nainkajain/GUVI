def posMul(k, count):
    if k <= 9:
        return count*k
    return count*(k%10) + posMul(k//10, count+1)

print(posMul(int(input()), 1))
