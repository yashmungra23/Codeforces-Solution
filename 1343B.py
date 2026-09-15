t = int(input())

for i in range(t):
    n = int(input())

    if (n/2)%2 == 1:
        print("NO")
    else:
        print("YES")
        
        for i in range(1,n//2+1):
            print(i*2, end = " ")
        for i in range(1,n//2):
            print(i*2-1, end = " ")
        print(n-1 + n//2)
        