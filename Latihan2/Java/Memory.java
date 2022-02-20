//kelas yang digunakan untuk mengimplementasikan Memory, turunan dari kelas Hardware
class Memory extends Hardware{

    //private attribute dari kelas Memory
    private String frequency;
    private int memorySize;
    private String supportsCuda;

    //constructor
    Memory() {
    }

    //mengeset nilai atribut frequency
    public void setFrequency(String frequency){
        this.frequency = frequency;
    }

    //return nilai atribut frequency
    public String getFrequency(){
        return this.frequency;
    }

    //mengeset nilai atribut memorySize
    public void setMemorySize(int memorySize){
        this.memorySize = memorySize;
    }

    //return nilai atribut memorySize
    public int getMemorySize(){
        return this.memorySize;
    }

    // mengeset nilai atribut supportsCuda
    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }

    // return nilai atribut supportsCuda
    public String getSupportsCuda() {
        return this.supportsCuda;
    }

    // menampilkan atribut dari Memory
    public void printMemory() {
        System.out.println("Frequency : " + getFrequency());
        System.out.println("Memory Size : " + getMemorySize());
        System.out.println("Support Cuda : " + getSupportsCuda());
    }
}
