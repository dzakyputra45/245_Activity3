#include <iostream>

using namespace std;

int main() {
    float nilaiMatematika, nilaiFisika, rataRata;

    // Meminta pengguna untuk memasukkan nilai Matematika dan Fisika
    cout << "Masukkan nilai Matematika: ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai Fisika: ";
    cin >> nilaiFisika;

    // Menghitung rata-rata
    rataRata = (nilaiMatematika + nilaiFisika) / 2;

    // Menentukan kelulusan
    if (nilaiMatematika > 70 && rataRata > 60) {
        cout << "Peserta dinyatakan Lulus" << endl;
    }
    else {
        cout << "Peserta tidak dinyatakan Lulus" << endl;
    }

    return 0;
}
