# Exercícios em C

Uma coleção de pequenos exercícios de programação em C. Cada programa é um único arquivo `.c` que pode ser compilado e executado sozinho.

## Programas

### `cofrinho.c` — Cofrinho

Um cofrinho com menu. Cada escolha adiciona uma moeda ao total acumulado, e o programa continua perguntando até você escolher `0`.

| Opção | Ação                         |
|-------|------------------------------|
| `1`   | Adiciona R$0,50              |
| `2`   | Adiciona R$1,00              |
| `3`   | Adiciona R$2,00              |
| `0`   | Para e mostra o total        |

Qualquer outra opção exibe "Opcao invalida" e mostra o menu de novo.

**Conceitos:** laço `do...while`, `if / else if`, acumuladores, leitura de dados com `scanf`.

### `consumo-de-agua.c` — Consumo de Água

Pede o consumo de água (em m³) de 5 residências. Para cada uma, informa se o consumo está **dentro da média** (≤ 20 m³) ou **acima da média** (> 20 m³). No final, mostra a média geral das 5 residências.

**Conceitos:** laço `for`, condicionais, cálculo de soma e média.

### `avaliacao-loja.c` — Avaliação da Loja

Pede a nota (de 0 a 10) dada por cada um de 10 clientes. Depois, mostra a **nota média**. Se a média for **menor que 7**, exibe um aviso. Caso contrário, informa que a média é boa (7 ou mais).

**Conceitos:** laço `for`, variáveis `float`, cálculo de soma e média, `if / else`.

### `contador-de-passos.c` — Contador de Passos

Simula um aplicativo de contagem de passos com meta diária de **10.000 passos**. A cada hora, o programa pergunta quantos passos você deu e vai somando até a meta ser atingida. No final, mostra o total de passos e quantas horas foram necessárias.

**Conceitos:** laço `while`, contadores, acumuladores, leitura de dados com `scanf`.

## Como compilar e executar

Você precisa de um compilador C, como o [GCC](https://gcc.gnu.org/) (no Windows, dá para usar o [MinGW-w64](https://www.mingw-w64.org/) ou o MSYS2).

```bash
# Cofrinho
gcc cofrinho.c -o cofrinho
./cofrinho

# Consumo de água
gcc consumo-de-agua.c -o consumo-de-agua
./consumo-de-agua

# Avaliação da loja
gcc avaliacao-loja.c -o avaliacao-loja
./avaliacao-loja

# Contador de passos
gcc contador-de-passos.c -o contador-de-passos
./contador-de-passos
```

No Windows, execute os programas como `cofrinho.exe`, `consumo-de-agua.exe`, `avaliacao-loja.exe` e `contador-de-passos.exe`.

## Exemplo

```
--- Cofrinho ---
1 - Adicionar R$0,50
2 - Adicionar R$1,00
3 - Adicionar R$2,00
0 - Parar
Escolha uma opcao: 2
...
Escolha uma opcao: 0

Total guardado: R$1.00
```

> Os textos dos programas estão sem acento de propósito, para aparecerem corretamente em qualquer terminal (inclusive no `cmd` do Windows).

## Autor

**Marllon Lorran** — [LinkedIn](https://www.linkedin.com/in/eumarllonln/) · [GitHub](https://github.com/eumarllonlr)
