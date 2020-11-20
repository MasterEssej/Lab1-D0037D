#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	char name[25];
	int age;
	char gender[10];
	char adress[50];
	int married;
	float height;

	printf("%s", "Name: ");
	scanf_s(" %[^\n]s", name, 25);

	printf("%s", "Age: ");
	scanf_s("%d", &age);

	printf("%s", "Gender: ");
	scanf_s("%s", gender, 10);

	printf("%s", "Adress: ");
	scanf_s(" %[^\n]s", adress, 50);

	printf("%s", "Married? (Write 1 for true or 0 for false): ");
	scanf_s("%d", &married);

	printf("%s", "Height: ");
	scanf_s("%f", &height);



	printf("%s\n", name);

	printf("%d %s\n", age, "years old");

	printf("%s\n", gender);

	printf("%s\n", adress);

	if (married == 0) {
		printf("%s\n", "Not married");
	}
	else {
		printf("%s\n", "Married");
	}

	printf("%f %s \n", height, "meters tall");

	system("pause");
	return 0;
}