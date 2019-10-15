from math import *
p = int(input("Введите цифру для расчета переменной: "))
if p == 1:
    x = int(input("Введите x: "))
    a = int(input("Введите а: "))
    g = 5*(-10*a*a+27*a*x+28*x*x)/(5*a*a-9*a*x+4*x*x)
    print("Переменная G = " + str(g))
elif p == 2:
    x = int(input("Введите x: "))
    a = int(input("Введите а: "))
    f = sin(28*a*a-57*a*x+14*x*x)
    print("Переменная F = " + str(f))
elif p == 3:
    x = int(input("Введите x: "))
    a = int(input("Введите а: "))
    y = log(-27*a*a+24*a*x+35*x*x+1)
    print("Переменная Y = " + str(y))

