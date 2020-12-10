#include <iostream>
using namespace std;

int main() {

	int n, m, num;
	bool notprime = 0;

	while (true)
	{
		system("cls");
		cout << "How many prime numbers: ";
		cin >> num;

		for (int k = 2, x = 0; x < num; k++)
		{
			notprime = 0;
			n = k;
			m = n / 2;
			for (int i = 2; i <= m; i++)
			{
				if (n % i == 0)
				{
					notprime = 1;
					break;
				}
			}
			if (notprime == 0)
			{
				cout << n << " ";
				x++;
			}
		}
		cout << "\n" << endl;
		system("pause");
	}

	return 0;
}