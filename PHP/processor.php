<?php

    class processor
    {
        private $nama = "";
        private $price = 0;

        #konstruktor
        public function __construct($nama = "", $price = 0){
            $this->nama = $nama;
            $this->price = $price;
        }

        #Prosedur setter data
        public function setNama($nama){
            $this->nama = $nama;
        }

        public function setPrice($price){
            $this->price = $price;
        }

        #prosedur getter data
        public function getNama(){
            return $this->nama;
        }

        public function getPrice(){
            return $this->price;
        }

        public function __destruct(){ }

    }

?>