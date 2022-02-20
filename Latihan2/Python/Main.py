#mengimport kelas Memory
from Memory import Memory
""" 
Saya Muhammad Zakaria Saputra mengerjakan Latihan 2 C1 dalam 
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin 
"""

#instansiasi
comp = Memory()

#masukan yang nantinya diset ke atribut kelas-kelas di Memory
print("Input: ")
idProduct = int(input("Id Product: "))
price = int(input("Price: "))
brand = str(input("Brand: "))
model = str(input("Model: "))
frequency = str(input("Frequency: "))
memorySize = int(input("Memory Size: "))
supportsCuda = str(input("Supports Cuda: "))

#mengeset isi atribut kelas-kelas di Memory
comp.setIdProduct(idProduct)
comp.setPrice(price)
comp.setBrand(brand)
comp.setModel(model)
comp.setFrequency(frequency)
comp.setMemorySize(memorySize)
comp.setSupportsCuda(supportsCuda)

#mencetak atribut kelas-kelas di Memory
print("\nOutput: ")
comp.printProduct()
comp.printHardware()
comp.printMemory()
