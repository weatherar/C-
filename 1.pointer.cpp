#include <iostream>
using namespace std ;

int main(){
	
	string nama = "aira";
	cout << nama <<"berada pasa alamat" <<&nama <<endl;
	
	string *ptrNama = &nama;
	
	
	
//	cout<<ptrNama<<endl;
//		cout<<*ptrNama;
//	
//	*ptrNama = "budi";
//	cout<<ptrNama<<endl;
//		cout<<*ptrNama;
		
	int nilai = 5;
	int *ptrNilai = &nilai;
	cout << "alamat dari varible nilai"<< ptrNilai<<endl;
	cout << "isi dari varible nilai"<< nilai<<endl;
	(*ptrNilai )++; //pakai tanda kurung jika ingin nilainya di ubah
	cout << "isi dari varible nilai"<< nilai<<endl;
	cout << "alamat dari varible nilai"<< ptrNilai;
}

