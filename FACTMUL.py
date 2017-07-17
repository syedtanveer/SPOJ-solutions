num = 109546051211
n = int(input())
ans = 1
t = 1
presentfact = 1
if n <= 587116:
    while t<=n :
        presentfact =(presentfact%num)* t
        ans =((ans%num)* presentfact%num)%num
        t+=1
    print(ans%num)
else:
    print("0")
         