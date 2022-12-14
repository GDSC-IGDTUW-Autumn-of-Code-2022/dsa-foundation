a = "aaa"

L = []
for x in a:
    L.append(x)


L1=L.copy()
for x in range(0,len(L)):
    for y in range(0,len(L)):
        if(x<y):
            L1.append(f'{L[x]}{L[y]}')

L1.append(a)

print(*L1, sep=",")
