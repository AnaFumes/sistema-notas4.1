<div align="center">

# 📚 Sistema de Notas v4.1

Sistema de gerenciamento de notas escolares desenvolvido em **C++**.  
Cadastra alunos, registra notas por disciplina, calcula médias, classifica o desempenho e gera relatórios em arquivos de texto.

</div>

---

## ✨ Funcionalidades

- 👤 Cadastro de até **20 alunos** com suporte a nomes compostos
- 📝 Registro de notas em até **5 disciplinas** por aluno
- 🧮 Cálculo automático da **média** de cada aluno
- 🏆 Identificação do aluno com **maior e menor média**
- 🔍 Validação de nomes em branco e intervalo de notas (0 a 10)
- 💾 Geração de `relatorio.txt` com data e hora
- 📋 Geração de `reprovados.txt` com lista de alunos reprovados
- 📂 Leitura de relatórios salvos diretamente pelo menu
- 🚪 Opção de **sair do sistema** pelo menu principal

---

## 📊 Classificação por Desempenho

| Status | Critério |
|:------:|----------|
| ✅ **Aprovado** | Média ≥ 7,0 |
| ⚠️ **Recuperação** | Média entre 5,0 e 6,9 |
| ❌ **Reprovado** | Média < 5,0 |

---

## 📋 Conteúdo dos Relatórios

### `relatorio.txt`
| Campo | Descrição |
|-------|-----------|
| 📅 Data e hora | Momento em que o relatório foi gerado |
| 👤 Alunos | Nome, média e situação de cada aluno |
| 📊 Resumo | Total de aprovados, em recuperação e reprovados |
| 🏆 Maior média | Nome e média do melhor aluno |
| 📉 Menor média | Nome e média do aluno com menor desempenho |

### `reprovados.txt`
Lista exclusiva com nome e média de todos os alunos reprovados. Caso não haja nenhum, o arquivo registra essa informação.

---

## 💻 Pré-requisitos

| Requisito | Detalhe |
|-----------|---------|
| Compilador | C++11 ou superior (`g++`, `clang++`, MSVC) |
| Sistema Operacional | **Windows** (utiliza `<windows.h>`) |

---

## 🚀 Como Compilar e Executar

**Compilar:**
```bash
g++ -o sistema_notas main.cpp
```

**Executar:**
```bash
sistema_notas.exe
```

---

## 📝 Como Usar

Ao iniciar, o menu principal é exibido e permanece ativo até a opção **5 — Sair**:

```
===========================
     SISTEMA NOTAS v4.1
===========================
 1- Novo relatorio
 2- Ver relatorio salvo
 3- Sobre o sistema
 4- Relatorio de reprovados
 5- Sair do sistema
 Escolha uma opcao:
```

### Opção 1 — Novo Relatório

1. Informe a **quantidade de alunos** (1 a 20)
2. Digite o **nome** de cada aluno — nomes em branco são rejeitados
3. Informe a **quantidade de disciplinas** (1 a 5)
4. Digite as **notas** de cada disciplina (0,0 a 10,0)
5. O sistema exibe o relatório completo no terminal
6. Os arquivos `relatorio.txt` e `reprovados.txt` são gerados automaticamente

### Opção 2 — Ver Relatório Salvo

Lê e exibe o conteúdo de `relatorio.txt`. Exibe aviso caso o arquivo não exista.

### Opção 3 — Sobre o Sistema

Exibe informações sobre a versão, desenvolvedora e turma.

### Opção 4 — Relatório de Reprovados

Lê e exibe o conteúdo de `reprovados.txt`. Exibe aviso caso o arquivo não exista.

### Opção 5 — Sair

Encerra o programa com uma mensagem de despedida.

---

## 📁 Estrutura do Projeto

```
.
├── main.cpp            # Código-fonte principal
├── relatorio.txt       # Gerado após o primeiro relatório
├── reprovados.txt      # Gerado junto com o relatório
└── README.md
```

---

## 📌 Observações

- Notas devem estar entre **0 e 10** — valores fora do intervalo são rejeitados
- Nomes em branco **não são aceitos** — o sistema solicita novamente
- Os arquivos `relatorio.txt` e `reprovados.txt` são **sobrescritos** a cada novo relatório
- O relatório inclui **data e hora** da geração
- O programa utiliza `<windows.h>`, sendo **exclusivo para Windows**

---

## 🤝 Contribuindo

Contribuições são bem-vindas!  
Abra uma [issue](../../issues) para relatar problemas ou sugerir melhorias, ou envie um [pull request](../../pulls) com suas alterações.

---

<div align="center">

## 👩‍💻 Desenvolvedora

**Ana Beatriz Zancanaro Fumes**  
Turma: **LOPAL 2026 — SENAI-SP**

</div>