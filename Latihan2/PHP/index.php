<?php
/* 
Saya Muhammad Zakaria Saputra 2007993 mengerjakan Latihan 2 C1 dalam 
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin 
*/
#mengimport kelas Memory
include("Memory.php");

#instansiasi
$comp = new Memory();

#mengeset isi atribut dari kelas-kelas di Memory
$comp->setIdProduct(1);
$comp->setPrice(7600000);
$comp->setBrand("Lenovo");
$comp->setModel("Ideapad Flex");
$comp->setFrequency("2.40Ghz");
$comp->setMemorySize(8);
$comp->setSupportsCuda("GTX");

#mencetak atribut kelas-kelas di Memory
$comp->printProduct();
$comp->printHardware();
$comp->printMemory();
