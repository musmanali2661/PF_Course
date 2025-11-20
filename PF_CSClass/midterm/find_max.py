
def find_max(nlist):
    M = 0
    for n in nlist:
        if n > M:
            M = n

    return M


listNums = [3,9,6,18,4,7]

print(max(listNums))