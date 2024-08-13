#include <iostream>
using namespace std ;

//deklarasi linked link list
struct Buku{
	
//	komponen

	string judul,pengarang;
	int tahunTerbit;
	
//	pointer

	Buku *next;
};

//	membuat fungsi

	Buku *head, *tail, *cur , *newNode , *del, *before;
	
// fungsi create
	void createSingleLinkedList(string judul, string pengarang,int tB){
		head = new Buku();
		head->judul = judul;
		head->pengarang= pengarang;
		head->tahunTerbit = tB;
		head->next = NULL;
        tail = head;			
	}

// mengitung jumlah data dalam linked linst
  int CountSingleLinkedList(){
    cur =head;
    int jumlah = 0;

	while(cur != NULL){
		jumlah++;
		cur = cur->next;
        }
    return jumlah;
    }
// tambah awal single linked list
void addFirst(string judul, string pengarang,int tB)
    {
        newNode = new Buku();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunTerbit = tB;
        newNode->next = head;
        head = newNode;
    }
	
// tambah akhir
void addLast(string judul, string pengarang,int tB)
    {
        newNode = new Buku();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunTerbit = tB;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }

// tambah tengah singel linked list 

void addMiddle(string judul, string pengarang,int tB, int posisi)
    {
     if(posisi < 1  || posisi > CountSingleLinkedList()){
                cout << "posisi di luar jangkauan"<<endl;
            }else if(posisi == 1){
                cout << "Posisi bukan posisi tengah"<<endl;
            } else{ 
                    newNode = new Buku();
                    newNode->judul = judul;
                    newNode->pengarang = pengarang;
                    newNode->tahunTerbit = tB;
                    // transfersing
                    cur = head;
                    int nomor = 1;
                    while(nomor < posisi-1){
                        cur = cur->next;
                        nomor++;
                    }

                    newNode->next = cur->next;
                    cur->next = newNode;
        }

    }
// remove first
    void removeFirst(){
        del = head;
        head = del->next;
        delete del;
    }

// remove last
    void removeLast(){
        del = tail;
        cur = head;
        while(cur->next != tail){
            cur = cur->next;
    }tail =cur;
    tail->next = NULL;
    delete  del;
    }

// remove middle
    void removeMiddle(int posisi){
        if(posisi < 1  || posisi > CountSingleLinkedList()){
                cout << "posisi di luar jangkauan"<<endl;
            }else if(posisi == 1 || posisi == CountSingleLinkedList()){
                cout << "Posisi bukan posisi tengah"<<endl;
            } else{ 

            int nomor = 1;
            cur = head;
                while (nomor<=posisi){
                if(nomor == posisi-1){
                    before = cur;
                }
                if (nomor == posisi){
                    del = cur;
                }
                cur = cur->next;
                nomor++;
            }
            before->next = cur;
            delete del;
         }
    }

    
// ubah awal single linked list
void changeFirst(string judul, string pengarang,int tB)
    {
       	head->judul = judul;
       	head->pengarang = pengarang;
       	head->tahunTerbit = tB;
    }
    
// ubah akhir single linked list
void changeLast(string judul, string pengarang,int tB)
    {
       	tail->judul = judul;
       	tail->pengarang = pengarang;
       	tail->tahunTerbit = tB;
    }

// ubah tengah single linked list
void changeMiddle(string judul, string pengarang,int tB, int posisi)
    {
         if(posisi < 1  || posisi > CountSingleLinkedList()){
                cout << "posisi di luar jangkauan"<<endl;
            }else if(posisi == 1 || posisi == CountSingleLinkedList()){
                cout << "Posisi bukan posisi tengah"<<endl;
            } else{ 
            cur = head;
            int nomor = 1;  
            while(nomor < posisi){
                cur = cur->next;
                nomor++;
            }
            cur->judul = judul;
            cur->pengarang = pengarang;
            cur->tahunTerbit = tB;

            }
    }
// print singlelikedlist
    void printSingleLinkedList(){
    cout<<"jumlah data anda :"<<CountSingleLinkedList()<<endl;
    cur =head;
	while(cur != NULL){
		cout << "Judul buku : " <<cur->judul<<endl;
		cout << "pengarang buku : " <<cur->pengarang <<endl;
		cout << "Tahun terbit buku : " <<cur->tahunTerbit <<endl;
		
		cur = cur->next;
        }
    }
int main (){


    createSingleLinkedList("Kata","aira",2021);
    printSingleLinkedList();

    cout<<"\n\n"<<endl;
    addFirst("Kata2mnya","arai",2020);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;

    cout<<"\n\n"<<endl;
    addLast("agin","airai",1998);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;

    cout<<"\n\n"<<endl;
    removeFirst();
    printSingleLinkedList();
    cout<<"\n\n"<<endl;    cout<<"\n\n"<<endl;
    
    cout<<"\n\n"<<endl;
    addLast("cek","ra",3333);
    printSingleLinkedList();

    cout<<"\n\n"<<endl; 
    removeLast();

    cout<<"\n\n"<<endl;
    addMiddle("winter","aiza",1998,2);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;

    cout<<"\n\n"<<endl;
    addMiddle("woods","ahmad",1998,4);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;


    removeMiddle(1);    
    printSingleLinkedList();
    cout<<"\n\n"<<endl;


//	inisialisasi single linkeslist

// 	Buku *node1, *node2, *node3;
// //	node1 = (Buku*) malloc(sizeof(Buku));
// 	node1 = new Buku();
// 	node2 = new Buku();
// 	node3 = new Buku();
	
// //	ppengisian node 1
// 	node1->judul = "matematika";
// 	node1->pengarang= "Ahli matematika";
// 	node1->tahunTerbit = 1995;
// 	node1->next = node2;
	
// //	pengisian node 2
// 	node2->judul = "aku den ko";
// 	node2->pengarang= "terreilt";
// 	node2->tahunTerbit = 1995;
// 	node2->next = node3;
	
// //	pengisian node 3
// 	node3->judul = "ko dan sz";
// 	node3->pengarang= "Ahli tafsir";
// 	node3->tahunTerbit = 1993;
// 	node3->next = NULL;
	
// // orint single linked list

// 	Buku *cur;
// 	cur =node1;
// 	while(cur != NULL){
// 		cout << "Judul buku : " <<cur->judul<<endl;
// 		cout << "pengarang buku : " <<cur->pengarang <<endl;
// 		cout << "Tahun terbit buku : " <<cur->tahunTerbit <<endl;
		
// 		cur = cur->next;
// 	}
	
	
	
}
