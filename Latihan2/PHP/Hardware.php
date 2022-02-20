<?php
#import class Product
include("Product.php");

//kelas yang digunakan untuk mengimplementasikan Hardware, turunan dari kelas Product
class Hardware extends Product {
    #private attribute dari kelas Hardware
    private $brand = "";
    private $model = "";

    #constructor
    public function __construct() {
    }

    #mengeset nilai atribut brand
    public function setBrand($brand) {
        $this->brand = $brand;
    }

    #return nilai atribut brand
    public function getBrand() {
        return $this->brand;
    }

    #mengeset nilai atribut model
    public function setModel($model) {
        $this->model = $model;
    }

    #return nilai atribut model
    public function getModel() {
        return $this->model;
    }

    #menampilkan atribut dari Hardware
    public function printHardware() {
        echo "Model: " . $this->getModel() . "<br/>";
        echo "Brand: " . $this->getBrand() . "<br/>";
    }
}
