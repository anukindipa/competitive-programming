n, m = input().split()
m = int(m)
n = int(n)

nei = [[] for i in range(n)]
bne = [[] for i in range(n)]

for i in range(m):
    l,r = input().split()
    l = int(l)-1
    r = int(r)-1
    nei[l].append(r)
    bne[r].append(l)

v_n = [0 for i in range(n)]
v_b = [0 for i in range(n)]

stop = []

while not stop:
    def dfs(node, cr):
        v_n[node] = cr
        for neighbour in nei[node]:
            if not v_n[neighbour]:
                return dfs(neighbour, cr+1)
            else:
                print(-1)
                return True
                break

    for i in range(n):
        if v_n == 0:
            dfs(i,0)
    if stop:
        break

    mmmm = (v_n[0],0)
    for i in range(n):
        if (v_n[i],i)>mmmm:
            mmmm = v_n[i],i
    if stop:
        break

    def bdf(node, cr):
        v_b[node] = cr
        for neighbour in bne[node]:
            if not v_b[neighbour]:
                bdf(neighbour, cr+1)
            else:
                print(-1)
                stop = [True]
                return stop
    if not stop:
        bdf(mmmm[0], 0)
        qq= max(v_b)
        print(qq+mmmm[1]-1)
    break
    stop = [True]