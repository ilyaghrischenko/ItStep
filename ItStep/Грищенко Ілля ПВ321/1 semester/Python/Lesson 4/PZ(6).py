n = int(input("Введіть кількість кілометрів для N: "))
m = int(input("Введіть кулькість кілометрів для M: "))

days = m // n + (m - (m // n) * n) // ((m - 1) % n + 1)

print(f"Маршрут довжиною {m} можна проїхати за {days} день")