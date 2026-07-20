#include <iostream>
#include <math.h>


int main()
{

    int BirlerBas, OnlarBas, YuzlerBas, BinlerBas, OnBinBas, YuzBinBas;
    int toplam = 0;


    for (int i = 10; i < 1000000; i++) {

        BirlerBas = i % 10;
        OnlarBas = (i / 10) % 10;
        YuzlerBas = (i / 100) % 10;
        BinlerBas = (i / 1000)%10;
        OnBinBas = (i / 10000) % 10;
        YuzBinBas = i / 100000;

        if ((pow(BirlerBas, 5) + pow(OnlarBas, 5) + pow(YuzlerBas, 5) + pow(BinlerBas, 5) + pow(OnBinBas,5) + pow(YuzBinBas,5)) == i) {
            toplam += i;
        }


       // std::cout << i << ":" << YuzBinBas << " " << OnBinBas << " " << BinlerBas << " " << YuzlerBas << " " << OnlarBas << " " << BirlerBas << std::endl;
        
    }


    
    std::cout << toplam;



}

