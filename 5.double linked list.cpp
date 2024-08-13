#include <iostream>
using namespace std;

// deklarasi doble lilnked list

struct DataUser{
    string nama, username,email,password;
    DataUser *prev;
    DataUser *next;
};

// variabel pointer global
DataUser *head, *tail,*cur,*newNode,*del, *afterNode;

// create linked list
void createDoubleLinkedList(string data[4]){
    head = new DataUser();
    head->nama = data[0];
    head->username = data[1];
    head->email = data[2];
    head->password = data[3];
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

// print double list
int countDoubleLinkedList(){

   if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
    cur = head;
    int jumlah = 0;
   
     while(cur != NULL){
        jumlah++;
       
        // step
        cur = cur->next;
         }
    return jumlah;
    }

}

// Add First
void add_first(string data [4]){
    
   if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
        newNode = new DataUser();
        newNode->nama = data[0];
        newNode->username = data[1];
        newNode->email = data[2];
        newNode->password = data[3];
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    
    }

}
// Add Last
void addLast(string data [4]){
    
   if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
        newNode = new DataUser();
        newNode->nama = data[0];
        newNode->username = data[1];
        newNode->email = data[2];
        newNode->password = data[3];
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    
    }
}

// add midle 
void addMidle(string data [4], int posisi){
    if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
       if(posisi == 1){
            cout<<"Posisi 1 itu bukan posisi tengah "<<endl;
        }else if(posisi < 1 || posisi > countDoubleLinkedList() ){
            cout<<"posisi di luat jangkauan" <<endl;
        }else{

            newNode = new DataUser();
            newNode->nama = data[0];
            newNode->username = data[1];
            newNode->email = data[2];
            newNode->password = data[3];
            
            // transfersing
            cur = head;
            int nomor = 1;
            while(nomor <posisi -1 ){
                cur = cur->next;
                nomor++;
            }

            afterNode = cur->next;
            newNode->prev = cur;
            newNode->next = afterNode;
            cur->next = newNode;
            afterNode->prev = newNode;
            
            }
    }
}
// revome first data
void removeFirst(){
    if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
}

// revome last data
void removeLast(){
    if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
        del = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
}

// remove middle
void removeMiddle(int posisi){
     if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
        if(posisi == 1 || posisi == countDoubleLinkedList()){
            cout<<"Posisi  bukan posisi tengah "<<endl;
        } else if(posisi < 1 || posisi > countDoubleLinkedList() ){
            cout<<"posisi di luar jangkauan"<<endl;
        }else{
            int nomor = 1;
            cur = head ;
            while(nomor < posisi -1){
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

//  edit first double linked list
void changeFirst( string data [4]){
        head->nama = data[0];
        head->username = data[1];
        head->email = data[2];
        head->password = data[3];
    }

// edit middle double linked list
void changeMiddleDouble(string data[4], int posisi){
    if (head == NULL){
        cout<<"Double linked list belulm di buat";

    }else{
        if(posisi == 1 || posisi == countDoubleLinkedList()){
            cout<<"Posisi  bukan posisi tengah "<<endl;
        } else if(posisi < 1 || posisi > countDoubleLinkedList() ){
            cout<<"posisi di luar jangkauan"<<endl;
        }else{
            cur = head;
            int nomor = 1;
            while(nomor < posisi){
                cur = cur->next;
                nomor++;
            }
            cur->nama = data[0];
            cur->username = data[1];
            cur->email = data[2];
            cur->password = data[3];
        }
}
}
// print double list
void printDoubleLinkedList(){

    cout<<"Total data = "<< countDoubleLinkedList()<<endl;
   if (head == NULL){
        cout<<"Double linked list belulm di buat";
    }else{
    cur = head;
    cout<<"Isi Data = \n";

    while(cur != NULL){
        // PRINT
        cout << "nama user: " << cur->nama << endl;
        cout << "username user : " << cur->username << endl;
        cout << "email : " << cur->email << endl;
        cout << "password : " << cur->password <<"\n"<< endl;
        cout << "-------------------------" << endl;
        // step
        cur = cur->next;
        }
    }

}

int main(){

    string newData[4] = {"aira","weather","wea@gmail.com","ezz334"}; 
    createDoubleLinkedList(newData);

    string Data2[4]={"nana","bambang","a@gamil.com","n837"};
    add_first(Data2);
    printDoubleLinkedList();

    string Data3[4]={"siti","sit","ditgamil.com","n837"};
    addLast(Data3);
    printDoubleLinkedList();

    string Data4[4]={"rara","rar","rara@gmail.com","38475"};
    addMidle(Data4,1);
    printDoubleLinkedList();
    // removeMiddle(2);

    string dataUbah [4]={"ubah","ubah","ubah","ubah"};
    changeMiddleDouble(dataUbah,2);
    printDoubleLinkedList();

    // DataUser *node1,*node2;
    // node1 =new DataUser();
    // node2 =new DataUser();

    // // isi data user node1

    // node1->nama = "John Doe";
    // node1->username = "johndoe";
    // node1->email = "johndoe@example.com";
    // node1->password = "password123";
    // node1->prev = NULL;
    // node1->next = node2;

    // // isi data user nodeé

    // node2->nama = "bagus";
    // node2->username = "bgs";
    // node2->email = "bagus@example.com";
    // node2->password = "dahdah123";
    // node2->prev = node1;
    // node2->next = NULL;

    // print
 

    return 0;
    }




