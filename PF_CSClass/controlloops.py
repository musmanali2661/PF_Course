def printline(symbol):
    for i in range(0,20):
        print(symbol, end='')
    print('')

printline('-*')
print("Welcome to my Project...")
printline('-')

while True:
    print("1. Add new student")
    print("2. Edit student")
    print("3. Exit")
    printline('=')
    choice = input("Your Choice: ")

    if(choice == '3'):
        break

print("Have a nice day...")