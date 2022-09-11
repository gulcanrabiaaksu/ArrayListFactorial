/**
* @ B201210103
* @ İstediğimiz sayının faktöriyelini yanlış formatta hesaplayan kodlama
* @ 1.Öğretim B grubu
* @ 1.Ödev
* @ 07.08.2022
* @ Gülcan Rabia Aksu
*/

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP
#include <iostream>

using namespace std;

class ArrayList{
        private:
		int *items;
		int length;
		int capacity;
		void reverse(int);
		
	public:

        ArrayList();
        void insert(int,const int&);  //İstenilen indise eleman ekler.
        int size() const;             //Boyutunu verir.
        bool isEmpty() const;         //Boş mu dolu mu kontrol eder.
        int &elementAta(int);         //Belirtilen indisteki elemanı verir.
        void removeAt(int );          //Belirtilen indisteki elemanı siler.
        void clear();                 //Sıfırlar.
        void reverseAtt(int);         
        ~ArrayList();
};
#endif 
