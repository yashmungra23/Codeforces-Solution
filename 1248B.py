n = int(input())
arr = list(map(int,input().split()))
fsum = 0
ssum = 0

sorted(arr)

for i in range(n//2):
    fsum += arr[i]

for i in range(n//2 , n):
    ssum += arr[i]

print((fsum*fsum + ssum*ssum))