#include <iostream>
#include <iomanip>

using namespace std;

class RumahMakan {
    private:
        int pilihan;
        int jarak;
        string menu;
        int harga;
        int ongkir;
        int total;
        
    public:
        void inputMenu() {
            cout << "Daftar Menu: " << endl;
            cout << "1. Ayam Geprek : Rp21.000" << endl;
            cout << "2. Ayam Goreng : Rp17.000" << endl;
            cout << "3. Udang Goreng : Rp19.000" << endl;
            cout << "4. Cumi Goreng  : Rp20.000" << endl;
            cout << "5. Ayam Bakar   : Rp25.000" << endl;
            cout << "Pilih menu [1-5]: ";
            cin >> pilihan;
            
            switch(pilihan) {
                case 1:
                    menu = "Ayam Geprek";
                    harga = 21000;
                    break;
                case 2:
                    menu = "Ayam Goreng";
                    harga = 17000;
                    break;
                case 3:
                    menu = "Udang Goreng";
                    harga = 19000;
                    break;
                case 4:
                    menu = "Cumi Goreng";
                    harga = 20000;
                    break;
                case 5:
                    menu = "Ayam Bakar";
                    harga = 25000;
                    break;
                default:
                    menu = "Menu tidak tersedia";
                    harga = 0;
                    break;
            }
        }
        
        void inputJarak() {
            cout << "Jarak rumah (KM): ";
            cin >> jarak;
            
            if (jarak < 3) {
                ongkir = 15000;
            } else {
                ongkir = 25000;
            }
        }
        
        void hitungTotal() {
            total = harga + ongkir;
        }
        
        void printSlip() {
            cout << "\n===== Slip Pembayaran =====" << endl;
            cout << "Menu            : " << menu << endl;
            cout << "Harga           : Rp" << harga << endl;
            cout << "Jarak           : " << jarak << " KM" << endl;
            cout << "Biaya Ongkir    : Rp" << ongkir << endl;
            cout << "Total           : Rp" << total << endl;
            cout << "===========================" << endl;
        }
};

int main() {
    RumahMakan rm;
    rm.inputMenu();
    rm.inputJarak();
    rm.hitungTotal();
    rm.printSlip();
    
    return 0;
}

