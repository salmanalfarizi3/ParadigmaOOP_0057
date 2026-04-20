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
       
    }
};

int main() {
   
    Barang elektronik;
    elektronik.nama = "Laptop ASUS";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2 April 2025";

