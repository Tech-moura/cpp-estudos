/* =========================================================
 * Projeto: Calculadora em C++
 * Arquivo: main.cpp
 * Autor: Everton Moura
 * Data: 16/10/2026
 * Descricao: Calculadora com operacoes matematicas basicas.
 * Versao: 1.0
 * ========================================================= */

 #include <iostream>

 using namespace std;

 int main (void){
    bool sair = false;
    float a,b;
    int escolha;

        while(!sair){

            cout << "\n Menu: " << endl;
            cout << "0 - Sair" << endl;
            cout << "1 - SOMA" << endl;
            cout << "2 - SUBTRACAO" << endl;
            cout << "3 - MULTIPLICACAO" << endl;
            cout << "4 - DIVUSAO" << endl;
            cout << "Escolha: " << endl;
            cin >> escolha;

            if(escolha >= 1 && escolha <= 4){
                cout << "A= ";
                cin >> a;

                cout << "B= ";
                cin >> b;

            }

            switch (escolha){

                case 0:
                    sair = true;
                    break;
                case 1:
                    cout << "A+B= " << a+b << endl;
                    break;
                case 2:
                    cout << "A-B= " << a-b << endl;
                    break;
                case 3:
                    cout << "A x B= " << a*b << endl; break;
                case 4:
                    if (b == 0){
                        cout << "Nao e possivel dividir por zero." << endl;
                    } else{
                        cout << "A/B= " << a/b << endl;
                    }
                    break;
                default:
                    cout << "Opcao invalida!" << endl;
                    break;
            }

        }
 return 0;
 }