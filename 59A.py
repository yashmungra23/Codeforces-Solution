s1 = input()

s = len(s1)

lowercase = 0

for i in range(s):
    if s1[i] == s1[i].lower():
        lowercase = lowercase + 1
    
if lowercase >= s/2 :
    print(s1.lower())
else:
    print(s1.upper())