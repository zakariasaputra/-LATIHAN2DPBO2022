#include <string>
#include <iostream>
using namespace std;

//kelas yang digunakan untuk mengimplementasikan Product
class Product {
private:
    //private attribute dari kelas Product
    int price;
    int idProduct;

public:
    //constructor
    Product() {}

    //mengeset nilai atribut price
    void setPrice(int price) {
        this->price = price;
    }

    //return nilai atribut price
    int getPrice() {
        return this->price;
    }

    //mengeset nilai atribut idProduct
    void setIdProduct(int idProduct) {
        this->idProduct = idProduct;
    }

    //return nilai atribut idProduct
    int getIdProduct() {
        return this->idProduct;
    }

    //menampilkan atribut dari Product
    void printProduct() {
        cout << "Id Product : " << this->getIdProduct() << endl;
        cout << "Price : " << this->getPrice() << endl;
    }

    //destructor
    ~Product() {}
};