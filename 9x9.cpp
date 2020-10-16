#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 9; i++) {
		cout << i << "´Ü" << endl;
		for (int z = 1; z < 10; z++) {
			cout << i << " * " << z << " = " << i * z<<endl;
		}
		cout << endl;
	}

	return 0;
}