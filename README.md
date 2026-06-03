# Sistema de Notas v4.1
> Gerenciamento escolar dinâmico de notas, médias e persistência de dados em C++.

## 📖 Sobre o Projeto
O **Sistema de Notas v4.1** é uma aplicação em linha de comando (CLI) projetada para o gerenciamento eficiente de registros escolares. O software permite o cadastro de alunos, lançamento de notas por disciplinas, cálculo automático de médias e a exportação/leitura de relatórios consolidados em arquivos físicos `.txt`, contando agora com registro cronológico (timestamp).

---

## ✨ Funcionalidades
* **Menu Interativo Inicial:** Escolha entre criar um novo relatório, ler dados de sessões anteriores ou visualizar informações de autoria.
* **Cadastro Estruturado Dinâmico:** Suporte para até 20 alunos com validação de campos vazios para o nome do estudante.
* **Avaliação Multidisciplinar Adaptável:** Registro customizado de 1 a 5 disciplinas por ciclo de avaliação.
* **Cálculo Automático:** Processamento em tempo real da média aritmética individual de cada aluno.
* **Persistência de Dados com Timestamp:** Gravação automatizada do relatório no arquivo `relatorio.txt`, registrando o dia e a hora exata da geração do documento.
* **Leitura Integrada:** Visualização do relatório salvo diretamente no terminal sem precisar sair do programa.

---

## 🎯 Critérios de Avaliação

A classificação gerada no arquivo final é determinada com base nas seguintes métricas de médias:

| Situação | Critério Académico | Indicador Visual |
| :--- | :--- | :---: |
| **Aprovado** | Média $\ge$ 7.0 | ✅ |
| **Recuperação** | Média entre 5.0 e 6.9 | ⚠️ |
| **Reprovado** | Média < 5.0 | ❌ |

---

## 🛠️ Tecnologias e Requisitos
* **Linguagem:** C++ (Padrão ISO C++11 ou superior)
* **Bibliotecas Standard Utilizadas:** * `<iostream>` (Entrada e saída de dados)
  * `<string>` (Manipulação de cadeias de caracteres)
  * `<fstream>` (Fluxo de arquivos para leitura/escrita)
  * `<ctime>` (Captura de data e hora do sistema)
* **Dependência de OS:** `<windows.h>`
* **Compilador Recomendado:** GCC (MinGW) / MSVC
* **Plataforma Alvo:** Windows

---

## 🚀 Como Executar

Siga os passos abaixo para clonar, compilar e rodar a aplicação na sua máquina:

1. **Clonar o Repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/sistema-notas.git](https://github.com/seu-usuario/sistema-notas.git)
   cd sistema-notas

* Data e horario do relatorio: Wed Jun  3 12:00:00 2026

📝 Exemplo de Saída no Arquivo
* ============================
*          RELATORIO          
* ============================
* Ana Beatriz Media: 8.5 -  aprovado 
* Bruno Lima Media: 5.2 -  Recuperacao 
* Carlos Melo Media: 3.8 -  Reprovados 


* Resumo: 1 aprovados 1 em recuperacao 1 Reprovados

📂 Estrutura do Projeto
* sistema-notas/
* ├── main.cpp  
* ├── relatorio.txt  
* └── README.md   

👩‍💻 Autora
Desenvolvido com 💙 por Ana Beatriz Zancanaro Fumes

Turma: LOPAL 2026
Instituição: SENAI-SP




