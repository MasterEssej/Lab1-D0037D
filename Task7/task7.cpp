#include <iostream>
using namespace std;

int main() {

	int n;

	while (true) {
		cout << "Write a natural number: ";
		cin >> n;

		if (n < 0) {
			cout << "Error! Input cannot be negative" << endl;
		}
		else {
			for (int i = -n; i <= n; i++) {
				cout << abs(i) << endl;
			}
			break;
		}
	}

	system("pause");
	return 0;
}