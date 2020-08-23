#include<iostream>
using namespace std;

struct ABCD {
	int x;
	int y;
	int z;
};

int main() {
	ABCD t, h, k;
	t.x = 3;
	t.y = 4;
	t.z = 2;

	h.x = 1;
	h.y = 5;
	h.z = 7;

	k.x = t.x + h.x;
	k.y = t.y + h.y;
	k.z = t.z + h.z;

	cout << k.x << endl;
	cout << k.y << endl;
	cout << k.z << endl;

	return 0;

	
}
