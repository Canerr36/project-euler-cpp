#include <iostream>
bool BolSayıMi(int toplam, int i);



int main() {

	


	for (int i = 1; i < 28124; i++) {
		int toplam = 0;
		//std::cout << i << "  ";
		
		for (int j = 1; j <= (i / 2); j++) {
			if (i % j == 0) {
				
				toplam += j;
				//std::cout << j << " ";

			}


		}

		if (BolSayıMi(toplam, i) == true) {
			std::cout << i << "  " << " Toplam : " << toplam << std::endl;
		}


	}



}



bool BolSayıMi(int toplam, int i) {

	return(toplam > i) ? true : false;

}

