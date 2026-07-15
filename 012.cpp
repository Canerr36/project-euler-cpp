#include <iostream>
#include <math.h>
using namespace std;
int bolen_sayisi(long long int x);


int main() {

	int i, j, bolen;

	long long int toplam;

	toplam = 0;

	
		for (i = 1; i<=100000; i++) {
			toplam += i;
			bolen = bolen_sayisi(toplam);
			

			if (bolen >= 500) {
				cout << toplam << "  " << bolen << endl;
			
			}

			
		}
	

}


int bolen_sayisi(long long int x) {


	int sayac;
	sayac = 0;
	long long kok = sqrt(x),i;

	for (i = 1;i<=kok; i++) {
		if (x % i == 0) {
			if (i * i == x) {
				sayac += 1;
			}
			else
			{
				sayac += 2;
			}
		}

	}
	return sayac;

}




