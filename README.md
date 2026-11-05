# Exercícios em C

Uma coleção de pequenos exercícios de programação em C. Cada programa é um único arquivo `.c`, independente, que pode ser compilado e executado sozinho.

## Programas

### `cofrinho.c` — Cofrinho

Um cofrinho com menu de opções. Cada escolha adiciona uma moeda ao total acumulado, e o programa continua pedindo opções até você escolher `0`.

| Opção | Ação                          |
|-------|-------------------------------|
| `1`   | Adiciona R$ 0,50              |
| `2`   | Adiciona R$ 1,00              |
| `3`   | Adiciona R$ 2,00              |
| `0`   | Encerra e mostra o total      |

Qualquer outra entrada mostra "Opcao invalida" e exibe o menu novamente.

**Conceitos:** laço `do...while`, `if / else if`, acumuladores, leitura de dados com `scanf`.

### `consumo-agua.c` — Consumo de Água

Pede o consumo de água (em m³) de 5 residências. Para cada uma, informa se o consumo está **dentro da média** (≤ 20 m³) ou **acima da média** (> 20 m³). No final, mostra a média geral das 5 residências.

**Conceitos:** laço `for`, condicionais, cálculo de soma e média.

### `avaliacao-loja.c` — Avaliação da Loja

Pede a nota (de 0 a 10) dada por cada um de 10 clientes e depois mostra a **média das notas**. Se a média for **menor que 7**, exibe um aviso; caso contrário, informa que a média é boa (7 ou mais).

**Conceitos:** laço `for`, variáveis `float`, cálculo de soma e média, `if / else`.

### `contador-passos.c` — Contador de Passos

Simula um aplicativo de contagem de passos com meta diária de **10.000 passos**. A cada hora, o programa pergunta quantos passos você deu e vai somando até a meta ser atingida. No final, mostra o total de passos e quantas horas foram necessárias.

**Conceitos:** laço `while`, contadores, acumuladores, leitura de dados com `scanf`.

## Como compilar e executar

Você precisa de um compilador C, como o [GCC](https://gcc.gnu.org/) (no Windows, dá para usar o [MinGW-w64](https://www.mingw-w64.org/) ou o MSYS2).

```bash
# Cofrinho
gcc cofrinho.c -o cofrinho
./cofrinho

# Consumo de água
gcc consumo-agua.c -o consumo-agua
./consumo-agua

# Avaliação da loja
gcc avaliacao-loja.c -o avaliacao-loja
./avaliacao-loja

# Contador de passos
gcc contador-passos.c -o contador-passos
./contador-passos
```

No Windows, execute os programas como `cofrinho.exe`, `consumo-agua.exe`, `avaliacao-loja.exe` e `contador-passos.exe`.

## Exemplo

```
--- Cofrinho ---
1 - Adicionar R$ 0,50
2 - Adicionar R$ 1,00
3 - Adicionar R$ 2,00
0 - Encerrar
Escolha uma opcao: 2
...
Escolha uma opcao: 0

Total guardado: R$ 1.00
```

> A saída dos programas usa apenas caracteres ASCII (sem acentos), para aparecer corretamente em qualquer terminal (inclusive no `cmd` do Windows).

## Autor

**Marllon Lorran** — [LinkedIn](https://www.linkedin.com/in/eumarllonlrn/) · [GitHub](https://github.com/eumarllonlrn)
