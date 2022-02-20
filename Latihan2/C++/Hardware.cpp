#include <string>
#include <iostream>
using namespace std;
//import class Product
#include "Product.cpp"

//kelas yang digunakan untuk mengimplementasikan Hardware, turunan dari kelas Product
class Hardware : public Product {
private:
    //private attribute dari kelas Hardware
    string brand;
    string model;

public:
    //constructor
    Hardware() {}

    //mengeset nilai atribut brand
    void setBrand(string brand) {
        this->brand = brand;
    }

    //return nilai atribut brand
    string getBrand() {
        return this->brand;
    }

    //mengeset nilai atribut model
    void setModel(string model) {
        this->model = model;
    }

    //return nilai atribut model
    string getModel() {
        return this->model;
    }

    //menampilkan atribut dari Hardware
    void printHardware() {
        cout << "Brand : " << this->getBrand() << endl;
        cout << "Model : " << this->getModel() << endl;
    }

    //destructor
    ~Hardware() {}
};