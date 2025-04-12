lista = list(map(int,input().split()))
contador = 0

for i in range(0,len(lista) - 1):
    if lista[i] > lista[i + 1]:
        contador += 1

if contador > 0:
    print("Não está ordenado de forma  não decrescente")
else:
    print("Está ordenado de forma não decrescente")