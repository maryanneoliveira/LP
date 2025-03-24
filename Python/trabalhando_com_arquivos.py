def escreve_nomes(nomes):
    arquivo = open('meu_nome.txt', 'a', encoding='utf-8')
    arquivo.write(nomes)
    arquivo.close()

for i in range(10):
    nomes = input("digite seu nome: ")
    escreve_nomes(nomes)