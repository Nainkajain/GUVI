f = 1
def posMul(m, p):
    if m <= 9:
        f = m
        return m**p
    return (m%10)**p + posMul(m//10, m%10)

m = int(input())
print(posMul(m, 0) - 1 + (m%10)**f)
