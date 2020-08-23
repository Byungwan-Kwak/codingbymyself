#include<iostream>
using namespace std;

struct NODE {
	int a;
	char b;
	char c;
};

void KFC(NODE n) {
	for (int i = 0; i < n.a; i++) {
		cout << n.b;
	}

	cout << endl;

	for (int i = 0; i < n.a; i++) {
		cout << n.c;
	}
}

int main() {
	NODE n;

	cin >> n.a >> n.b >> n.c;

	KFC(n);

}
