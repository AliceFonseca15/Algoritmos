lista = list(map(int,input().split())) 

soma_max = lista[0] 
soma_atual= 0
nova_lista = [lista[0]] 
for i in range(1,len(lista)):
    soma_atual = soma_max + lista[i] 
    if soma_atual > lista[i]:  
        nova_lista.append(soma_atual)
        soma_max = soma_atual    
    else:
        nova_lista.append(lista[i])
        soma_max = lista[i]
     
    soma_atual = 0

maior = max(nova_lista)
print(maior)
