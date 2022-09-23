#include <iostream>

using namespace std;

int main()
{
	int D, M, Y;
	cin >> D >> M >> Y;

	if (M == 2 && D >= 27 && Y % 4 != 0) { //28 dn +
		M++;
		D = D - 28 + 2;

		cout << D << " " << M << " " << Y;
		return 0;
	}
	if (M == 2 && D >= 29 || M == 4 && D >= 29 || M == 6 && D >= 29 || M == 9 && D >= 29 || M == 11 && D >= 29) { // 30 dn
		M++;
		D = D - 30 + 2;

		cout << D << " " << M << " " << Y;
		return 0;
	}
	if (M == 1 && D >= 30 || M == 3 && D >= 30 || M == 5 && D >= 30 || M == 7 && D >= 30 || M == 8 && D >= 30 || M == 10 && D >= 30) { //31dn
		M++;
		D = D - 31 + 2;

		cout << D << " " << M << " " << Y;
		return 0;
	}
	if (M == 12 && D >= 30) { // Novi god
		M -= 11;
		Y++;
		D = D - 31 + 2;

		cout << D << " " << M << " " << Y;
		return 0;
	}
	if (M == 2 && D >= 28 && Y % 4 == 0) { // vyso kos
		M++;
		D = D - 29 + 2;

		cout << D << " " << M << " " << Y;
		return 0;
	}
	D += 2;
	cout << D << " " << M << " " << Y;
	return 0;

}