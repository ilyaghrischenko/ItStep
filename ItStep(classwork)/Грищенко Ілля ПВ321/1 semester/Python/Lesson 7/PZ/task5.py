x = int(input("Введіть номер 1 координату: "))
y = int(input("Введіть номер 1 координату: "))

if x > 0 and y > 0:
    print("Точка знаходиться в 1 чверті")
elif x < 0 and y < 0:
    print("Точка знаходиться в 3 чверті")
elif x > 0 and y < 0:
    print("Точка знаходиться в 4 чверті")
elif x < 0 and y > 0:
    print("Точка знаходиться в 2 чверті")