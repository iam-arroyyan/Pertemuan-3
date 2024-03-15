#include "linkList.h"
#include <iostream>
using namespace std;

int main() {
    LinkList listInt;
    address temp;
    createList(listInt);

    int menu, angka, cari;
    do{
        cout << "\033[32m";
        view(listInt);
        cout << "\033[33m";
        cout << "1. Insert First" << endl;
        cout << "2. Insert Last" << endl;
        cout << "3. Insert After" << endl;
        cout << "4. Delete First" << endl;
        cout << "5. Delete last" << endl;
        cout << "6. Delete After" << endl;
        cout << "pilih menu ";
        cin >> menu;
        if(menu == 1 || menu == 2 || menu == 3){
            cout << "Masukan angka : ";
            cin >> angka;
            temp = createElm(angka);
            if(menu == 1){
                insertFirst(listInt, temp);
            }else if(menu == 2){
                insertLast(listInt, temp);
            }else if(menu == 3){
                cout << "Input setelah angka? ";
                cin >> cari;
                insertAfter(listInt, temp, cari);
            }
        }else if(menu == 4){
                deleteFirst(listInt);
            }else if(menu==5){
                deleteLast(listInt);
            }else if(menu==6){
                cout << "Hapus angka berapa? ";
                cin >> cari;
                deleteAfter(listInt, cari);
            }
        system("cls");
    }while(menu <= 7);

    return 0;
}
