x = input()
y = input()

x = min(len(x), len(y))
for i in range(x):
    print(y[i]+x[i])

for i in range(x, len(x)):
    print(x[i])

for i in range(x, len(y)):
    print(y[i])
