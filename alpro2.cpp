#include <iostream>

using namespace std;

class Hitung {
public:
  int proses();
  void input();
private:
  int n;
  float rumus, jumlah, total;
}deret;

void Hitung::input() {
  cin >> n;
  cout << endl;
}

int Hitung::proses() {
  jumlah = 0;
  total = 0;
  rumus = -1;
  for (int i = 1; i <= n; i++) {
    rumus = (rumus * (-1));
    total = rumus / i;
    jumlah += total;
    if (i == 1) {
      cout << "(" << total << ")";
    } 
    else if(i > 1){
      cout << "+(" << total << ")";
    }
  }
  cout << endl << endl << "hasil penjumlahan deret = " << jumlah;
  return jumlah;
}

int main() {
  cout << "Program sederhana menghitung jumlah dari rumus 1 - (1/2) + (1/3) - (1/4) + ... + (1/n)" << endl << endl;
  cout << "Tentukan nilai n : ";
  deret.input();
  deret.proses();
  return 0;
}

