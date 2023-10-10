#include <iostream>
#include <string>
using namespace std;
/// \brief Jumlah maksimal mahasiswa yang dapat ditampung dalam array.
const int MAX_MAHASISWA = 100;
/// \brief Array untuk menyimpan NIM mahasiswa.
int NIM[MAX_MAHASISWA];
/// \brief Array untuk menyimpan nama mahasiswa.
string nama[MAX_MAHASISWA];
/// \brief Array untuk menyimpan tahun masuk mahasiswa.
int tahunMasuk[MAX_MAHASISWA];
/// \brief Jumlah mahasiswa yang telah didaftarkan.
int jumlahMahasiswa = 0;

/// \brief Menambahkan data mahasiswa ke dalam array.
void tambahMahasiswa() {
    jumlahMahasiswa++;
    cout << "Nim        : ";
    cin >> NIM[jumlahMahasiswa];
    cout << "Nama       : ";
    cin.ignore();
    getline(cin, nama[jumlahMahasiswa]);
    cout << "Tahun Masuk: ";
    cin >> tahunMasuk[jumlahMahasiswa];
}

/// \brief Menampilkan semua data mahasiswa.
void tampilkanSemuaMahasiswa() {
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        cout << "Nim        : " << NIM[i] << endl;
        cout << "Nama       : " << nama[i] << endl;
        cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
        cout << endl;
    }
}

/// \brief Mencari mahasiswa berdasarkan NIM.
void cariMahasiswaByNIM() {
    int nim;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nim;
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        if (NIM[i] == nim) {
            cout << "Nim        : " << NIM[i] << endl;
            cout << "Nama       : " << nama[i] << endl;
            cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
            return;
        }
    }
    cout << "NIM yang Anda masukkan tidak ditemukan." << endl;
}


int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            cariMahasiswaByNIM();
            break;
        case 4:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 4);
    return 0;
}
