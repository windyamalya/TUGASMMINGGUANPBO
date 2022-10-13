#include <iostream>
using namespace std;
int main(){
	int n, pilih;
	
	cout<<"Menghitung Hasil Panen Kopi"<<endl<<endl;
	cout<<"Banyak Hasil Panen : "; cin>>n;
	
	float I[n];
	int H[n], C[n], D[n], P[n], Hasil[n];
	
	cout<<"1. Robusta"<<endl;
	cout<<"2.Arabika"<<endl;
	
	for (int i=0; i<n; i++){
		cout<<"Hasil Panen Kopi"<<i+1<<endl;
		cout<<"Pilih Kode Yang Ingin Dihitung : "; cin>>pilih;
		
		if(pilih == 1){
			cout<<"Jumlah Tanaman per Hektar : "; cin>>H[i];
			cout<<"Jumlah cabang produktif per tanaman : "; cin>>C[i];
			cout<<"Jumlah dompolan per cabang produktif : "; cin>>D[i];
			cout<<"Jumlah buah per dompolan : "; cin>>P[i];
			cout<<"Indeks biji : "; cin>>I[i];
			Hasil[i]=H[i]*C[i]*D[i]*P[i]*I[i]*0.2;
			
		}else if (pilih == 2) {
			cout<<"Jumlah Tanaman per Hektar : "; cin>>H[i];
			cout<<"Jumlah cabang produktif per tanaman : "; cin>>C[i];
			cout<<"Jumlah dompolan per cabang produktif : "; cin>>D[i];
			cout<<"Jumlah buah per dompolan : "; cin>>P[i];
			cout<<"Indeks biji : "; cin>>I[i];
			Hasil[i]=H[i]*C[i]*D[i]*P[i]*I[i]*0.2;
		}
		cout<<endl;
	}
	cout<<"Hasil Panen : "<<endl<<endl;
	for (int i=0; i<n; i++){
		cout<<"Hasil Panen : "<<i+1<<"="<<Hasil[i]<<endl;
	}
	return 0;
}
