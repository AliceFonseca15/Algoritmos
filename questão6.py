lista = list(map(int,input().split()))
maior = 0
for i in range(0,len(lista) - 1):
    a = abs(lista[i] - lista[i + 1])
    if a > maior:
        maior = a
    
print(maior)