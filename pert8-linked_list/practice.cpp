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

int main() {
    system("clear");
    Node* head = NULL;

    dataBaru(head, 3);
    dataBaru(head, 9);
    dataBaru(head, 12);

    printList(head);

    cout << endl;
    int hapus;
    cout << "Masukan data yang ingin di hapus : "; cin >> hapus;

    deleteNode(head, hapus);

    printList(head);
    
    cout << endl;
    return 0;
}