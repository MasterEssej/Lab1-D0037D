#include <iostream>
using namespace std;

int main() {

	int n;
	
	cout << "For loop" << endl;
	cout << "Number: ";
	cin >> n;

	for(int i = 0; i < n; i++) {

		cout << "Hello World" << endl;

	}

	cout << "\n--------------------------------------------------------------" << endl;
	cout << "While loop" << endl;
	cout << "Number: ";
	cin >> n;

	int i = 0;

	while (i < n) {

		cout << "Hello World" << endl;
		i++;

	}


	cout << "\n--------------------------------------------------------------" << endl;
	cout << "Do/while loop" << endl;
	cout << "Number: ";
	cin >> n;

	i = 0;

	do {

		cout << "Hello World" << endl;
		i++;

	} while (i < n);

	system("pause");
	return 0;
}