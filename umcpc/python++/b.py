import sys
sys.setrecursionlimit(2005)
from collections import defaultdict
 
# Fast input
data = sys.stdin.read().split()
it = iter(data)
n = int(next(it))
k = int(next(it))
# etc... continue using int(next(it)) to read the rest of the input.




# n,k = [int(j) for j in input().split()]

its = [1 for i in range(n)]

ps = [int(next(it))-1 for i in range(n)]

bl = {i:[] for i in range(n)}

for i in range(n):
    bl[ps[i]].append(i)


for _ in range(k):
    nw_ls = [0 for i in range(n)]
    for i in range(n):
        # i linked to ps[i]
        # if backlinked swap
        nw_ls[ps[i]] += its[i]
    its = nw_ls


mx = max(its)

def main():
    for i in range(n):
        if its[i]==mx:
            print(i+1,mx)
            return

main()