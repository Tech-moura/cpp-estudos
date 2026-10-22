/* Em 1937, um matemático chamado Lothar Collatz formulou uma hipótese intrigante que permanece sem solução até hoje (talvez este seja um bom desafio para você?), a qual pode ser descrita da seguinte forma:
Escolha qualquer número inteiro não negativo e diferente de zero e dê a ele o nome de c0 */
#include <iostream>
using namespace std;
int main(void){
int c0, i=0;

cout << "numero= " << endl;
cin >> c0;

while(c0 != 1){
    i++;
    if(c0 % 2 == 0)
    c0 = c0 / 2;
    else
    c0 = 3 * c0 + 1;
    cout << c0 << endl;
}
cout<< "Saltos: " << i << endl;
return 0;
}