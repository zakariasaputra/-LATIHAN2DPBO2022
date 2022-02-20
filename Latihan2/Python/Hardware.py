#mengimport kelas Product
from Product import Product

#kelas yang digunakan untuk mengimplementasikan Hardware, turunan dari kelas Product
class Hardware(Product):
    def __init__(self):
        #constructor
        self.brand = ""
        self.model = ""

    def setBrand(self, brand):
        #mengeset nilai atribut brand
        self.brand = brand

    def getBrand(self):
        #return nilai atribut brand
        return self.brand

    def setModel(self, model):
        #mengeset nilai atribut model
        self.model = model

    def getModel(self):
        #return nilai atribut model
        return self.model

    def printHardware(self):
        #menampilkan atribut dari Hardware
        print("Brand: " + self.getBrand())
        print("Model: " + self.getModel())
