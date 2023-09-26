#include <iostream>
using namespace std;
int main(){
	char operasi;
	int angka1, angka2;
	
	cout << "masukkan operasi (+, -, *, /): ";
	cin >> operasi;
	cout << "masukkan angka1 : ";
	cin >> angka1;
	cout << "masukkan angka2 : ";
	cin >> angka2;
	
	switch(operasi){
		case '+':
			cout << angka1 << "+" << angka2 << "=" << angka1 + angka2;
			break;
		case '-':
			cout << angka1 << "-" << angka2 << "=" << angka1 - angka2;
			break;
		case '*':
			cout << angka1 << "*" << angka2 << "*" << angka1 * angka2;
			break;
		case '/':
			if(angka2 != 0)
			    cout <<angka1 << "/" << angka2 << "angka1 / angka2";
			else
			    cout << "Tidak dapat melakukan pembagian ddengan nol!";
			break;
		default:
			cout << "Operasi tidak valid!";
			
	}
}
