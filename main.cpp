#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{

    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media[20];
    int qtdDisciplinas;
    int opcaoInicial;

    // Commit 1

    do
    {
        cout << "\n===========================" << endl;
        cout << "     SISTEMA NOTAS v4.1    " << endl;
        cout << "===========================" << endl;
        cout << " 1- Novo relatorio " << endl;
        cout << " 2- Ver relatorio salvo " << endl;
        cout << " 3- Sobre o sistema " << endl;
        cout << " 4- Relatorio de reprovaodos " << endl;
        cout << " 5 - Sair do sistema" << endl;
        cout << " Escolha uma opcao: ";
        cin >> opcaoInicial;

        // Commit 5

        if (opcaoInicial == 2)
        {

            ifstream leitura("relatorio.txt");
            if (leitura.is_open())
            {
                string linha;
                cout << "\n";
                while (getline(leitura, linha))
                {
                    cout << linha << endl;
                }
                leitura.close();
            }
            else
            {

                cout << " Nenhum relatorio encontrado " << endl;
            }
        }

        if (opcaoInicial == 3)
        {

            cout << "\n==========================" << endl;
            cout << "      SOBRE O SISTEMA     " << endl;
            cout << "==========================" << endl;
            cout << " Sistema de notas v4.1    " << endl;
            cout << " Desenvolvido por: Ana Beatriz Zancanaro Fumes " << endl;
            cout << " Turma: LOPAL 2026 - SENAI-SP " << endl;
            cout << "===========================" << endl;
        }

        // OPCIONAL C - RELATORIO DE REPROVADOS

        if (opcaoInicial == 4)
        {
            // LEITURA DO ARQUIVO REPROVADOS.TXT
            if (opcaoInicial == 4)
        {

            ifstream leitura("reprovados.txt");
            if (leitura.is_open())
            {
                string linha;
                cout << "\n";
                while (getline(leitura, linha))
                {
                    cout << linha << endl;
                }
                leitura.close();
            }
            else
            {
                cout << " Nenhum relatorio encontrado " << endl;
            }
        }
        }

        else if (opcaoInicial == 1)
        {

            do
            {
                cout << " \n Quantidade de Alunos ( 1 a 20 ): ";
                cin >> qtdAlunos;

            } while (qtdAlunos < 1 || qtdAlunos > 20); // while enquanto

            for (int i = 0; i < qtdAlunos; i++)
            {
                do
                {
                    cin.ignore();
                    cout << " Nome do Aluno: " << i + 1 << " : ";
                    getline(cin, nomes[i]); // Pega a linha inteira entao ele e otimo para nomes compostos

                    if (nomes[i] == "")
                    {
                        cout << " Erro: Digite um nome coerente! " << endl;
                    }

                } while (nomes[i] == "");
            }

            // Commit 2

            do
            {
                cout << " \nQuatidade de disciplinas: ";
                cin >> qtdDisciplinas;

            } while (qtdDisciplinas < 1 || qtdDisciplinas > 5);

            for (int i = 0; i < qtdAlunos; i++)
            {
                cout << " \nNotas de " << nomes[i] << " : " << endl;
                float soma = 0;
                for (int j = 0; j < qtdDisciplinas; j++)
                {

                    do
                    {
                        cout << " Nota da Disciplina " << j + 1 << " : ";
                        cin >> notas[i][j];

                    } while (notas[i][j] < 0 || notas[i][j] > 10);
                    soma += notas[i][j];
                }
                media[i] = soma / qtdDisciplinas;
            }

            // SAIDA

            // Commit 3

            cout << " \n====== RELATORIO ====== " << endl;
            int aprovados = 0, recuperacao = 0, reprovados = 0;

            int menor = 0;
            int maior = 0;

            for (int i = 0; i < qtdAlunos; i++)
            {
                cout << nomes[i] << " Media: " << media[i] << " - ";
                if (media[i] >= 7)
                {
                    cout << "Aprovado" << endl;
                    aprovados++;
                }

                else if (media[i] >= 5)
                {
                    cout << " Recuperaçao " << endl;
                    recuperacao++;
                }

                else
                {
                    cout << " Reprovados " << endl;
                    reprovados++;
                }

                // OPCIONAL B

                if (media[i] > media[maior])
                {
                    maior = i;
                }
                if (media[i] < media[menor])
                {
                    menor = i;
                }
            }

            cout << " \nResumo: " << aprovados << " aprovados, " << recuperacao << " recuperacao, " << reprovados << " reprovados. " << endl;

            cout << " \nMedia maior: " << nomes[maior] << " - " << media[maior] << endl;
            cout << "Media menor: " << nomes[menor] << " - " << media[menor] << endl;

            // Commit 4

            ofstream arquivo("relatorio.txt");

            if (arquivo.is_open())
            {
                time_t agora = time(0);
                char *dataHora = ctime(&agora);
                arquivo << "Data e horario do relatorio: " << dataHora << endl;

                arquivo << "============================" << endl;
                arquivo << "         RELATORIO          " << endl;
                arquivo << "============================" << endl;

                for (int i = 0; i < qtdAlunos; i++)
                {
                    arquivo << nomes[i] << " Media: " << media[i] << " - ";
                    if (media[i] >= 7)
                    {
                        arquivo << " aprovado " << endl;
                    }
                    else if (media[i] >= 5)
                    {
                        arquivo << " Recuperacao " << endl;
                    }
                    else
                    {
                        arquivo << " Reprovados " << endl;
                    }
                }

                arquivo << " Resumo: " << aprovados << " aprovados " << "," << recuperacao << " em recuperacao " << "," << reprovados << " Reprovados. " << endl;
                arquivo << " \nMedia maior: " << nomes[maior] << " - " << media[maior] << endl;
                arquivo << "Media menor: " << nomes[menor] << " - " << media[menor] << endl;

                arquivo.close();
                cout << "\nRelatorio salvo em relatorio.txt " << endl;
            }
            else
            {
                cout << " Erro ao criar arquivo. " << endl;
            }

            ofstream arqReprovados("reprovados.txt");
            if (arqReprovados.is_open())
            {
                arqReprovados << " ========================== " << endl;
                arqReprovados << "  RELATORIO DE REPROVADOS  " << endl;
                arqReprovados << " ========================= " << endl;
                int Reprovados = 0;

                for (int i = 0; i < qtdAlunos; i++)
                {
                    if (media[i] < 5 && nomes[i] != "")
                    {
                        arqReprovados << "Aluno: " << nomes[i] << " - Media: " << media[i] << endl;
                        Reprovados++;
                    }
                }

                if (Reprovados == 0)
                {

                    arqReprovados << " Nao há nenhum aluno reprovado " << endl;
                }

                arqReprovados.close();

                cout << "\nArquivo ' reprovados.txt ' gerado por sucessso! " << endl;
            }
            else
            {

                cout << " Erro ao criar o arquivo " << endl;
            }
        }
    } while (opcaoInicial != 5);

    cout << "\nSaindo do sistema. Ate a proxima!";

    return 0;
}
