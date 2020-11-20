#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	int choose;

	printf("%s\n", "Choose (1 or 2):\n1. Numbers\n2. Alphabet");
	scanf_s("%d", &choose);

	if (choose == 1) {

		int n;

		printf("%s", "Enter number: ");
		scanf_s("%d", &n);

		for (int i = 1; i <= n; i++) {
			for (int x = 1; x <= i; x++) {
				printf("%d", x);
			}
			printf("\n");
		}

	}
	else if (choose == 2) {

		char c;

		printf("%s", "Enter character: ");
		scanf_s("%s", &c, 2);

		int n = c;

		for (int i = 65; i <= n; i++) {
			for (int x = 65; x <= i; x++) {
				char a = (char)i;
				printf("%c", a);
			}
			printf("\n");
		}

	}


	system("pause");
	return 0;
}