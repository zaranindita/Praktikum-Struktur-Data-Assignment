





#include <iostream>

int main() {
    int angka[] = {1, 3, 1, 2}; 
    const int panjang = sizeof(angka) / sizeof(angka[0]);
    bool cariDuplikat = false;
    bool cari[5] = {false}; 

    std::cout << "angka yang duplikat: ";

    for (int i = 0; i < panjang; ++i) {
        if (cari[angka[i]]) {
            cariDuplikat = true;
            std::cout << angka[i] << " ";
        } else {
            cari[angka[i]] = true;
        }
    }

    if (!cariDuplikat) {
        std::cout << "Tidak ada duplikat.";
    }

    std::cout << std::endl;

    return 0;
}
