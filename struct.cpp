#include <iostream>
#include <string>
using namespace std;

int main () {
    struct almt_type {
        string jalan;
        string nomor;
        string kelurahan;
        string kecamatan;
        string kota;
    };

    struct mhsw_type {
        int nim;
        string prodi;
        string nama;
        almt_type alamat;
        string tgl_lahir;

        void isi_data() {
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << "Masukkan Program Studi: ";
            cin >> prodi;
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan Jalan: ";
            cin >> alamat.jalan;
            cout << "Masukkan Nomor: ";
            cin >> alamat.nomor;
            cout << "Masukkan Kelurahan: ";
            cin >> alamat.kelurahan;
            cout << "Masukkan Kecamatan: ";
            cin >> alamat.kecamatan;
            cout << "Masukkan Kota: ";
            cin >> alamat.kota;
            cout << "Masukkan Tanggal Lahir: ";
            cin >> tgl_lahir;
        }

        void ambil_data() {
            cout << "NIM: " << nim << endl;
            cout << "Program Studi: " << prodi << endl;
            cout << "Nama: " << nama << endl;
            cout << "Alamat: " << endl;
            cout << "Jalan: " << alamat.jalan << endl;
            cout << "Nomor: " << alamat.nomor << endl;
            cout << "Kelurahan: " << alamat.kelurahan << endl;
            cout << "Kecamatan: " << alamat.kecamatan << endl;
            cout << "Kota: " << alamat.kota << endl;
            cout << "Tanggal Lahir: " << tgl_lahir << endl;
        }
    };
}

using namespace std;

int main() {
    const int jumlah_mahasiswa = 100;
    mhsw_type mahasiswa[jumlah_mahasiswa];

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
        mahasiswa[i].isi_data();
    }

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << "Data mahasiswa ke-" << i+1 << endl;
        mahasiswa[i].ambil_data();
        cout << endl;
    }

    return 0;
}