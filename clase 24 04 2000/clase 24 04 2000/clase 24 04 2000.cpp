#include <iostream>
using namespace std;

//4.26
int main()
{
	
	int x;
	cout << "ponga el numero de lados de su cuadrado:";
	cin >> x;

	if (x == 1) {
		cout << "*";
	}
	
	else {
		

		for (int c = 0; c < x; c += 1) {

			cout << "*";

		}
		cout << endl;
		for (int v = 2; v < x; v += 1) {
			cout << "*";
			for (int j = 2; j < x; j += 1) {

				cout << " ";

			}

			cout << "*" << endl;

		}
		for (int l = 0; l < x; l += 1) {

			cout << "*";
		}

	}
	return 0;

}

//4.27
int main()
{
	int x;
	cout << " ingrese un numero de 5 numeros " << endl;
	cin >> x;

	int n1 = x / 10000;
	int n2 = (x % 10000) / 1000;
	int n3 = ((x % 10000) % 1000) / 100;
	int n4 = (((x % 10000) % 1000) % 100) / 10;
	int n5 = ((((x % 10000) % 1000) % 100) % 10) / 1;

	if (n1 == n5 && n2 == n4) {
		cout << "es palindrome" << endl;
	}
	else {
		cout << "no es palindrome" << endl;
	}

	
	return 0;

		

}
//4.30
int main()
{
	int x = 0;
	int c = 1;
	int l;
	int t=0;
	cout << 0 << 1;
	while (t!=1) {
	
		l = x + c;
		x = c;
		c = l;
		
		cout << l;



	}


	return 0;

}






//5.30
int main()

{
	
	for (int c = 3; c < 50; c += 3) {
		cout << c;
	}
		
	return 0;


}


