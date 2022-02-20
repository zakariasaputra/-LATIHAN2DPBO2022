//kelas yang digunakan untuk mengimplementasikan Hardware, turunan dari kelas Product
class Hardware extends Product{

    //private attribute dari kelas Hardware
    private String brand;
    private String model;

    //constructor
    Hardware(){
    }

    //mengeset nilai atribut brand
    public void setBrand(String brand){
        this.brand = brand;
    }

    //return nilai atribut brand
    public String getBrand(){
        return this.brand;
    }

    //mengeset nilai atribut model
    public void setModel(String model){
        this.model = model;
    }

    //return nilai atribut model
    public String getModel(){
        return this.model;
    }

    //menampilkan atribut dari Hardware
    public void printHardware(){
        System.out.println("Brand : " + getBrand());
        System.out.println("Model : " + getModel());
    }
}
