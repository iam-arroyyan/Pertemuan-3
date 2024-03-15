#include "linkList.h"
#include <iostream>
using namespace std;

void createList(LinkList &list){
    list.first = NULL;
}

address createElm(string nim, string nama, int umur){
    address p = new ElmList;
    p->info.nim = nim;
    p->info.nama = nama;
    p->info.umur = umur;
    p->next = NULL;
    return p;
}

void insertFirst(LinkList &list, address p){
    if (list.first == NULL){
        list.first = p;
    }else{
        p->next = list.first;
        list.first = p;
    }
}

void insertLast(LinkList &list, address p){
    if (list.first == NULL){
        list.first = p;
    }else{
        address q = list.first;
        while (q->next != NULL){
        q = q->next;
        }
    q->next = p;
    }
}

void insertAfter(LinkList &list, address p, int cari){
    if (list.first == NULL){
        list.first = p;
    }else{
        address q = list.first;
        while ((q->next != NULL) && (q->info.umur != cari)){
        q = q->next;
        }
        if (q->info.umur == cari){
            p->next = q->next;
            q->next = p;
        }
    }
}

void deleteFirst(LinkList &list){
    address temp;
    if (list.first != NULL){
        temp = list.first;
        if (temp->next == NULL){
            createList(list);
        }else{
            list.first = temp->next;
            temp->next = NULL;
        }
    }
}

void deleteLast(LinkList &list){
    address temp;
    if (list.first != NULL){
        temp = list.first;
        if (temp->next == NULL){
            createList(list);
        }else{
            address q;
            while (temp->next != NULL){
                q = temp;
                temp = temp->next;
            }
            q->next = NULL;
        }
    }
}

void deleteAfter(LinkList &list, int cari){
    address temp;
    if (list.first != NULL){
        temp = list.first;
        if (temp->next == NULL){
            createList(list);
        }else{
            address q;
            while((temp->next != NULL) && (temp->info.umur != cari)){
                q = temp;
                temp = temp->next;
            }
        if (temp->info.umur == cari){
            if (temp == list.first){
                deleteFirst(list);
            }else{
                q->next = temp->next;
                temp->next = NULL;
            }
        }
        }
    }
}

void view(LinkList list){
    cout<<"List : ";
    if(list.first == NULL){
        cout<<"kosong"<<endl;
    }else{
        address temp = list.first;
        while(temp->next != NULL){
            cout<<"Nim Mahasiswa : "<<temp->info.nim<< endl;
            cout<<"Nama Mahasiswa : "<<temp->info.nama<< endl;
            cout<<"Umur Mahasiswa : "<<temp->info.umur<< endl;
            temp = temp->next;
        }
    cout<<"Nim Mahasiswa : "<<temp->info.nim<< endl;
    cout<<"Nama Mahasiswa : "<<temp->info.nama<< endl;
    cout<<"Umur Mahasiswa : "<<temp->info.umur<< endl;
    }
}
