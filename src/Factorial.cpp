/**
* @ B201210103
* @ İstediğimiz sayının faktöriyelini yanlış formatta hesaplayan kodlama
* @ 1.Öğretim B grubu
* @ 1.Ödev
* @ 07.08.2022
* @ Gülcan Rabia Aksu
*/

#include "Factorial.hpp"
#include "ArrayList.hpp"
#include <fstream>
	
	
	int Factorial::carp(int x, ArrayList *array, int numaraUzunluk)  //Girilen sayının faktoriyelinin hesaplandığı kısımdır.
	{
		int fazla=0;
		
		for (int m=0; m<numaraUzunluk; m++)						
		{								  						
			int sayi = array->elementAta(m) * x + fazla;  		
			array->elementAta(m) = sayi % 10;					
			fazla = sayi/10;
		}
	
		while (fazla)
		{
			array->insert(numaraUzunluk,fazla%10);
			fazla = fazla/10;
			numaraUzunluk++;
		}
		return numaraUzunluk;
	}
	
	void Factorial::factorial(int n)  
	{
		ArrayList *array=new ArrayList();  //Yeni bir ArrayList oluşturup içine 1 değeri atadık.
		array->insert(0,1);				  
		
		int size=1;						   
		int toplamBasamak=0;
		for (int x=2; x<=n; x++){    	  //Ödevde istenen yanlış faktöriyelin hesaplanması için kurulan döngüdür.
		
			string bUzun = to_string(x);
			int temp=x;
			for(int k=0;k<bUzun.length();k++)
			{
				toplamBasamak += temp%10;
				temp = temp/10;
			}

			size =carp(toplamBasamak, array, size); 
			toplamBasamak=0;		
		}
					
		
		ofstream MyFile("Cevap.txt"); 		//Cevap.txt dosyası açılıp sonucu yazdığımız kısımdır.
		for (int m=size-1; m>=0; m--) MyFile << array->elementAta(m);
		delete array;
	}
	
	



