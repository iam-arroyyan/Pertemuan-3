#include "linkList.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    LinkList listInt;
    address temp;
    createList(listInt);

    int menu, umur, cari;
    string nama, nim;
    do{
        cout << "1. Insert First" << endl;
        cout << "2. Insert Last" << endl;
        cout << "3. Insert After" << endl;
        cout << "4. Delete First" << endl;
        cout << "5. Delete last" << endl;
        cout << "6. Delete After" << endl;
        cout << "7. View Mahasiswa" << endl;
        cout << "pilih menu ";
        cin >> menu;
        if(menu == 1 || menu == 2 || menu == 3){
            cout << "Masukan Nim : ";
            cin >> nim;
            cout << "Masukan Nama : ";
            cin >> nama;
            cout << "Masukan Umur : ";
            cin >> umur;
            temp = createElm(nim, nama, umur);
            if(menu == 1){
                insertFirst(listInt, temp);
            }else if(menu == 2){
                insertLast(listInt, temp);
            }else if(menu == 3){
                cout << "Input setelah umur? ";
                cin >> cari;
                insertAfter(listInt, temp, cari);
            }
        }else if(menu == 4){
                deleteFirst(listInt);
            }else if(menu==5){
                deleteLast(listInt);
            }else if(menu==6){
                cout << "Hapus umur berapa? ";
                cin >> cari;
                deleteAfter(listInt, cari);
            }else if(menu==7){
                view(listInt);
            }
    }while(menu <= 8);

    return 0;
}
