#include <iostream>
using namespace std;

int main() {

	int i, j, z, maks=0,sabit1,sabit2;

	for (i = 1; i < 1000; i++) {
		for (j = 1; j < i; j++) {
			z = j * i;
			
			if (((z / 100000) == (z % 10))&&(((z/100000)!=0))) {				
				if (((z / 10000) % 10) == ((z % 100) / 10)) {				
					if (((z / 1000) % 10) == (((z % 1000) / 100))) {		
						
						if (maks < z) {
							maks = z;
							sabit1 = i;
							sabit2 = j;
						}

					}
				}
			}
			
		
		}
		

	}
	cout << sabit1 << "x" << sabit2 << "=" << maks << endl;


	return 0;
}