#include <iostream>
using namespace std ;

struct Kampus{
	string namaKampus, alamatKampus;
	int tahunBerdiri;
	
};

struct Mahasiswa{
	// namakan struct dengan huruf besar di awal
	string npm, nama, jurusan;
	int umur ;
	Kampus kps;
	struct AlamatMhs{
		string jalan;
	}alamat;
	string hobi [3];
	
	
};//mhs1 , mhs2; //global

void cetakDataMahasiswa (Mahasiswa data){
	cout<<" NPM mahasiswa  : "<<data.npm <<endl;
	cout<<" Nama mahasiswa  : "<<data.nama <<endl;
	cout<<" jurusan mahasiswa  : "<<data.jurusan <<endl;
	
	cout<< "Nama univ mahasiswa  :"<<data.kps.namaKampus<<endl;
	cout<< "alamat univ mahasiswa  :"<<data.kps.alamatKampus<<endl;
	cout<< "Tb univ mahasiswa  :"<<data.kps.tahunBerdiri<<endl;	
	cout<< "Nama univ mahasiswa  :"<<data.kps.namaKampus<<endl;
	cout<< "alamat mahasiswa  :"<<data.alamat.jalan<<endl;
	cout<<" umur: "<<data.umur <<endl;
	cout<<" Hobi: "<<data.hobi [0] <<endl;
	cout<<" Hobi: "<<data.hobi [1] <<endl;
	cout<<" Hobi: "<<data.hobi [2] <<endl;
	
}

int main(){
	
	
//	array dari struktur
	Mahasiswa mhs[2];
	
	Kampus kampusUtama = {"universitas teranama","undonesia",12};
	

//	Mahasiswa mhs3; //local
	mhs[0].npm = "23621037";
	mhs[0].nama = "otong";
	mhs[0].jurusan = "teknik elektro";
	mhs[0].umur = 20;
	mhs[0].hobi[0]="bola";
		mhs[0].hobi[1]="voly";
	mhs[0].hobi[2]="bolu";
	mhs[0].kps = kampusUtama;
//	mhs[0].kps.namaKampus = "universitas ternama";
//	mhs[0].kps.alamatKampus ="indonesia";
//	mhs[0].kps.tahunBerdiri = 1912;
	mhs[0].alamat.jalan = " jl2";
	
	cetakDataMahasiswa(mhs[0]);

	cout<<"\n\n"<<endl;
	
	mhs[1].npm = "23621033";
	mhs[1].nama = "ra";
	mhs[1].jurusan = "teknik elektro";
	mhs[1].umur = 20;
	mhs[1].hobi[0]="bola";
	mhs[1].hobi[1]="voly";
	mhs[1].hobi[2]="bolu";
//	mhs[1].kps.namaKampus = "universitas ternama";
//	mhs[1].kps.alamatKampus ="indonesia";
//	mhs[1].kps.tahunBerdiri = 1912;
	mhs[1].kps = kampusUtama ;
	mhs[1].alamat.jalan = " jl2";
	
	cetakDataMahasiswa(mhs[1]);

		
//	cout<<" \n \n NPM mahasiswa 2 : "<<mhs[1].npm <<endl;
//	cout<<" Nama mahasiswa 2 : "<<mhs[1].nama <<endl;
//	cout<<" jurusan mahasiswa 2 : "<<mhs[1].jurusan <<endl;
//	
//	cout<< "Nama univ mahasiswa 2 :"<<mhs[1].kps.namaKampus<<endl;
//	cout<< "alamat univ mahasiswa 2 :"<<mhs[1].kps.alamatKampus<<endl;
//	cout<< "Tb univ mahasiswa 2 :"<<mhs[1].kps.tahunBerdiri<<endl;	
//	cout<< "Nama univ mahasiswa 2 :"<<mhs[1].kps.namaKampus<<endl;
//	cout<< "alamat mahasiswa 2 :"<<mhs[1].alamat.jalan<<endl;
//	cout<<" umur: "<<mhs[1].umur <<endl;
//	cout<<" Hobi: "<<mhs[1].hobi [0] <<endl;
//	cout<<" Hobi: "<<mhs[1].hobi [1] <<endl;
//	cout<<" Hobi: "<<mhs[1].hobi [2] <<endl;
//	cara 2

//	mhs[1] ={"\n 2493058","wahyu  prasetyo","sistem informasi", 19, .kps = {"uniyap","indo",2000},
//	.alamat.jalan = {"jayapura"},
//	{"baca","design","game"}
//	};
//	cout<<" NPM mahasiswa 2 : "<<mhs[1].npm <<endl;
//	cout<<" Nama mahasiswa 2 : "<<mhs[1].nama <<endl;
//	cout<<" jurusan mahasiswa 2 : "<<mhs[1].jurusan <<endl;
//	cout<<" umur: "<<mhs[1].umur <<endl;
//	cout<<" umur: "<<mhs[1].umur <<endl;
//	cout<< "alamat univ mahasiswa 2 :"<<mhs[1].kps.alamatKampus<<endl;
//	cout<< "Tb univ mahasiswa 2 :"<<mhs[1].kps.tahunBerdiri<<endl;	
//	cout<< "Nama univ mahasiswa 2 :"<<mhs[1].kps.namaKampus<<endl;
//	out<< "alamat mahasiswa 1 :"<<mhs[1].alamat.jalan<<endl;
//	cout<<" Hobi: "<<mhs[1].hobi [0] <<endl;			
//	cout<<" Hobi: "<<mhs[1].hobi [1] <<endl;
//	cout<<" Hobi: "<<mhs[1].hobi [2] <<endl;
	
//	
//	Mahasiswa mhs3 = {"3948505","aira","TI",21};
//	cout<<" \n NPM mahasiswa 3: "<<mhs3.npm <<endl;
//	cout<<" Nama mahasiswa 3 : "<<mhs3.nama <<endl;
//	cout<<" jurusan mahasiswa 3 : "<<mhs3.jurusan <<endl;
//	cout<<" umur: "<<mhs3.umur <<endl;
}

