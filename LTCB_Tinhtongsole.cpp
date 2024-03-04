#include <iostream>
using namespace std;
int main() {
	int i = 1, sonhap, tongsole = 0;
	cout << "nhap so"; cin >> sonhap;
	cout << "tong cac so le:\n";
	for (int i = 0; i <= sonhap; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
			tongsole += i;
		}

	}
	cout << "\ntong cac so le tu 0 den "<< sonhap <<" la: " << tongsole;
}