numero = int(input())
divisor = 1
divisores = 0
while divisor <= numero:
    if numero % divisor == 0:
        divisores += 1
    divisor += 1

if divisores > 2:
    print("Não é primo")
else:
    print("Primo")

        


