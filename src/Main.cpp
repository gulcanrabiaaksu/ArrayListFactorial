/**
* @ B201210103
* @ İstediğimiz sayının faktöriyelini yanlış formatta hesaplayan kodlama
* @ 1.Öğretim B grubu
* @ 1.Ödev
* @ 07.08.2022
* @ Gülcan Rabia Aksu
*/

#include <iostream>
#include "Factorial.hpp"
#include <fstream>
using namespace std;

int main(){

	int girileceksayi;							//Hesaplanması istenen sayı için tanımlanan değişken
	cout<<"Faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz:"; 
	cin>>girileceksayi;							//Hesaplanacak sayıyı ekrandan alan kısım.							
	Factorial factorial;						//Ekrandan girilen sayının istenen şekilde faktöriyelinin hesaplanamsı için oluşturulan classtan oluşturulan nesne
	factorial.factorial(girileceksayi);			//Class'taki fonksiyonların çalışması için ekrandan alınan sayının fonksiyonlara gönderildiği kısım.
	cout<<endl;
	return 0;
}
