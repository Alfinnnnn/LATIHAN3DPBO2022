<?php

    include "processor.php";
    include "disk.php";
    include "ram.php";
    include "pc.php";

    $processor_in = new processor("x", 0);
    #input data memory
    $processor_in->setNama("AMD Ryzen 7");
    $processor_in->setPrice(4000000);

    $disk_in = new disk("x", "y", 0);
    #input data disk
    $disk_in->setType("SSD");
    $disk_in->setCapacity("1TB");
    $disk_in->setPrice(1000000);

    $ram_in = new ram("x", 0);
    #input data Capacity
    $ram_in->setCapacity("16GB");
    $ram_in->setPrice(500000);

    $totalPrice = (int)$processor_in->getPrice() + (int)$disk_in->getPrice() + (int)$ram_in->getPrice();
    $pc_in = new pc($processor_in, $disk_in, $ram_in, $totalPrice);

    echo("Data PC"). "<br/>";

    echo "Nama Processor : " . $pc_in->getProcessor()->getNama() . "<br/>";
    echo "Harga          : " . $pc_in->getProcessor()->getPrice() . "<br/>";
    echo "Tipe disk      : " . $pc_in->getDisk()->gettype() . "<br/>";
    echo "Kapasitas disk : " . $pc_in->getDisk()->getCapacity() . "<br/>";
    echo "Harga disk     : " . $pc_in->getDisk()->getPrice() . "<br/>";
    echo "Size RAM       : " . $pc_in->getRam()->getPrice() . "<br/>";
    echo "Harga RAM      : " . $pc_in->getRam()->getPrice() . "<br/>";
    echo "Harga Total    : " . $pc_in->getTotalPrice() . "<br/>";


?>