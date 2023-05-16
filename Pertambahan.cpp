#include <iostream>
#include <conio.h>
using namespace std;

int hitungKpk(int a, int b, int c) {
    if (c % a == 0) {
        return c;
    }
    return hitungKpk(a, b, c + b);
}

int main() {
    system("cls");
    int a, b, p;
    cout << "Masukan Pilihan anda ?\n";
    cout << "1. Menentukan KPK\n";
    cout << "2. Menentukan FPB\n";
    cout << "3. Exit\n";
    cout << ">> ";
    cin >> p;
    switch (p) {
        case 1:
            cout << "Menghitung KPK\n";
            cout << "Masukan Bilangan Pertama : \n";
            cin >> a;
            cout << "Masukan Bilangan Kedua : \n";
            cin >> b;
            cout << "Bilangan pertama :" << a << endl;
            cout << "Bilangan kedua :" << b << endl;
            cout << "KPK :" << hitungKpk(a, b, b) << endl;
            
            break;
        case 2:
        	cout << "Bukan NIM GANJIL";
        case 3:
            cout << "Exit Now !!!\n";
            break;
        default:
            cout << "Error !!!";
    }
    getch();
    return 0;
}
