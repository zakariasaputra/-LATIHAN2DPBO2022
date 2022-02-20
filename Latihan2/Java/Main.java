/*
Saya Muhammad Zakaria Saputra mengerjakan Latihan 2 C1 dalam 
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/
// mengimport kelas utility
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        //variabel untuk inputan
        Scanner sc = new Scanner(System.in);
        //instansiasi
        Memory comp = new Memory();
        //variabel untuk inputan
        String brand = "", model = "", frequency = "", supportsCuda = "";
        int price = 0, idProduct = 0, memorySize = 0;

        //input untuk setiap atribut
        System.out.println("Input: ");
        try{
            System.out.print("Id Product: ");
            idProduct = sc.nextInt();
        } catch (Exception e){
        }
        try{
            System.out.print("Price: ");
            price = sc.nextInt();
        } catch (Exception e){
        }
        try {
            System.out.print("Brand: ");
            brand = sc.next();
        } catch (Exception e){
        }
        try {
            System.out.print("Model: ");
            model = sc.next();
        } catch (Exception e){
        }
        try {
            System.out.print("Frequency: ");
            frequency = sc.next();
        } catch (Exception e){
        }
        try {
            System.out.print("Memory Size: ");
            memorySize = sc.nextInt();
        } catch (Exception e){
        }
        try {
            System.out.print("Supports Cuda: ");
            supportsCuda = sc.next();
        } catch (Exception e){
        }

        //mengeset isi atribut dari kelas-kelas pada memory
        comp.setIdProduct(idProduct);
        comp.setPrice(price);
        comp.setBrand(brand);
        comp.setModel(model);
        comp.setFrequency(frequency);
        comp.setMemorySize(memorySize);
        comp.setSupportsCuda(supportsCuda);

        //mencetak atribut kelas-kelas di Memory
        System.out.println("\nOutput: ");
        comp.printProduct();
        comp.printHardware();
        comp.printMemory();
    }
}