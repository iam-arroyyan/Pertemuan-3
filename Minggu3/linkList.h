#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

typedef struct ElmList *address;

struct ElmList {
int info;
address next;
};

struct LinkList{
address first;
};

void createList(LinkList &list);
address createElm(int isi);
void insertFirst(LinkList &list,address p);
void insertLast(LinkList &list,address p);
void insertAfter(LinkList &list,address p,int cari);
void deleteFirst(LinkList &list);
void deleteLast(LinkList &list);
void deleteAfter(LinkList &list,int cari);
void view(LinkList list);

#endif // LINKLIST_H_INCLUDED
