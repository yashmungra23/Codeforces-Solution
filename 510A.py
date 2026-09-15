n,m = map(int, input().split())

s1 = "#"
s2 = ""

for i in range(m-1):
    s1 += "#"
    s2 += "."

for i in range(n):
    if i%2==0:
        print(s1)
    else:
        if((i+1)%4==0):
            print("#"+s2)
        else:
            print(s2+"#")


    