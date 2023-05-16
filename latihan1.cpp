#include <iostream>
using namespace std;

class tokoarya{
	public:
		void hitung(int total_barang, int total_harga);
		void menu();
	private:
		int a;
		string pilih;
		int total;
		int total_barang;
}hit,men;

void tokoarya::menu(){
	cout << "Selamat datang di toko ZERTEC" << endl;
    cout << "1. Speaker : Rp. 25.000" << endl;
    cout << "2. Headphone Rp. 75.000" << endl;

    // Inisialisasi array count
    int count[2] = {0};

    bool done = false;
    while (!done) {
        cout << "Pilih barang (0 untuk selesai): ";
        cin >> a;
        if (a == 0) {
            done = true;
        } else if (a == 1) {
            count[0]++;
        } else if (a == 2) {
            count[1]++;
        } else {
            cout << "Barang tidak valid." << endl;
        }
    }

    // Menghitung total harga
    total = count[0] * 25000 + count[1] * 75000;
    // Menghitung total barang
    int total_barang = count[0] + count[1];

    // Memanggil fungsi hitung()
    hit.hitung(total_barang, total);
}

void tokoarya::hitung(int total_barang, int total_harga){
    cout << "Total Barang: " << total_barang << endl;
    cout << "Total Harga: " << total_harga << endl;
}

int main(){
	men.menu();
	hit.hitung(total_barang, total);
}

