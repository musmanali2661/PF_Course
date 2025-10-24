def ShowGreetings(strName):
    title = strName + " sb"
    print(f"Assalam o Alykum {title}" )

def Add(val1, val2):
    res = val1 + val2
    print("Anser: ", res)

def Add2(val1, val2):
    res = val1 + val2
    return res
x = 5
y = 3
z = Add2(x,y)
print(z)
