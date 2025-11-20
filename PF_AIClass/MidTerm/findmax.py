
def find_max(nlist):
    M = 0
    for n in nlist:
        if n > M:
            M = n
    return M

listNums = [2,6,3,9,8,1]
print(find_max(listNums))