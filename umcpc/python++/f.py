from itertools import combinations

m = int(input())
k = int(input())

tot = 0

ll = []

for i in range(m):
    xxxx = int(input())
    ll.append(xxxx)

l = combinations(ll, 2)

for x in l:
    if x[0]*x[1] > k:
        tot+=1

print(tot)