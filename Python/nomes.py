with open('nomes.txt', 'a', encoding='utf-8') as arquivo:
    while True:
        nome = input("Digite seu nome ou 'sair' para encerrar: ").strip().lower()
        if (nome == "sair"):
            print("Programa encerrado!")
            #print("nomes salvos:")
            #with open('nomes.txt', 'r') as destino:
                #nomes = destino.read().split(';')
                #for nome in nomes:
                    #print(nome)
            break
        else:
            arquivo.write(nome+';')
            print("nome escrito em 'nomes.txt'")

