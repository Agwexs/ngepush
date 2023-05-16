#include <iostream>
using namespace std;

class Andi {
    private:
        float uangSaku;
        float keperluanKuliah;
        float jajan;
        float tabungan;
    
    public:
        // Konstruktor
        Andi(float uangSaku) {
            this->uangSaku = uangSaku;
            keperluanKuliah = 0;
            jajan = 0;
            tabungan = 0;
        }
        
        // Getter
        float getUangSaku() {
            return uangSaku;
        }
        
        float getKeperluanKuliah() {
            return keperluanKuliah;
        }
        
        float getJajan() {
            return jajan;
        }
        
        float getTabungan() {
            return tabungan;
        }
        
        // Iteratif
        void hitungPengeluaranIteratif(int bulan) {
            float totalPengeluaran = 0;
            
            for (int i = 1; i <= bulan; i++) {
                float pengeluaranBulan = 0;
                cout << "Bulan ke-" << i << endl;
                
                cout << "Masukkan pengeluaran untuk keperluan kuliah: ";
                cin >> pengeluaranBulan;
                keperluanKuliah += pengeluaranBulan;
                
                cout << "Masukkan pengeluaran untuk jajan: ";
                cin >> pengeluaranBulan;
                jajan += pengeluaranBulan;
                
                totalPengeluaran += keperluanKuliah + jajan;
                cout << "Total pengeluaran bulan ini: " << keperluanKuliah + jajan << endl;
                
                float sisaUangSaku = uangSaku - (keperluanKuliah + jajan);
                if (sisaUangSaku > 0) {
                    tabungan += sisaUangSaku;
                    cout << "Anda berhasil menabung sebesar " << sisaUangSaku << endl;
                } else {
                    cout << "Maaf, Anda tidak bisa menabung bulan ini." << endl;
                }
                
                cout << endl;
            }
            
            cout << "Total pengeluaran selama " << bulan << " bulan adalah " << totalPengeluaran << endl;
        }
        
        // Rekursif
        void hitungPengeluaranRekursif(int bulan, int i = 1, float totalPengeluaran = 0) {
            if (i <= bulan) {
                float pengeluaranBulan = 0;
                cout << "Bulan ke-" << i << endl;
                
                cout << "Masukkan pengeluaran untuk keperluan kuliah: ";
                cin >> pengeluaranBulan;
                keperluanKuliah += pengeluaranBulan;
                
                cout << "Masukkan pengeluaran untuk jajan: ";
                cin >> pengeluaranBulan;
                jajan += pengeluaranBulan;
                
                totalPengeluaran += keperluanKuliah + jajan;
                cout << "Total pengeluaran bulan ini

