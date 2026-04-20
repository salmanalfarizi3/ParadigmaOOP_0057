#include <iostream>
using namespace std;



class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

   
    void tampilkanInfo() {
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
       cout << "________________________" << endl;
    }
};

int main() {
   
    Barang elektronik;
    elektronik.nama = "Laptop ASUS";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2 April 2025";


    Barang nonElektronik;
    nonElektronik.nama = "Meja Belajar";
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = "Furnitur";
    nonElektronik.tanggalProduksi = "2 maret 2025";

    
    elektronik.tampilkanInfo();
    nonElektronik.tampilkanInfo();

  
}