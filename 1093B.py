n = int(input())

for _ in range(n):
    s = input()
    ch = s[0]*len(s)

    if(s == ch):
        print(-1)
    else:
        freq = {}
        for i in s:
            freq[i] = freq.get(i,0) + 1
        for k , v in freq.items():
            for _ in range(v):
                print(k, end = "")
        print()