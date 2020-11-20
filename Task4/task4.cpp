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
	string marriedq;
	float height;

	cout << "Name: ";
	getline(cin, name);

	cout << "\nAge: ";
	cin >> age;

	cout << "\nGender (m/f): ";
	cin >> gender;

	cin.ignore(1, '\n');
	cout << "\nAdress: ";
	getline(cin, adress);

	cout << "\nMarried? (write 1 for true or 0 false): ";
	cin >> married;
	cin.ignore(1, '\n');

	cout << "\nHeight (In meters): ";
	cin >> height;

	cout << "\n";
	cout << name << endl;
	cout << age << " years old" << endl;
	cout << gender << endl;
	cout << adress << endl;
	cout << "Married: " << boolalpha << married << endl;
	cout << height << " meters tall" << endl;

	system("pause");
	return 0;
}