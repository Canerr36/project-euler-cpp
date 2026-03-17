#include <iostream>
using namespace std;

int main(){

	int x, y;
	int toplam = 0;

	for (x = 1; x < 1000; x++) {

		if ((x % 5 == 0) || (x % 3 == 0)) {
			toplam += x;
		}
	}
	cout << toplam << endl;
}