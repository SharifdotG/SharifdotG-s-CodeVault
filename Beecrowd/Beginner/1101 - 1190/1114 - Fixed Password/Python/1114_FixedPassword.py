password = 2002

while True:
    userInput = int(input())
    if userInput == password:
        print("Acesso Permitido")
        break
    else:
        print("Senha Invalida")
