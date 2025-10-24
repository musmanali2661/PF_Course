nVal = int(input("Enter a number to get sum upto 1:"))

sum = 0

while nVal > 0: 
    sum = sum + nVal
    nVal = nVal - 1

print("Answer: ", sum)