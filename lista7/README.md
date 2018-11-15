# Lista 7

Os arquivos contém os códigos em C, eles estão nomeados com o número do problema no arquivo `lista_07.pdf`.

## Execução
Eles foram compilados e rodados com os seguintes comandos:
```bash
gcc {arquivo.c} -o {arquivo} -lm
./{arquivo}
```

Para executar alguns códigos, como Busca Linear Recursiva em um vetor grande, foi necessário aumentar o tamanho do _stack_ com o seguinte comando:
```bash
ulimit -S -s 131072
```