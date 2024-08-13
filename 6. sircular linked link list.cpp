#include <iostream>
using namespace std;

// deklarasi structure untuk circular single linked list
    struct Mahasiswa {
    string npm,nama, jurusan;

    Mahasiswa *next;
    };

    Mahasiswa *head, *tail, *newNode, *cur, *del;

// create circular single linked list
void createCircularsinglelinkedlist(string dataBaru[3]){
    head = new Mahasiswa();
    head->npm = dataBaru[0];
    head->nama = dataBaru[1];
    head->jurusan= dataBaru[2];
    tail = head;
    tail->next = head;
}

// print circular single linked list
void printCircular(){
    cout << "Data Mahasiswa" << endl;
    cout << "| NPM \t\t | Nama \t\t | Jurusan \t\t |"<<endl;
    cout << "--------------------------------------------" << endl;
    cur = head;
    while(cur->next != head){
        //print
        cout <<"|"<<cur->npm << "|\t\t"<<cur->nama << "\t\t|"<<cur->jurusan<<"\t\t"<< endl;
        cur = cur->next;
    }
        cout <<"|\t"<<cur->npm << " \t|"<<cur->nama << " \t|\t"<<cur->jurusan<<"\t\t"<< endl;
    cout << "--------------------------------------------" << endl;
}

//add first
void addFirst(string data[3]){

    if(head == NULL){
        cout<<"buat linked list dulu"<<endl;
    }else{

    newNode = new Mahasiswa();
    newNode->npm = data[0];
    newNode->nama = data[1];
    newNode->jurusan= data[2];
    newNode->next = head;
    tail-> next = newNode;
    head = newNode;

}
}
//add last
void addLast(string data[3]){
     if(head == NULL){
        cout<<"buat linked list dulu"<<endl;
    }else{
    newNode = new Mahasiswa();
    newNode->npm = data[0];
    newNode->nama = data[1];
    newNode->jurusan= data[2];
    newNode->next = head;
    tail-> next = newNode;
    tail = newNode;
    }
}

// addMidle
void addMidle(string data [3],int posisi){
     if(head == NULL){
        cout<<"buat linked list dulu"<<endl;
    }else{
    if (posisi == 1){
        cout<<"posisi 1 bukan di tengah"<<endl;
    }else{
    newNode = new Mahasiswa();
    newNode->npm = data[0];
    newNode->nama = data[1];
    newNode->jurusan= data[2];
    // transfersing
    int nomor = 1;
    cur = head;
    while(nomor <posisi-1){
        cur = cur->next;
        nomor++;
    }

    newNode->next = cur->next;
    cur->next = newNode;


    }
    }
}

// remove first
void removeFirst(){
     if(head == NULL){
        cout<<"buat linked list dulu"<<endl;
    }else{
    del = head;
    head = head->next;
    tail->next = head;
    delete del;
    }
}

// REMOVE LAST
void removeLast(){

    if(head == NULL){
        cout<<"buat linked list dulu"<<endl;
    }else{
    del =  tail;
    cur = head;
    while(cur->next != tail){
            cur = cur->next;
    }
    tail = cur;
    tail->next = head;
    delete del;

    }
}

// remove middle
void removeMiddle(int posisi){
     if(head == NULL){
        cout<<"buat linked list dulu"<<endl;
    }else{
    if (posisi == 1){
        cout<<"posisi 1 bukan di tengah"<<endl;
    }else{
    // tranversing
    int nomor = 1;
    cur = cur->next;
    while(nomor < posisi-1){
        cur = cur->next;
        nomor++;
    }

    del = cur->next;
    cur->next = del->next;
    delete del;

        }
    }
}

int main(){
    string dataBaru [3] = {"293378","aira","si"};
    createCircularsinglelinkedlist(dataBaru);
   
    string data [3] = {"234564","rara","informartika"};
    addFirst(data);
    string data2[3] = {"028038","de","sistem informasi"};
    addLast(data2);
    string data3[3] = {"028039","la","sistem informasi"};
    addMidle(data3,5);
    removeMiddle(5);
    printCircular();
}
