#include <bits-stdc++.h>
#include <iostream>
#include <string.h>
#include "pc.cpp"

using namespace std;

int main(){
 
    Processor processor;
    //menginput data processor
    processor.setNama("AMD Ryzen 7");
    processor.setPrice(4000000);

    disk Disk;
    //menginput data disk
    Disk.setType("SSD");
    Disk.setCapacity("1TB");
    Disk.setPrice(1000000);

    ram RAM;
    RAM.setKapasitas("16GB");
    RAM.setPrice(500000);

    PC pc;
    pc.setprocessor(processor);
    pc.setDisk(Disk);
    pc.setRam(RAM);
    pc.setTotalPrice(processor.getPrice(), Disk.getPrice(), RAM.getPrice());

    //menampilkan hasil
    cout << "Data PC" << endl;
    cout << endl;
    cout << "Nama Processor : " <<  pc.getprocessor().getNama() << endl;
    cout << "Harga          : " <<  pc.getprocessor().getPrice() << endl;
    cout << "Tipe disk      : " <<  pc.getDisk().getType() << endl;
    cout << "Kapasitas disk : " <<  pc.getDisk().getCapacity() << endl;
    cout << "Harga disk     : " <<  pc.getDisk().getPrice() << endl;
    cout << "Size RAM       : " <<  pc.getRam().getKapasitas() << endl;
    cout << "Harga RAM      : " <<  pc.getRam().getPrice() << endl;
    cout << "Total Harga    : " <<  pc.getTotalPrice() << endl;

};