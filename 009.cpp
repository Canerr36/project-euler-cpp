#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int i, j, c;

	

		for (i = 1; i <= 1000; i++) {
			for (j = 1; j <= i; j++) {

				c = sqrt((i * i) + (j * j));

				if ((i * i) + (j * j) - (c * c)==0) {
					if ((i + j + c) == 1000) {
						cout << j << " " << i << " " << c <<" " << "Sonuc :" << i * j * c << endl;
					}
				}


			}
		}

	
}