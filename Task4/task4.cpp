#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	int age;
	string gender;
	string adress;
	int adressnum;
	bool married{};
	float height;

	cout << "Name: ";
	cin >> name;

	cout << "\nAge: ";
	cin >> age;

	cout << "\nGender (m/f): ";
	cin >> gender;

	cout << "\nAdress: ";
	cin >> adress;

	cout << "\nAdress number: ";
	cin >> adressnum;

	string marriedq;
	cout << "\nMarried? (true or false): ";
	cin >> marriedq;
	if (marriedq == "true") {
		married = true;
	}
	else if (marriedq == "false") {
		married = false;
	}

	cout << "\nHeight (In meters): ";
	cin >> height;

	cout << "\n";
	cout << name << endl;
	cout << age << " years old" << endl;
	cout << gender << endl;
	cout << adress << " " << adressnum << endl;
	if (married == true) {
		cout << "Married" << endl;
	}
	else if (married == false) {
		cout << "Not married" << endl;
	}
	cout << height << " meters tall" << endl;

	system("pause");
	return 0;
}