#include <iostream>
using namespace std;

int tambah (int x, int y) {
	int hasil;
	hasil=x+y;
	return hasil;
}
int kurang (int x, int y) {
	int hasil;
	hasil=x-y;
	return hasil;
}
int kali (int x, int y) {
	int hasil;
	hasil=x*y;
	return hasil;
}
float bagi (float x, float y) {
	float hasil;
	hasil=x/y;
	return hasil;
}
int main () {
	int x,y,pilih;
	float a,b;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi	: ";
	cout<<"	\n1. Penambahan ";
	cout<<" \n2. Pengurangan ";
	cout<<" \n3. Perkalian ";
	cout<<" \n4. Pembagian ";
	cout<<" \nPilih Menu No	: "; cin>>pilih;
	if (pilih == 1) {
		cout<<"Masukan Bilangan Pertama\t: ";cin>> x;
		cout<<"Masukan Bilangan Kedua\t\t: ";cin>> y;
		cout<<endl;
		cout<<"Hasil Dari "<<x<<" + "<<y<<"\t\t= "<<tambah(x,y);
	}	
	else if (pilih == 2) {
		cout<<"Masukan Bilangan Pertama\t: ";cin>> x;
		cout<<"masukan Bilangan Kedua\t\t: ";cin>> y;
		cout<<endl;
		cout<<"Hasil Dari "<<x<<" - "<<y<<"\t\t= "<<kurang(x,y);
	}
	else if (pilih == 3) {
		cout<<"Masukan Bilangan Pertama\t: ";cin>> x;
		cout<<"Masukan Bilangan Kedua\t\t: ";cin>> y;
		cout<<endl;
		cout<<"Hasil Dari "<<x<<" x "<<y<<"\t\t= "<<kali(x,y);
	}
	else if (pilih == 4) {
		cout<<"Masukan Bilangan Pertama\t: ";cin>> x;
		cout<<"Masukan Bilangan Kedua\t\t: ";cin>> y;
		cout<<endl;
		cout<<"Hasil Dari "<<x<<" : "<<y<<"\t\t= "<<bagi(x,y);
	}
	else {
		cout<<"Pilihan Tidak Tersedia";
	}
	return 0;
}
