#include <iostream>
using namespace std;


int main() {

	int i, j, Buyuk, kucuk, sonuc;
	Buyuk = 0;
	kucuk = 0;

	for (i = 1; i <= 100; i++) {
		kucuk += i * i;
	}
	for (j = 1; j <= 100; j++) {
		Buyuk += j;
	}
		
	sonuc = (Buyuk * Buyuk) - kucuk;

	cout << sonuc<< endl;

	return 0;
}