/*
Saya Muhammad Zakaria Saputra 2007993 mengerjakan Latihan 2 C1 dalam
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/
#include <bits/stdc++.h>
using namespace std;
//mengimport kelas Memory
#include "Memory.cpp"

int main() {
    //instansiasi
    Memory comp[100];
    int i = 0, check = 1;

    //selama check bernilai true, akan dilakukan perulangan untuk meminta masukan
    while (check == 1) {
        //instansiasi variabel masukan
        string brand, model, frequency, supportsCuda;
        int price, idProduct, memorySize;

        //meminta masukan untuk setiap atribut
        cout << "Input: " << endl;
        cout << "Id Product: ";
        cin >> idProduct;
        cout << "Price: ";
        cin >> price;
        cout << "Brand: ";
        cin >> brand;
        cout << "Model: ";
        cin >> model;
        cout << "Frequency: ";
        cin >> frequency;
        cout << "Memory Size: ";
        cin >> memorySize;
        cout << "Supports Cuda: ";
        cin >> supportsCuda;

        //mengeset isi atribut kelas-kelas di Memory
        comp[i].setIdProduct(idProduct);
        comp[i].setPrice(price);
        comp[i].setBrand(brand);
        comp[i].setModel(model);
        comp[i].setFrequency(frequency);
        comp[i].setMemorySize(memorySize);
        comp[i].setSupportsCuda(supportsCuda);

        //deklarasi variabel check2 untuk melakukan pengecekan apakah akan lanjut input atau tidak
        char check2;
        cout << "Lanjut memasukan data (Y/N): ";
        cin >> check2;
        if (check2 == 'y' || check2 == 'Y') {
            check = 1;
        }
        else {
            check = 0;
        }
        i++;
    }

    //mencetak atribut kelas-kelas di Memory
    cout << "\n";
    int j;
    for (j = 0; j < i; j++) {
        cout << "Output ke-" << j + 1 << endl;
        comp[j].printProduct();
        comp[j].printHardware();
        comp[j].printMemory();
        cout << endl;
    }
    return 0;
}
