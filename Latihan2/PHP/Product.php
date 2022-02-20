<?php
//kelas yang digunakan untuk mengimplementasikan Product
class Product {
    #private attribute dari kelas Product
    private $price = 0;
    private $idProduct = 0;

    #constructor
    public function __construct() {
    }

    #mengeset nilai atribut price
    public function setPrice($price) {
        $this->price = $price;
    }

    #return nilai atribut price
    public function getPrice() {
        return $this->price;
    }

    #mengeset nilai atribut idProduct
    public function setIdProduct($idProduct) {
        $this->idProduct = $idProduct;
    }

    #return nilai atribut idProduct
    public function getIdProduct() {
        return $this->idProduct;
    }

    #menampilkan atribut dari Product
    public function printProduct() {
        echo "Id Product: " . $this->getIdProduct() . "<br/>";
        echo "Price: " . $this->getPrice() . "<br/>";
    }
}
