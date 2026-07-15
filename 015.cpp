#include <iostream>
using namespace std;

int main() {

	int i, n;
	


	cout << "Kaca Kaclik Bir Kubunuz Var :";
	cin >> n;

	unsigned long long sonuc = 1;
	for (int i = 1; i <= n; ++i) {
		sonuc = sonuc * (n + i) / i;
	}

	cout << n << "x" << n << " lik bir kubun guzergah sayisi : " << sonuc << endl;
	
}