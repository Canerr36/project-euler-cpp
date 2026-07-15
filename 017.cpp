#include <iostream>
int BirlerBasamak(int a);
int OnlarBasamak(int a);
int YuzlerBasamak(int a, bool TamYuzde);
int OnlarBasamakOzel(int a);



int main()
{
	int BirlerBas, OnlarBas, YuzlerBas, a, b, c, sonuc = 0;

	for (int i = 1; i < 1000; i++) {
		int SuAnki = 0;
		bool TamYuzde = (i % 100 != 0);

		BirlerBas = i % 10;
		OnlarBas = (i / 10) % 10;
		YuzlerBas = i / 100;

		if (OnlarBas == 1) {
			a = 0;
			b = OnlarBasamakOzel(BirlerBas);
			c = YuzlerBasamak(YuzlerBas,TamYuzde);

		}
		else
		{
			a = BirlerBasamak(BirlerBas);
			b = OnlarBasamak(OnlarBas);
			c = YuzlerBasamak(YuzlerBas,TamYuzde);

		}


		SuAnki = a + b + c;
		sonuc += a + b + c;
		

		std::cout << i << " :" << c << " " << b << " " << a << " Su Anki : " << SuAnki << "  sonuc : " << sonuc << std::endl;
	}
 


	std::cout << sonuc+11 << std::endl;			//  11 "one thousand"  
}





int BirlerBasamak(int a) {
	switch (a) {
	case 0:return 0; break;
	case 1:return 3; break;
	case 2:return 3; break;
	case 3:return 5; break;
	case 4:return 4; break;
	case 5:return 4; break;
	case 6:return 3; break;
	case 7:return 5; break;
	case 8:return 5; break;
	case 9:return 4; break;
	}
	
}

int OnlarBasamak(int a) {
	switch (a) {
	case 0:return 0; break;
	case 1:return 0; break;
	case 2:return 6; break;
	case 3:return 6; break;
	case 4:return 5; break;
	case 5:return 5; break;
	case 6:return 5; break;
	case 7:return 7; break;
	case 8:return 6; break;
	case 9:return 6; break;
	}

}

int YuzlerBasamak(int a, bool TamYuzde) {
	if (a == 0) return 0;					// and ile birlikte

	return BirlerBasamak(a) + 7 + (TamYuzde ? 3 : 0);			// var mı yok mu
}

int OnlarBasamakOzel(int a) {

	switch (a) {
	case 0:return 3; break;
	case 1:return 6; break;
	case 2:return 6; break;
	case 3:return 8; break;
	case 4:return 8; break;
	case 5:return 7; break;
	case 6:return 7; break;
	case 7:return 9; break;
	case 8:return 8; break;
	case 9:return 8; break;
	}

}