<div align="center">

# 📚 Sistema de Notas v4.1

Sistema de gerenciamento de notas escolares desenvolvido em **C++**.  
Permite cadastrar alunos, registrar notas por disciplina, calcular médias, classificar alunos e salvar/ler relatórios em arquivos de texto.

</div>

---

## ✨ Funcionalidades

- 👤 Cadastro de até **20 alunos**
- 📝 Registro de notas em até **5 disciplinas** por aluno
- 🧮 Cálculo automático da média de cada aluno
- 🔍 Validação de nome em branco
- 💾 Salvamento de relatório em `relatorio.txt`
- 📂 Leitura de relatórios salvos
- ℹ️ Informações sobre o sistema

---

## 📊 Classificação por Desempenho

| Status | Critério |
|--------|----------|
| ✅ **Aprovado** | Média ≥ 7,0 |
| ⚠️ **Recuperação** | Média entre 5,0 e 6,9 |
| ❌ **Reprovado** | Média < 5,0 |

---

## 📋 Resumo Geral

Ao final de cada relatório, o sistema exibe:

- Quantidade de **aprovados**
- Quantidade de alunos em **recuperação**
- Quantidade de **reprovados**

---

## 💻 Pré-requisitos

Compilador C++ compatível com **C++11 ou superior** (`g++`, `clang++`, etc.)

---

## 🚀 Como Compilar e Executar

**Compilar:**
```bash
g++ -o sistema_notas main.cpp
```

**Executar (Linux/macOS):**
```bash
./sistema_notas
```

**Executar (Windows):**
```bash
sistema_notas.exe
```

---

## 📝 Como Usar

Ao iniciar o programa, o seguinte menu será exibido:

```
===========================
     SISTEMA NOTAS v4.1
===========================
 1- Novo relatorio
 2- Ver relatorio salvo
 3- Sobre o sistema
```

### Opção 1 — Novo Relatório

1. Informe a quantidade de alunos (1 a 20)
2. Digite o nome de cada aluno
3. Informe a quantidade de disciplinas (1 a 5)
4. Digite as notas (0 a 10)
5. O sistema calcula as médias automaticamente
6. O relatório é exibido e salvo em arquivo

### Opção 2 — Ver Relatório Salvo

Exibe o conteúdo de `relatorio.txt`, caso ele exista.

### Opção 3 — Sobre o Sistema

Exibe informações sobre o sistema, desenvolvedor e turma.

---

## 📁 Estrutura do Projeto

```
.
├── main.cpp
├── relatorio.txt
└── README.md
```

---

## 📌 Observações

- Notas devem estar entre **0 e 10**
- Nomes em branco **não são permitidos**
- Nomes com espaços são aceitos
- O relatório inclui **data e hora** da geração
- O programa utiliza `<windows.h>`, sendo voltado para **Windows**

---

## 🤝 Contribuindo

Contribuições são bem-vindas!  
Sinta-se à vontade para abrir uma [issue](../../issues) ou enviar um [pull request](../../pulls).

---

<div align="center">

## 👩‍💻 Desenvolvedora

**Ana Beatriz Zancanaro Fumes**  
Turma: **LOPAL 2026 — SENAI-SP**

</div>

