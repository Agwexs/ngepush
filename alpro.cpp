#include <iostream>
using namespace std;

int main() {
  int n = 8; // jumlah bintang pada baris pertama
  for (int i = 1; i <= 7; i++) { // melakukan perulangan untuk setiap baris
    for (int j = 1; j <= n; j++) { // melakukan perulangan untuk setiap bintang pada baris i
      cout << "*";
    }
    n--; // mengurangi jumlah bintang pada baris berikutnya
    cout << endl; // membuat baris baru setelah setiap baris selesai
  }
  cout<<endl;
  n = 1; // jumlah bintang pada baris pertama
  for (int i = 1; i <= 8; i++) { // melakukan perulangan untuk setiap baris
    for (int j = 1; j <= n; j++) { // melakukan perulangan untuk setiap bintang pada baris i
      cout << "*";
    }
    n++; // menambah jumlah bintang pada baris berikutnya
    cout << endl; // membuat baris baru setelah setiap baris selesai
  }
  return 0;
}

