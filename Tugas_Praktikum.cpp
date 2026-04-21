#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void dataBarang(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "Handpone";
    elektronik.jumlah = 55;
    elektronik.kategori = "Kecil";
    elektronik.tanggalProduksi = "16-04-2026";

    Barang nonElektronik;
    nonElektronik.nama = "Cangkul";
    nonElektronik.jumlah = 50;
    nonElektronik.kategori = "Perkakas";
    nonElektronik.tanggalProduksi = "15-11-2025";

    elektronik.dataBarang();
    nonElektronik.dataBarang();
}