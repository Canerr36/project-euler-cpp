#include <iostream>
using namespace std;

int main() {


    int EnBüyükSayi = 1;
    int EnBüyükZincir = 1;

    for (int i = 2; i <= 1000000; ++i) {
        long long sayi = i;   
        int zincir = 1;



        while (sayi != 1) {
            if ((sayi & 1) == 0) {
                sayi /= 2;
            }
            else {
                sayi = sayi * 3 + 1;
            }
                ++zincir;
            
        }

        if (zincir > EnBüyükZincir) {
            EnBüyükZincir = zincir;
            EnBüyükSayi = i;
        }
    }

    cout << EnBüyükSayi << "  " << EnBüyükZincir << endl;
    return 0;
}