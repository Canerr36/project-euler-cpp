#include <iostream>
using namespace std;
int asal(int x);

int main() {
    int y, z;

    cout << "Kacinci Asal Sayiyi istiyorsun :";
    cin >> y;

    z = asal(y); 
    cout << z << endl;
}

int asal(int x) {
    int sayac = 0;
    int sayi = 2;

    while (true) {
        bool asalMi = true;
        for (int i = 2; i * i <= sayi; i++) {
            if (sayi % i == 0) {
                asalMi = false;
                break;
            }
        }
        if (asalMi) {
            sayac++;
            if (sayac == x) {
                return sayi;
            }
        }
        sayi++;
    }
}

