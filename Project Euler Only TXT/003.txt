#include <iostream>
#include <math.h>
using namespace std;

int main() {


    long long int x, y, i;

	cout << "Sayinizi Giriniz :";
	cin >> x;

	for (i = 2; i <= sqrt(x); i++) {

		while (x % i == 0) {
			cout << i << endl;
			x /= i;
		}


	}
	if (x > 1) {
		cout << x << endl;
	}



	return 0;
}