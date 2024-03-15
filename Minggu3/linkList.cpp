#include "linkList.h"
#include <iostream>
using namespace std;

void createList(LinkList &list){
    list.first = NULL;
}

address createElm(int isi){
    address p = new ElmList;
    p->info = isi;
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
        while ((q->next != NULL) && (q->info != cari)){
        q = q->next;
        }
        if (q->info == cari){
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
            while((temp->next != NULL) && (temp->info != cari)){
                q = temp;
                temp = temp->next;
            }
        if (temp->info == cari){
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
            cout<<temp->info<<" ";
            temp = temp->next;
        }
    cout<<temp->info<<endl;
    }
}
