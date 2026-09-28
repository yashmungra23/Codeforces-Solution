n = int(input)

for i in range(0 , 9):
    if 4 in n or 7 in n:
        for i in range(0,9):
            if i in n:
                print("NO")
                break
    else:
        print("YES")