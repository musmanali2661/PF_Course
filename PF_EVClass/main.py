num = int(input("Enter a number for Table: "))
order = int(input("Enter the order of Table: "))

i = 1

while i <= order:
    print(f"{num} x {i} = {num*i}")
    i = i + 1
