n = int(input())
i_ind = int(input())
j_ind = int(input())
i = 0
j = 0

li=[]

for k in range(2**n):
    if k+1 == i_ind:
        i = int(input())
    elif k+1 == j_ind:
        j = int(input())
    else:
        li.append(int(input()))

li.sort()

mn = min(i,k)
mx = max(i,j)

sz = len(li)

if(li[int(sz/2 - 1)]<mn and li[-1]<mx):
    print("YES")
else:
    print("NO")