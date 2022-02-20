#mengimport kelas Hardware
from Hardware import Hardware

#kelas yang digunakan untuk mengimplementasikan Memory, turunan dari kelas Hardware
class Memory(Hardware):
    def __init__(self):
        #constructor
        self.frequency = ""
        self.memorySize = 0
        self.supportsCuda = ""

    def setFrequency(self, frequency):
        #mengeset nilai atribut frequency
        self.frequency = frequency

    def getFrequency(self):
        #return nilai atribut frequency
        return self.frequency

    def setMemorySize(self, memorySize):
        #mengeset nilai atribut memorySize
        self.memorySize = memorySize

    def getMemorySize(self):
        #return nilai atribut memorySize
        return self.memorySize

    def setSupportsCuda(self, supportsCuda):
        #mengeset nilai atribut supportsCuda
        self.supportsCuda = supportsCuda

    def getSupportsCuda(self):
        #return nilai atribut supportsCuda
        return self.supportsCuda

    def printMemory(self):
        #menampilkan atribut dari Memory
        print("Frequency: " + self.getFrequency())
        print("Memory Size: " + str(self.getMemorySize()))
        print("Supports Cuda: " + self.getSupportsCuda())
