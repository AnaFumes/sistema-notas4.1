# Sistema de Notas v4.0
Gerenciamento escolar de notas e médias em C++

📖 Sobre o Projeto
Sistema de linha de comando para gerenciamento de notas escolares. Permite cadastrar alunos, lançar notas por disciplina, calcular médias e gerar relatórios persistidos em arquivo .txt.

✨ Funcionalidades
✅ Cadastro de até 20 alunos com nome completo
✅ Registro de notas para até 5 disciplinas por aluno
✅ Cálculo automático de média por aluno
✅ Classificação automática: Aprovado, Recuperação ou Reprovado
✅ Resumo geral com contagem por situação
✅ Salvar relatório em relatorio.txt
✅ Visualizar relatório de sessões anteriores
✅ Exibir informações sobre o sistema

🎯 Critérios de Avaliação

Média
✅ Aprovado- ≥ 7,0  
⚠️ Recuperação- ≥ 5,0 e < 7,0
❌ Reprovado- < 5,0


🛠️ Tecnologias
Linguagem: C++
Bibliotecas: iostream, fstream, string, ctime, windows.h
Compilador recomendado: g++ (MinGW) / MSVC
Plataforma: Windows

🚀 Como Executar
1. Clone o repositório
bash
git clone https://github.com/seu-usuario/sistema-notas.git
cd sistema-notas

2. Compile
bash
g++ main.cpp -o sistema_notas.exe

3. Execute
bash
./sistema_notas.exe

🖥️ Como Usar
Ao iniciar, o menu principal é exibido:

===========================
     SISTEMA NOTAS v4.0    
===========================
 1- Novo relatorio
 2- Ver relatorio salvo
 3- Sobre o sistema
 Escolha uma opcao:
Opção 1 — Novo Relatório:

Informe a quantidade de alunos (1 a 20)
Digite o nome completo de cada aluno
Informe a quantidade de disciplinas (1 a 5)
Lance as notas de cada disciplina (0 a 10)
O relatório é exibido e salvo automaticamente em relatorio.txt com data e hora

Opção 2 — Ver Relatório Salvo:
Exibe o último relatório gerado. Caso ainda não exista, uma mensagem de aviso é exibida.
Opção 3 — Sobre o Sistema:
Exibe informações sobre o sistema, nome do desenvolvedor e turma.

📄 Exemplo de Saída
====== RELATORIO ======
Ana Beatriz   Media: 8.50 - Aprovado
Bruno Lima    Media: 5.20 - Recuperacao
Carlos Melo   Media: 3.80 - Reprovado

Resumo: 1 aprovados, 1 recuperacao, 1 reprovados

📂 Estrutura do Projeto
sistema-notas/
├── main.cpp         # Código-fonte principal
├── relatorio.txt    # Gerado automaticamente na primeira execução
└── README.md

📌 Observações
O programa usa <windows.h>, portanto é compatível apenas com Windows.

👩‍💻 Autora
Feito com 💙 por Ana Beatriz Zancanaro Fumes — Turma LOPAL 2026 - SENAI-SP