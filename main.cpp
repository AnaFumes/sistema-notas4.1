#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;

int main(){

//ENTRADA --------------------------------------------

string nomes[20];
int qtdAlunos; //qtd- quantidade de 
float notas[20][5];
float media[20];
int qtdDisciplinas;

// Commit 1 
cout << " === SISTEMA NOTAS v4.0 === " << endl;

do{
    cout << " Quantidade de Alunos ( 1 a 20 ): ";
    cin >> qtdAlunos;

}while ( qtdAlunos < 1 || qtdAlunos > 20 ); // while enquanto

cin.ignore();

for (int i = 0; i < qtdAlunos; i++) {
    cout << " Nome do Aluno: " << i + 1 << " : ";
    getline(cin, nomes[i]); // Pega a linha inteira entao ele e otimo para nomes compostos 
}

// Commit 2

do{
cout << "\n Quatidade de disciplinas: ( De 1 a 5 ): " << endl;
cin >> qtdDisciplinas;

}while(qtdDisciplinas < 1 || qtdDisciplinas > 5 );

for (int i = 0; i < qtdAlunos; i++){
    cout << " \nNotas de " << nomes[i] << " : " << endl;
    float soma = 0;
    for (int j = 0 ; j < qtdDisciplinas; j++){
        do{
            cout << " Disciplina " << j + 1 << " ( 1 a 5 ): ";
            cin >> notas[i][j];
        } while (notas[i][j] < 0 || notas[i][j] > 10 );
        soma += notas [i][j];
    }
    media [i] = soma /qtdDisciplinas;
}

//SAIDA -----------------------------------------------------
cout << " \n Alunos cadastrados: " << endl;
for ( int i = 0; i < qtdAlunos; i++){
    cout << " " << i + 1 << " " << nomes[i] << endl;
}

// Commit 3 

cout << " \n====== RELATORIO ====== " << endl;
int aprovados = 0, recuperacao = 0, reprovados = 0;

for (int i = 0; i < qtdAlunos; i++){
    cout << nomes[i] << " Media: " << media[i] << " - ";
    if (media [i] >= 5){
        cout << "Aprovado" << endl;
        aprovados++;
    }

    else if (media[i] >= 5 ){
    cout << " Recuperaçao " << endl;
    recuperacao++;
    }

    else {
        cout << " Reprovados " << endl;
        reprovados++;
    }
    
    cout << " \nResumo: " << aprovados << "aprovados, "<< recuperacao << " recuperacao " << reprovados << " reprovados " << endl;
}
    // Commit 4 

    ofstream arquivo ("relatorio.txt");
    if (arquivo. is_open()){
        arquivo << "=== RELATORIO === " << endl;
        for ( int i = 0; i < qtdAlunos; i++ ){
            arquivo << nomes[i] << " Media: " << media[i] << " - ";
            if  (media[i] >= 7 ){
                arquivo << " aprovado " << endl;   
            }else if (media[i] >= 5 ){
                arquivo << " Recuperacao " << endl;
            }else {
                arquivo << " Reprovados " << endl;
            }
        }    
     arquivo << " \nResumo: " << aprovados << " aprovados " << recuperacao << " em recuperacao " << reprovados << " Reprovados " << endl;
     arquivo.close();
     cout << "\nRelatorio salvo em relatorio.txt " << endl;

     }else {
        cout << " Erro ao criar arquivo. " << endl;
     }

    return 0;
}

