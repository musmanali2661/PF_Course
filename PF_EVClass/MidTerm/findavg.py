
def calc_avg(nList):
    sum = 0
    for n in nList:
        sum = sum + n

    res = sum / len(nList)
    return res

listNums = [8,8,8,8,8,8,8]
A = calc_avg(listNums)
print(A)
