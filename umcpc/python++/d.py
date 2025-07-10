n = int(input())
 
li = []
for i in range(n):
    s = input().split()
    h,w = s
    h = int(h)
    w = int(w)
    li.append((h, w))

li.sort(reverse=True)

tot = 0
for i in range(n):
    if i>0:
        if li[i][0]<li[i-1][0]:
            tot+=li[i][1]
    else:
        tot+=li[i][1]
print(tot)