#include <iostream>

using namespace std;

int main (void){
	double pi4 = 0.0;

	long n;

	double div = 1;

	cout << "Numeros de interacao ? ";
	cin >> n;

    //Solução 1
	/*for(int i = 0; i < n; i++) {
		if(i % 2 == 1)
			pi4 -= (1.0 / div);
		else
			pi4 += (1.0 / div);
		    div += 2.0;
	}*/

    // Solução2
for (int i = 0; i < n; i++) {
    double termo = 1.0 / (2 * i + 1);

    if (i % 2 == 0)
        pi4 += termo;
    else
        pi4 -= termo;
}
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.0) << endl;
	return 0;
}