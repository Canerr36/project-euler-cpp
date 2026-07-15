#include <iostream>
bool ArkadasMı(int toplam, int i);




int main()
{
    int asalBolen, Cevap = 0;
    

    for (int i = 1; i < 10000; i++) {
        int toplam = 0, Kontrol;
       // std::cout << i << "   ";

        for (int j = 1; j <= (i / 2); j++) {
            if (i % j == 0) {
                asalBolen = j;
                toplam += asalBolen;
               //  std::cout<<"  " << asalBolen << "  ";
            }

        }
        // std::cout << "Toplam : " << toplam << std::endl;
       
        Kontrol = ArkadasMı(toplam, i);
        if (Kontrol == true) {
            if (i != toplam) {
               
                // std::cout << i << " ve " << toplam << "  Arkadas Sayilar" << std::endl;
                Cevap += i;

            }
        }

    }


    std::cout << "Cevap =" << Cevap;

}


bool ArkadasMı(int toplam, int i) {
    int asalBolen, ArkadasToplam = 0;

    for (int j = 1; j <= (toplam / 2); j++) {
        if (toplam % j == 0) {
            asalBolen = j;
            ArkadasToplam += asalBolen;
           
        }

    }

    return(ArkadasToplam == i) ? true : false;

}

