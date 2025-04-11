def primo(num,div):
    divisores = 0
    if div == 1:
        divisores += 1
        return divisores 
    if num % div == 0:
        divisores += 1
    a = primo(num,div - 1)
            
valor = int(input())
r = primo(valor,valor)

print(r)


        


