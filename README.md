# 🎮 Sistema de Ranking de Jogadores

Um pequeno sistema em linguagem C para gerenciar jogadores e suas pontuações, com funcionalidades de cadastro, busca, ordenação e exibição de ranking.

## 📋 Descrição do Projeto

Este projeto implementa um sistema interativo de ranking de jogadores que permite:
- ✅ Cadastrar novos jogadores com ID, nome e pontuação
- ✅ Listar todos os jogadores cadastrados
- ✅ Buscar um jogador específico pelo ID
- ✅ Ordenar o ranking pela pontuação (maior para menor)
- ✅ Exibir o campeão (jogador com maior pontuação)

## 🏗️ Estrutura do Código

### Estrutura de Dados
```c
typedef struct {
    int id;           // Identificador único do jogador
    char nome[50];    // Nome do jogador (até 49 caracteres)
    int pontos;       // Pontuação do jogador
} Jogador;
```

### Funcionalidades Principais

| Função | Descrição |
|--------|-----------|
| `cadastrarJogador()` | Adiciona um novo jogador ao sistema |
| `listarJogadores()` | Exibe todos os jogadores cadastrados em formato tabular |
| `buscarPorId()` | Encontra um jogador pelo seu ID |
| `ordenarPorPontuacao()` | Ordena todos os jogadores por pontuação (algoritmo Bubble Sort) |
| `exibirCampeao()` | Mostra o jogador com maior pontuação |

## 🔧 Como Compilar

### Pré-requisitos
- GCC (GNU C Compiler) instalado
- Terminal/Prompt de Comando

### Windows
```bash
gcc desafio.c -o desafio.exe
```

### Linux/Mac
```bash
gcc desafio.c -o desafio
```

## ▶️ Como Executar

### Windows
```bash
desafio.exe
```

### Linux/Mac
```bash
./desafio
```

## 📖 Como Usar

Após executar o programa, você verá um menu com as seguintes opções:

```
==============================
 SISTEMA RANKING JOGADORES
==============================
1 - Cadastrar jogador
2 - Listar jogadores
3 - Buscar jogador por ID
4 - Ordenar ranking
5 - Exibir campeao
0 - Sair
```

### Exemplos de Uso

#### 1️⃣ Cadastrar Jogador
- Escolha a opção **1**
- Digite o ID (número único)
- Digite o nome do jogador
- Digite os pontos

#### 2️⃣ Listar Jogadores
- Escolha a opção **2**
- Todos os jogadores serão exibidos em uma tabela

#### 3️⃣ Buscar por ID
- Escolha a opção **3**
- Digite o ID para buscar
- Os dados do jogador serão exibidos

#### 4️⃣ Ordenar Ranking
- Escolha a opção **4**
- Os jogadores serão ordenados por pontuação (maior → menor)

#### 5️⃣ Exibir Campeão
- Escolha a opção **5**
- O jogador com maior pontuação será exibido

#### 0️⃣ Sair
- Escolha a opção **0** para encerrar o programa

## ⚙️ Especificações Técnicas

- **Linguagem:** C
- **Limite de jogadores:** 20 (máximo)
- **Limite de caracteres por nome:** 50
- **Algoritmo de ordenação:** Bubble Sort
- **Compilador testado:** GCC

## 🎯 Requisitos Atendidos

✅ Cadastro de jogadores  
✅ Validação de IDs duplicados  
✅ Limite de máximo 20 jogadores  
✅ Busca por ID  
✅ Ordenação de ranking  
✅ Exibição de campeão  
✅ Menu interativo  
✅ Entrada de dados via scanf  
✅ Saída formatada com printf  

## 📝 Notas Importantes

- O programa permanece em execução até que você escolha a opção **0 (Sair)**
- Os dados dos jogadores são armazenados apenas na memória durante a execução
- IDs duplicados não são permitidos
- A pontuação máxima não tem limite de valor
- O ranking é ordenado em ordem decrescente (maior pontuação primeiro)

## 👨‍💻 Autor

Yara Schneider

---

**Última atualização:** 16 de junho de 2026
