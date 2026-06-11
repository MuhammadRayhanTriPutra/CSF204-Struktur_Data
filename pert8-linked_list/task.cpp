#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

void dataBaru(Node*& head, int data){
    Node* newNode = createNode(data);
    newNode -> next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data<<" -> ";
        temp= temp->next;
    };
    cout << "NULL" << endl;
}

void deleteNode(Node*& head, int key) {
    Node* temp = head;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }

    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Data " << "key" << " tidak ditemukan di dalam Linked List !" << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Data " << key << " Telah terhapus !" << endl;
}

void tambahData(Node*& head) {
    int jumlahData;
    int data;
    cout << "berapa data yang ingin di tambahkan : "; cin >> jumlahData;
    for (int i=0; i<jumlahData; i++) {
        cout << "Data ke-" << i+1 << " : "; cin >> data;
        dataBaru(head, data);
    }
}

void hapusData(Node*& head) {
    int hapus;
    cout << "Data yang ingin di hapus : "; cin >> hapus;
    deleteNode(head, hapus);
}

int main() {
    system("clear");
    Node* head = NULL;
    int pilihMenu;

    do{
        cout << "=== LINKED LIST MENU ===" << endl;
        cout << "[1] Menambahkan data" << endl;
        cout << "[2] Menghapus data" << endl;
        cout << "[3] Menampilkan data" << endl;
        cout << "[0] Keluar" << endl;
        cout << "Pilihan : ";
        cin >> pilihMenu;

        switch(pilihMenu){
            case 1:
            tambahData(head);
            cout << endl;
            break;
            case 2:
            hapusData(head);
            cout << endl;
            break;
            case 0:
            break;
            default:
            cout << "Tidak ada pilihan : " << pilihMenu << endl;
            cout << endl;
        }

        // if (pilihMenu == 1){
        //     tambahData(head);
        //     cout << endl;
        // } else if (pilihMenu == 2) {
        //     hapusData(head);
        //     cout << endl;
        // } else if (pilihMenu == 3) {
        //     printList(head);
        //     cout << endl;
        // } else if (pilihMenu == 0) {
        //     break;
        // } else {
        //     cout << "Tidak ada pilihan : " << pilihMenu << endl;
        // }
    } while(pilihMenu != 0);
    
    
    cout << endl;
    return 0;
}