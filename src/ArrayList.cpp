/**
* @ B201210103
* @ İstediğimiz sayının faktöriyelini yanlış formatta hesaplayan kodlama
* @ 1.Öğretim B grubu
* @ 1.Ödev
* @ 07.08.2022
* @ Gülcan Rabia Aksu
*/
#include "ArrayList.hpp"
#include <iostream>

	ArrayList::ArrayList()										//ArrayList nesnesi oluşturulduğunda ilk çalışan kurucu fonksiyondur.
		{
			length = 0;
			capacity=0;
			items = NULL;
		}	

	void ArrayList::reverse( int newCapacity) {

			if(capacity>=newCapacity) return;           		//Yeni kapasite eskisinden küçükse hiçbir şey yapmaz.
			int *tmp = new int[newCapacity];            		//Tmp değişkenine dizi oluşturur
			for(int k=0;k<length;k++) tmp[k]= items[k]; 		//İçerisindeki veri kopyalanır.
			if(items != NULL) delete [] items;         			//Heap bellekte çöp oluşmaması için silinir.
			items = tmp;                                		//Geçici dizinin adresi items değişkenine atanır.
			capacity = newCapacity;                     		//Kapasite bilgisi yenilenir.
		}
		
	int& ArrayList::elementAta(int m) {				            //İndexteki elemanı getiren fonksiyondur.
			return items[m]; 
		}

	void ArrayList::insert(int m,const int& item)  		     	//ArrayListe eleman eklemek için kullanılan fonksiyondur.
		{
			
			if(length >= capacity) reverse(max(1,2*capacity));  //ArrayListin kapasite kontrolünün yapıldığı fınksiyondur.
			for(int k=length-1;k>=m;k--) {
				items[k + 1] = items[k]; 	                        
			}
			items[m] = item;										
			length++;											//İşlem bitince tutulan dizi uzunluğu arttırılır.
		}
		
	int ArrayList::size() const                     			//ArrayListin boyutunu veren fonksiyondur.
		{
  		return length;
		}

	bool ArrayList::isEmpty() const 							//ArrayList boş mu diye kontrol edilen fonksiyondur.
		{
			return size() == 0;
		}

	void ArrayList::removeAt(int m) {                           //Belirtilen indisteki elemanı silmeye yarayan fonksiyondur.
    		if (m < 0 || m >= length) throw "İndeks disindadir.";
    		for (int k = m + 1; k < length; k++) items[k - 1] = items[k];
    		length--;
		}

	void ArrayList::clear() {                                   //ArrayListi sıfırlar.
   		 length = 0;
		}
		
	ArrayList::~ArrayList() 									//Bellekte kullanılan alanları serbest bırakmaya yarayan yıkıcı fonksiyondur.
		{
			if(items != NULL) delete [] items;
		}


