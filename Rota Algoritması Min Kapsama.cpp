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
    cin >> a;
    cin >>b;
    

    int matrix[a][b];
    int temp;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
        	
            cout << "Lütfen matrisinizin " << i+1 << ". satırdaki ve " << j+1 << ". sütundaki elemanını giriniz";
            cin>>temp;
            if(temp==0 || temp==1){
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
		
    
    for (int k = 0; k < a; k++) {
        for (int l = 0; l < b; l++) {
            cout << matrix[k][l]<<"\t";
            
        }
        cout << "\n";
    }
    int sutunAgirliklari[b];
	for(int o=0;o<b;o++){
		sutunAgirliklari[o]=0;
	}
	for(int m=0;m<a;m++){
		for(int n=0;n<b;n++){
			if(matrix[m][n]==1){
				sutunAgirliklari[n]++;
			}
			else{
				continue;
			}
		}
	}
	float satirAgirliklari[a];
	for(int p=0;p<b;p++){
		cout<<p+1<<". sütunun agirligi"<<sutunAgirliklari[p]<<"\n ";
		if(sutunAgirliklari[p]==1){
			cout<<"bundan dolayı "<<p+1<<". satır mutlak satırdır. \n";
		}
		
		
	}
	
	for(int i=0;i<a;i++){
		satirAgirliklari[i]=0.00;   //Satır ağırlıklarını tutan dizinin her bir elemanını sıfırladım.
	}
	for(int m=0;m<a;m++){
		
		for(int n=0;n<b;n++){
			if(matrix[m][n]==1){
				
				satirAgirliklari[m]+=float((1/sutunAgirliklari[n]));
			}
	
}
}
for(int g=0;g<a;g++){
	cout<<satirAgirliklari[g]<<"\n";
}
    


}

