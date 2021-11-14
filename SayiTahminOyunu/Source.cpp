/*
Bu videoda C++ ile say� tahmin oyunu yapaca��z.
Malzemeler
	1) Visual Studio
	2) C++ Yaz�l�m Dili Bilgisi
	3) Beyin (1 Adet)  :)

	Not: Buralar yorum sat�r�. Kodlara yazmay�n ;)
*/

#include<iostream> // standart k�t�phane
#include<locale.h> // TR dil deste�i
#include<ctime>    // Zaman k�t�phanesi

using namespace std; // Her seferinde std:: yazmakla u�ra�mamak i�in

int main()  // Tan��t�ray�m, Ana fonksiyon
{
	setlocale(LC_ALL, "Turkish"); // Bunu da unutmazs�n .
	// Tamsay� t�r�nde de�i�kenler tan�mlad�m, panik yok  :)
	int rastgeleSayi = 0, girilenSayi = 0, denemeSayisi = 0;

	srand(time(NULL)); // Zaman fonksiyonu i�in bu olmazsa olmaz !

	rastgeleSayi = rand() % 100;  // Rand fonksiyonu ile rastgele say� �rettik. Mod 100 ile �retilen say�n�n en fazla 99 olaca��n� belirttik.

	do  // Bunu da sormay�n. Do = Yap :)
	{
		cout << "Say� Giriniz(0-99 aras�nda): "; // cout ekrana yaz� yazar
		cin >> girilenSayi; // Tahmin etti�iniz de�il,de�i�kene de�er atar.

		if (rastgeleSayi<girilenSayi) // E�er diyorum burda,gerisi belli
		{
			cout << "Daha k���k de�er girin" << endl;
		}
		else if (rastgeleSayi>girilenSayi)
		{
			cout << "Daha b�y�k de�er girin." << endl;
		}
		denemeSayisi++;
	} while (rastgeleSayi!=girilenSayi); // ko�ul do�ru oldu�u s�rece while d�ng�s� �al��maya dewamke..

	cout << rastgeleSayi << " say�s� " << denemeSayisi << " denemede bulundu.";
	return 0;
}


// Kodlar bitti. �imdi �al��t�racaz. Ama �ncesinde kanala abone olmayanlar abone olsun seriii bi �ekilde. Bir yudum �ay� hakettim :) 

// Evet F5 e bas�yorum. U�u�a haz�r olun.

// AZ �NCE �LK DENEMEDE BULDUM :))))

// Hadi buna puan sistemi ekleyin. Her denemede 1 puan d��s�n.100 'den ba�las�n. Onu da siz yapars�n�z. Ho��akal�n de�erli takip�ilerim <3