#include<iostream>
using namespace std;

int main() {
	// add ����ü ����
	struct add {
		int a;
		int b;
	};

	add x;
	
	cin >> x.a >> x.b;

	int total = x.a + x.b;

	return 0;
}