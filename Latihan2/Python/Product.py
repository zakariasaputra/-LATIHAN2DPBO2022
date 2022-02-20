#kelas yang digunakan untuk mengimplementasikan Product
class Product:
    def __init__(self):
        #constructor
        self.price = 0
        self.idProduct = 0

    def setPrice(self, price):
        #mengeset nilai atribut price
        self.price = price

    def getPrice(self):
        #return nilai atribut price
        return self.price

    def setIdProduct(self, idProduct):
        #mengeset nilai atribut idProduct
        self.idProduct = idProduct

    def getIdProduct(self):
        #return nilai atribut idProduct
        return self.idProduct

    def printProduct(self):
        #menampilkan atribut dari Product
        print("Id Product: " + str(self.getIdProduct()))
        print("Price: " + str(self.getPrice()))
