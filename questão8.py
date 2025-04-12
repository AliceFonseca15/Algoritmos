lista = list(map(int,input().split()))
valor = int(input())
pares = 0

for i in range(0,len(lista)):
    for x in range(i + 1,len(lista)):
        if lista[i] + lista[x] == valor:
            pares += 1

print(pares)   