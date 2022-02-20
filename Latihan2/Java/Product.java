//kelas yang digunakan untuk mengimplementasikan Product
class Product{
    //private attribute dari kelas Product
    private int price;
    private int idProduct;

    //constructor
    Product(){
    }

    //mengeset nilai atribut price
    public void setPrice(int price){
        this.price = price;
    }

    //return nilai atribut price
    public int getPrice(){
        return this.price;
    }

    //mengeset nilai atribut idProduct
    public void setIdProduct(int idProduct){
        this.idProduct = idProduct;
    }

    //return nilai atribut idProduct
    public int getIdProduct(){
        return this.idProduct;
    }

    //menampilkan atribut dari Product
    public void printProduct(){
        System.out.println("Id Product : " + getIdProduct());
        System.out.println("Price : " + getPrice());
    }
}
