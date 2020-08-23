#include <iostream>
using namespace std;

int main()
{
	char vect[5];
	for (int i = 0; i < 5; i++) {
		cin >> vect[i];
	}

	int x, y;
	for (y = 0; y < 5; y++) {
		for (x = y; x < 5; x++) {
			cout << vect[x] << " ";
		}
		cout << endl;
	}

	return 0;
}