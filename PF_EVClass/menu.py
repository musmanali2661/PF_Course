def printLine():
    print("********************")

printLine()
print('Welcome to my Application...')
printLine()

while True:
    print('1. Add new book')
    print('2. Edit book')
    print('3. Search book')
    print('4. Exit')
    printLine()
    choice = input("your choice:")

    if choice != '4':
        continue

    break


