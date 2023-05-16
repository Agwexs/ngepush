#include <iostream>
using namespace std;

class UangSaku {
private:
    int jumlahUangSaku, keperluanKuliah, jajan, tabungan;
public:
    UangSaku(int jumlah) { // konstruktor
        jumlahUangSaku = jumlah;
        keperluanKuliah = 0;
        jajan = 0;
        tabungan = 0;
    }
    
    void inputPengeluaran() { // menginput pengeluaran keperluan kuliah dan jajan
        cout << "Masukkan pengeluaran untuk keperluan kuliah: ";
        cin >> keperluanKuliah;
        cout << "Masukkan pengeluaran untuk jajan: ";
        cin >> jajan;
    }
    
    void hitungTabungan(int bulan) { // menghitung tabungan dari sisa uang saku
        int totalPengeluaran = keperluanKuliah + jajan;
        int sisaUangSaku = jumlahUangSaku - totalPengeluaran;
        
        if (sisaUangSaku > 0) {
            tabungan += sisaUangSaku;
            cout << "Anda berhasil menabung sebesar Rp" << sisaUangSaku << endl;
        }
        
        if (bulan > 1) {
            inputPengeluaran();
            hitungTabungan(bulan-1);
        }
    }
    
    void tampilkanPengeluaranBulanan(int bulan) { // menampilkan pengeluaran tiap bulan
        cout << "Pengeluaran untuk bulan ke-" << bulan << endl;
        cout << "Keperluan kuliah: Rp" << keperluanKuliah << endl;
        cout << "Jajan: Rp" << jajan << endl;
    }
    
    void tampilkanPengeluaran() { // menampilkan pengeluaran dan total pengeluaran
        cout << "Pengeluaran untuk keperluan kuliah: Rp" << keperluanKuliah << endl;
        cout << "Pengeluaran untuk jajan: Rp" << jajan << endl;
        cout << "Total pengeluaran: Rp" << keperluanKuliah+jajan << endl;
    }
    
    void tampilkanTabungan() { // menampilkan tabungan saat ini
        cout << "Tabungan saat ini: Rp" << tabungan << endl;
    }
};

int main() {
    int jumlahUangSaku, bulan;
    cout << "Masukkan jumlah uang saku setiap bulannya: ";
    cin >> jumlahUangSaku;
    cout << "Masukkan jumlah bulan: ";
    cin >> bulan;
    
    UangSaku uangSaku(jumlahUangSaku);
    uangSaku.hitungTabungan(bulan);
    
    for (int i = 1; i <= bulan; i++) {
        uangSaku.tampilkanPengeluaranBulanan(i);
    }
    
    uangSaku.tampilkanPengeluaran();
    uangSaku.tampilkanTabungan();
    
    return 0;
}

