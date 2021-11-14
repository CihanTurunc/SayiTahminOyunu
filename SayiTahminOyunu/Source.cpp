/*
Bu videoda C++ ile sayý tahmin oyunu yapacaðýz.
Malzemeler
	1) Visual Studio
	2) C++ Yazýlým Dili Bilgisi
	3) Beyin (1 Adet)  :)

	Not: Buralar yorum satýrý. Kodlara yazmayýn ;)
*/

#include<iostream> // standart kütüphane
#include<locale.h> // TR dil desteði
#include<ctime>    // Zaman kütüphanesi

using namespace std; // Her seferinde std:: yazmakla uðraþmamak için

int main()  // Tanýþtýrayým, Ana fonksiyon
{
	setlocale(LC_ALL, "Turkish"); // Bunu da unutmazsýn .
	// Tamsayý türünde deðiþkenler tanýmladým, panik yok  :)
	int rastgeleSayi = 0, girilenSayi = 0, denemeSayisi = 0;

	srand(time(NULL)); // Zaman fonksiyonu için bu olmazsa olmaz !

	rastgeleSayi = rand() % 100;  // Rand fonksiyonu ile rastgele sayý ürettik. Mod 100 ile üretilen sayýnýn en fazla 99 olacaðýný belirttik.

	do  // Bunu da sormayýn. Do = Yap :)
	{
		cout << "Sayý Giriniz(0-99 arasýnda): "; // cout ekrana yazý yazar
		cin >> girilenSayi; // Tahmin ettiðiniz deðil,deðiþkene deðer atar.

		if (rastgeleSayi<girilenSayi) // Eðer diyorum burda,gerisi belli
		{
			cout << "Daha küçük deðer girin" << endl;
		}
		else if (rastgeleSayi>girilenSayi)
		{
			cout << "Daha büyük deðer girin." << endl;
		}
		denemeSayisi++;
	} while (rastgeleSayi!=girilenSayi); // koþul doðru olduðu sürece while döngüsü çalýþmaya dewamke..

	cout << rastgeleSayi << " sayýsý " << denemeSayisi << " denemede bulundu.";
	return 0;
}


// Kodlar bitti. Þimdi Çalýþtýracaz. Ama öncesinde kanala abone olmayanlar abone olsun seriii bi þekilde. Bir yudum çayý hakettim :) 

// Evet F5 e basýyorum. Uçuþa hazýr olun.

// AZ ÖNCE ÝLK DENEMEDE BULDUM :))))

// Hadi buna puan sistemi ekleyin. Her denemede 1 puan düþsün.100 'den baþlasýn. Onu da siz yaparsýnýz. Hoþçakalýn deðerli takipçilerim <3