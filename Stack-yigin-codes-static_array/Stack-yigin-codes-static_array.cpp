// Stack-yigin-codes-static_array.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX = 10;
class Yigin
{
private:
	int tepe;
	int veriler[MAX];
public:
	Yigin() {
		tepe = -1;

	}
	void Ekle(int veri) {
		if (tepe < MAX - 1) {
			tepe++;
			veriler[tepe] = veri;

		}
	}
	void Cikar() {
		if (tepe != -1) {
			tepe--;
		}
	}
	friend ostream& operator <<(ostream& os, Yigin& yigin)
	{
		os << "----->";
		for (int i = yigin.tepe; i >= 0; i--)
		{
			os << yigin.veriler[i] << endl << "      ";
		}
		os << endl;
		return os;
	}
	int getir() {
		if (tepe != -1) {
			return veriler[tepe];

		}
		else
		{
			throw exception("Yigin::getir() eleman yok");
		}
	}
	bool bosmu() {
		if (tepe != -1) {
			return true;

		}
		else {
			return false;
		}
	}

	

};

int main()
{
	Yigin yigin;
	yigin.Ekle(11);
	yigin.Ekle(22);
	yigin.Ekle(33);
	yigin.Ekle(44);
	yigin.Ekle(55);
	cout << yigin;
	for (int i = 0; i < 6; i++) {
		yigin.Cikar();
		cout << yigin;
	}
	for (int i = 0; i < 16; i++) {
		yigin.Ekle(55*i);
	}
	cout << yigin;
}