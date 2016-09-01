def factorial(num):
    return 1 if num == 1 else factorial(num - 1) * num


print(factorial(int(input())))
