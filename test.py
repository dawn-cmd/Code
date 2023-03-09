x = 0
y = 0
for i in range(4):
    yd = 2 * x - 3 * x * y
    y = y + yd * 0.1
    x = x + 0.1
print(y)
