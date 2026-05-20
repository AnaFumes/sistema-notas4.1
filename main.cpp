#include <iostream>
#include <string>
using namespace std;

int main(){

//ENTRADA --------------------------------------------

string nomes[20];
int qtdAlunos; //qtd- quantidade de 

//PROCESSAMENTO ----------------------------------------

cout << " === SISTEMA NOTAS v4.0 === " << endl;

do{
    cout << " Quantidade de Alunos (1 a 20 ): ";
    cin >> qtdAlunos;
    
}while ( qtdAlunos < 1 || qtdAlunos > 20 ); // while enquanto

cin.ignore();

for (int i = 0; i < qtdAlunos; i++) {
    cout << " Nome do Aluno: " << i + 1 << " : ";
    getline(cin, nomes[i]); // Pega a linha inteira entao ele e otimo para nomes compostos 
}

//SAIDA -----------------------------------------------------
cout << " \n Alunos cadastrados: " << endl;
for ( int i = 0; i < qtdAlunos; i++){
    cout << " " << i + 1 << " " << nomes[i] << endl;
}

    return 0;
}

