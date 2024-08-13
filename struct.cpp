#include <iostream>
using namespace std ;

struct Mahasiswa{
	// namakan struct dengan huruf besar di awal
	string npm, nama, jurusan;
	int umur ;
	string hobi [3];
}mhs1 , mhs2; //global

int main(){
///   cara 1
//	Mahasiswa mhs3; //local
	mhs1.npm = "23621037";
	mhs1.nama = "otong";
	mhs1.jurusan = "teknik elektro";
	mhs1.umur = 20;
	mhs1.hobi[0]="bola";
		mhs1.hobi[1]="voly";
	mhs1.hobi[0]="bolu";
		
	cout<<" NPM mahasiswa 1 : "<<mhs1.npm <<endl;
	cout<<" Nama mahasiswa 1 : "<<mhs1.nama <<endl;
	cout<<" jurusan mahasiswa 1 : "<<mhs1.jurusan <<endl;
	cout<<" umur: "<<mhs1.umur <<endl;
		cout<<" Hobi: "<<mhs1.hobi [0] <<endl;
			cout<<" Hobi: "<<mhs1.hobi [1] <<endl;
				cout<<" Hobi: "<<mhs1.hobi [2] <<endl;
//	cara 2

	mhs2 ={"\n 2493058","wahyu  prasetyo","sistem informasi", 19, {"baca","design","game"}};
	cout<<" NPM mahasiswa 2 : "<<mhs2.npm <<endl;
	cout<<" Nama mahasiswa 2 : "<<mhs2.nama <<endl;
	cout<<" jurusan mahasiswa 2 : "<<mhs2.jurusan <<endl;
	cout<<" umur: "<<mhs2.umur <<endl;
		cout<<" umur: "<<mhs2.umur <<endl;
		cout<<" Hobi: "<<mhs2.hobi [0] <<endl;
			cout<<" Hobi: "<<mhs2.hobi [1] <<endl;
				cout<<" Hobi: "<<mhs2.hobi [2] <<endl;
	
	
	Mahasiswa mhs3 = {"3948505","aira","TI",21};
	cout<<" \n NPM mahasiswa 3: "<<mhs3.npm <<endl;
	cout<<" Nama mahasiswa 3 : "<<mhs3.nama <<endl;
	cout<<" jurusan mahasiswa 3 : "<<mhs3.jurusan <<endl;
	cout<<" umur: "<<mhs3.umur <<endl;
}

