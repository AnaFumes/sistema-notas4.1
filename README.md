<div align="center">

# 📚 Sistema de Notas v4.1

Sistema de gerenciamento de notas escolares desenvolvido em **C++**.  
Cadastra alunos, registra notas por disciplina, calcula médias, classifica o desempenho e salva relatórios em arquivo de texto.

</div>

---

## ✨ Funcionalidades

- 👤 Cadastro de até **20 alunos** com suporte a nomes compostos
- 📝 Registro de notas em até **5 disciplinas** por aluno
- 🧮 Cálculo automático da **média** de cada aluno
- 🏆 Identificação do aluno com **maior e menor média**
- 🔍 Validação de nomes em branco e intervalo de notas (0 a 10)
- 💾 Geração e salvamento de relatório em `relatorio.txt` com data e hora
- 📂 Leitura de relatório salvo anteriormente
- ℹ️ Tela de informações sobre o sistema

---

## 📊 Classificação por Desempenho

| Status | Critério |
|:------:|----------|
| ✅ **Aprovado** | Média ≥ 7,0 |
| ⚠️ **Recuperação** | Média entre 5,0 e 6,9 |
| ❌ **Reprovado** | Média < 5,0 |

---

## 📋 Resumo do Relatório

Ao final de cada relatório, o sistema exibe:

| Campo | Descrição |
|-------|-----------|
| Aprovados | Quantidade de alunos aprovados |
| Recuperação | Quantidade de alunos em recuperação |
| Reprovados | Quantidade de alunos reprovados |
| 🏆 Maior média | Nome e média do aluno com melhor desempenho |
| 📉 Menor média | Nome e média do aluno com menor desempenho |

---

## 💻 Pré-requisitos

| Requisito | Detalhe |
|-----------|---------|
| Compilador | C++11 ou superior (`g++`, `clang++`, MSVC) |
| Sistema Operacional | **Windows** (o código utiliza `<windows.h>`) |

---

## 🚀 Como Compilar e Executar

**1. Compilar:**
```bash
g++ -o sistema_notas main.cpp
```

**2. Executar:**
```bash
# Windows
sistema_notas.exe
```

---

## 📝 Como Usar

Ao iniciar o programa, será exibido o menu principal:

```
===========================
     SISTEMA NOTAS v4.1
===========================
 1- Novo relatorio
 2- Ver relatorio salvo
 3- Sobre o sistema
 Escolha uma opcao:
```

### Opção 1 — Novo Relatório

1. Informe a **quantidade de alunos** (1 a 20)
2. Digite o **nome** de cada aluno (nomes compostos são aceitos)
3. Informe a **quantidade de disciplinas** (1 a 5)
4. Digite as **notas** de cada disciplina (0,0 a 10,0)
5. O sistema calcula as médias e exibe o relatório completo
6. O relatório é salvo automaticamente em `relatorio.txt`

### Opção 2 — Ver Relatório Salvo

Lê e exibe o conteúdo de `relatorio.txt`. Caso o arquivo não exista, uma mensagem de aviso é exibida.

### Opção 3 — Sobre o Sistema

Exibe informações sobre a versão, desenvolvedora e turma.

---

## 📁 Estrutura do Projeto

```
.
├── main.cpp         # Código-fonte principal
├── relatorio.txt    # Gerado automaticamente após o primeiro relatório
└── README.md
```

---

## 📌 Observações

- Notas devem estar entre **0 e 10** (validação automática)
- Nomes em branco **não são aceitos** — o sistema solicita novamente
- O relatório inclui **data e hora** da geração
- O arquivo `relatorio.txt` é **sobrescrito** a cada novo relatório gerado
- O programa utiliza `<windows.h>`, portanto é **exclusivo para Windows**

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