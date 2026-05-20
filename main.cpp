#include <iostream>
#include <string>
using namespace std;

int main(){

//ENTRADA --------------------------------------------

string nomes[20];
int qtdAlunos; //qtd- quantidade de 
float notas[20][5];
float media[20];
int qtdDisciplinas;

//PROCESSAMENTO ----------------------------------------

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

    return 0;
}

