def ShowGreetings(strName):
    title = strName + " sb"
    print("Assalam o Alykum!" , " " , strName)


def Add(val1, val2):
    res1 = val1[0] + val2[0]
    res2 = val1[1] + val2[1]
    return [res1, res2]

def Mul(val1, val2):
    return val1 * val2


ans = Add( [1,2] , [3, 4])
print("Answer:", ans)

