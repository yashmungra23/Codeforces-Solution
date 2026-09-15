x = int(input())

total = 1
last = input()

for i in range(x-1):
    curr = input()

    if curr[0] != last[0]:
        total += 1
        last = curr
    
print(total)