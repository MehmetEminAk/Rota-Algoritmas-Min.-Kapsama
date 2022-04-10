/*
Created by MrSoftwarEngineer (MEHMET EMİN AK)
This program will help you for Route Algorithm.
*/

#include <iostream>
#include <windows.h>


using namespace std; 

int main()
{
    int a, b;

    setlocale(LC_ALL,"Turkish");
    cout << "      **********Rota Algoritması  Hesaplayan Program**********\n";
    cout << "LüTFEN KAÇA KAÇLIK BİR MATRİS ÜZERİNDE İŞLEM YAPILACAĞINI GİRİNİZ:";
    cin >> a;						//kullanıcıdan matrisin satır sayısını alma
    cin >>b;						//kullanıcıdan matrisin sütun sayısını alma
    

    int matrix[a][b];					//matrisi oluşturduk	
    int temp;						//elemanlar eklenmeden önce geçici olarak temp'e yüklenicek,temp belirli şartları sağlarsa matrise işlenicek.
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
        	
            cout << "Lütfen matrisinizin " << i+1 << ". satırdaki ve " << j+1 << ". sütundaki elemanını giriniz";
            cin>>temp;
            if(temp==0 || temp==1){               //Girilen sayının 1 veya 0 olup olmadığını kontrol etme.
            	matrix[i][j]=temp;
			}
			else{
				cout<<"Lütfen geçerli bir değer girin değerler sadece ve sadece 0 ile 1 arasında olmalıdır";
				Sleep(5000);
				goto kapat;
			}
            
        }
    }
    kapat:
		exit;
		
    
    for (int k = 0; k < a; k++) {			//matrisi konsol ekranına yazdıracak
        for (int l = 0; l < b; l++) {
            cout << matrix[k][l]<<"\t";
            
        }
        cout << "\n";
    }
    int sutunAgirliklari[b];				//sütun ağırlıkları diye yeni bir liste tanımladık.
	for(int o=0;o<b;o++){
		sutunAgirliklari[o]=0;			//ve ilk etapta tüm elemanlarını sıfırladık.
	}
	for(int m=0;m<a;m++){
		for(int n=0;n<b;n++){
			if(matrix[m][n]==1){		//her bir hücreyi kontrol ediyoruz ve 1 değerinde olan hücrenin sütun ağırlığını 1 arttırıyoruz
				sutunAgirliklari[n]++;
			}
			else{
				continue;		
			}
		}
	}
	float satirAgirliklari[a];
	for(int p=0;p<b;p++){
		cout<<p+1<<". sütunun agirligi"<<sutunAgirliklari[p]<<"\n ";    //Her bir sütunun ağırlığını yazdırıyoruz ve eğer mutlak satır varsa yani ağırlığı
		if(sutunAgirliklari[p]==1){								//1 olan sütun varsa belirtiyoruz.
			cout<<"bundan dolayı "<<p+1<<". satır mutlak satırdır. \n";
		}
		
		
	}
	
	for(int i=0;i<a;i++){
		satirAgirliklari[i]=0;   //Satır ağırlıklarını tutan dizinin her bir elemanını sıfırladık.
	}
	for(int m=0;m<a;m++){
		
		for(int n=0;n<b;n++){
			if(matrix[m][n]==1){
				
				satirAgirliklari[m]+=(1/sutunAgirliklari[n]);
			}
	
}
satirAgirliklari[m]*=a;
}

for(int g=0;g<a;g++){
	cout<<satirAgirliklari[g]<<"\n";
}
    


}

