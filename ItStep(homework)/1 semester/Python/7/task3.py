kyiv = int(input("Введіть вартість для Київстара: "))
mts = int(input("Введіть вартість для МТС: "))
vod = int(input("Введіть вартість для Vodafone: "))

x = int(input("1: Київстар-МТС\n2: Київстар-Водафон\n3: МТС-Київстар\n4: МТС-Водафон\n5: Водафон-Київстар\n6: Водафон-МТС"))

if x == 1 or x == 2:
    print(f"Вартість розмови - {kyiv}")
elif x == 3 or x == 4:
    print(f"Вартість розмови - {mts}")
elif x == 5 or x == 6:
    print(f"Вартість розмови - {vod}")

# Не зовсім зрозумів суть задачі, тому, мабуть, виконав не правильно