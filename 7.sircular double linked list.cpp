// sircular double linked list
#include <iostream>
using namespace std;

// structure linked list
struct dataBarang{
    string namaBarang;
    int jumlahBarang,hargaBarang;

    // pointer
    dataBarang *prev;
    dataBarang *next;
};

// varible pointer global
dataBarang *head, *tail, *cur,*del, *newNode, *afterNode;

// fungsi create circular doble linked list
void createDataBarang(string namaBarang, int jmlBarang, int hargaBarang){
    head = new dataBarang();
    head->namaBarang = namaBarang;
    head->jumlahBarang = jmlBarang;
    head->hargaBarang = hargaBarang;
    head->prev = head;
    head->next = head;
    tail = head;
}

// add First
void addFirst(string namaBarang, int jmlBarang, int hargaBarang){
    if (head == NULL){
        cout<<"buat linked list dahulu";
    }else{
        newNode = new dataBarang();
        newNode->namaBarang = namaBarang;
        newNode->jumlahBarang = jmlBarang;
        newNode->hargaBarang = hargaBarang;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        head = newNode;
    }
}
// add Last
void addLast(string namaBarang, int jmlBarang, int hargaBarang){
    if (head == NULL){
        cout<<"buat linked list dahulu";
    }else{
        newNode = new dataBarang();
        newNode->namaBarang = namaBarang;
        newNode->jumlahBarang = jmlBarang;
        newNode->hargaBarang = hargaBarang;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        tail= newNode;
    }
}

// add midle
void addMiddle(string namaBarang, int jmlBarang, int hargaBarang, int posisi){
    if(head == NULL){
        cout<<"buat linked list dahulu";
    }else{
        if(posisi == 1){
            cout<<"posisi satu bukan di tengah";
        }else if(posisi < 1){
            cout<<"posisi di luar jangkauan";
        }else{
        newNode = new dataBarang();
        newNode->namaBarang = namaBarang;
        newNode->jumlahBarang = jmlBarang;
        newNode->hargaBarang = hargaBarang;
        newNode->prev = tail;
        newNode->next = head;

        // tracversing
        cur = head;
        int nomor = 1;
        while(nomor <posisi -1 ){
            cur = cur->next;
            nomor++;
        }
        afterNode = cur->next;
        cur->next = newNode;
        afterNode->prev = newNode;
        newNode->prev = cur;
        newNode->next = afterNode;

        }
     }
    }
    

// remove first
void removeFirst(){
if (head == NULL){
        cout<<"buat linked list dahulu";
    }else{
        del = head;
        head = head->next;
        tail->next = head;
        head->prev = tail;
        delete del;
    }
}
// remove Last
void removeLast(){
    if (head == NULL){
        cout<<"buat linked list dahulu";
    }else{
        del = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        delete del;
    }
}

// remove middle
void removeMiddle(int posisi){
     if(head == NULL){
        cout<<"buat linked list dahulu";
    }else{
        if(posisi == 1){
            cout<<"posisi satu bukan di tengah";
        }else if(posisi < 1){
            cout<<"posisi di luar jangkauan";
        }else{
        // tranvering
        cur = head;
        int nomor = 1;
        while(nomor < posisi -1 ){
            cur = cur->next;
            nomor++;
        }
        del = cur->next;
        afterNode = del->next;
        cur->next = afterNode;
        afterNode->prev = cur;
        delete del;

        }
    }
}

// funsgi print
void printdataBarang(){
    if (head == NULL){
        cout<<"buat linked list dahulu";
    }else{
    cout<<"Data Barang : "<< endl;
    cur = head;
    while(cur->next != head){
        // print
        cout<<"Nama Barang: "<<cur->namaBarang<<endl;
        cout<<"Jumlah Barang: "<<cur->jumlahBarang<<"barang"<<endl;
        cout<<"Harga Barang: Rp. "<<cur->hargaBarang<<"\n"<<endl;
        cout<<"-------------------"<<endl;

        // step
        cur = cur->next;
        }
        cout<<"Nama Barang: "<<cur->namaBarang<<endl;
        cout<<"Jumlah Barang: "<<cur->jumlahBarang<<" barang"<<endl;
        cout<<"Harga Barang: Rp. "<<cur->hargaBarang<<"\n"<<endl;
        cout<<"-------------------"<<endl;
      ;

    // print last node
    }
}

int main(){
    createDataBarang("sabun",12,5000);
    addFirst("sikat",22,9000);
    addLast("pocked",22,9000);
    addMiddle("pixal",10,2000,6);
    removeFirst();
    removeLast();
    removeMiddle(6);
    printdataBarang();
}
