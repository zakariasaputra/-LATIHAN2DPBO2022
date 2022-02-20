<?php
# import class Hardware
include("Hardware.php");

//kelas yang digunakan untuk mengimplementasikan Memory, turunan dari kelas Hardware
class Memory extends Hardware {
    #private attribute dari kelas Memory
    private $frequency = "";
    private $memorySize = 0;
    private $supportsCuda = "";

    #constructor
    public function __construct() {
    }

    #mengeset nilai atribut frequency
    public function setFrequency($frequency) {
        $this->frequency = $frequency;
    }

    #return nilai atribut frequency
    public function getFrequency() {
        return $this->frequency;
    }

    #mengeset nilai atribut memorySize
    public function setMemorySize($memorySize) {
        $this->memorySize = $memorySize;
    }

    #return nilai atribut memorySize
    public function getMemorySize() {
        return $this->memorySize;
    }

    #mengeset nilai atribut supportsCuda
    public function setSupportsCuda($supportsCuda) {
        $this->supportsCuda = $supportsCuda;
    }

    #return nilai atribut supportsCuda
    public function getSupportsCuda() {
        return $this->supportsCuda;
    }

    #menampilkan atribut dari Memory
    public function printMemory() {
        echo "Supports Cuda: " . $this->getSupportsCuda() . "<br/>";
        echo "Memory Size: " . $this->getMemorySize() . "<br/>";
        echo "Frequency: " . $this->getFrequency() . "<br/>";
    }
}
