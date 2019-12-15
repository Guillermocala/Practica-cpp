def factorial(num, cant):
    temp = 1
    while cant != 0:
        temp = temp * num
        cant = cant - 1
    return temp
num = factorial(int(input()), 2)
print(num)
