#include <string>
#include <iostream>
using namespace std;
//import class Hardware
#include "Hardware.cpp"

//kelas yang digunakan untuk mengimplementasikan Memory, turunan dari kelas Hardware
class Memory : public Hardware {
private:
    //private attribute dari kelas Memory
    string frequency;
    int memorySize;
    string supportsCuda;

public:
    //constructor
    Memory() {}

    //mengeset nilai atribut frequency
    void setFrequency(string frequency) {
        this->frequency = frequency;
    }

    //return nilai atribut frequency
    string getFrequency() {
        return this->frequency;
    }

    //mengeset nilai atribut memorySize
    void setMemorySize(int memorySize) {
        this->memorySize = memorySize;
    }

    //return nilai atribut memorySize
    int getMemorySize() {
        return this->memorySize;
    }

    //mengeset nilai atribut supportsCuda
    void setSupportsCuda(string supportsCuda) {
        this->supportsCuda = supportsCuda;
    }

    //returm nilai atribut supportsCuda
    string getSupportsCuda() {
        return this->supportsCuda;
    }

    //menampilkan atribut dari Memory
    void printMemory() {
        cout << "Frequency : " << this->getFrequency() << endl;
        cout << "Memory Size : " << this->getMemorySize() << endl;
        cout << "Support Cuda : " << this->getSupportsCuda() << endl;
    }

    //destructor
    ~Memory() {}
};