# Sistema de Notas v4.0
> Gerenciamento escolar de notas e médias em C++

## 📖 Sobre o Projeto
O **Sistema de Notas v4.0** é uma aplicação em linha de comando (CLI) projetada para o gerenciamento eficiente de notas escolares. O software permite o registo de alunos, lançamento de notas por disciplinas, cálculo automático de médias e exportação de relatórios detalhados persistidos em ficheiro físico `.txt`.

---

## ✨ Funcionalidades
* **Cadastro Estruturado:** Suporte para até 20 alunos com nome completo.
* **Avaliação Multidisciplinar:** Registo de notas para até 5 disciplinas por aluno.
* **Processamento Automático:** Cálculo em tempo real da média aritmética individual.
* **Classificação de Status:** Definição automatizada da situação académica do aluno (Aprovado, Recuperação ou Reprovado).
* **Métricas Gerais:** Resumo consolidado com a contagem total de alunos por situação.
* **Persistência de Dados:** Gravação automática do relatório num ficheiro `relatorio.txt` com suporte para leitura de sessões anteriores.
* **Painel Informativo:** Secção integrada com dados de autoria e versão do sistema.

---

## 🎯 Critérios de Avaliação

A classificação do corpo estudantil é determinada com base nas seguintes métricas de médias:

| Situação | Critério Académico | Indicador Visual |
| :--- | :--- | :---: |
| **Aprovado** | Média $\ge$ 7.0 | ✅ |
| **Recuperação** | Média entre 5.0 e 6.9 | ⚠️ |
| **Reprovado** | Média < 5.0 | ❌ |

---

## 🛠️ Tecnologias e Requisitos
* **Linguagem:** C++ (Padrão ISO C++11 ou superior)
* **Bibliotecas Standard:** `<iostream>`, `<fstream>`, `<string>`, `<ctime>`
* **Dependência de OS:** `<windows.h>` (Utilizada para manipulação do ambiente de execução Windows)
* **Compilador Recomendado:** GCC (MinGW) / MSVC (Microsoft Visual C++)
* **Plataforma Alvo:** Windows

---

## 🚀 Como Executar

Siga os passos abaixo para clonar, compilar e rodar a aplicação na sua máquina:

1. **Clonar o Repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/sistema-notas.git](https://github.com/seu-usuario/sistema-notas.git)
   cd sistema-notas