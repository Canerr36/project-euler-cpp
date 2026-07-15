#include <iostream>
using namespace std;

int main() {

	int x = 0, y = 1, z;
	int toplam = 0;

	while(x<=4000000){

		z = x + y;
		x = y;
		y = z;
	
		if (x % 2 == 0) {
			toplam += x;
		}

	}
	cout << toplam;

	return 0;
}
