<?php

    class ram
    {
        private $capacity = "";
        private $price = 0;

        #konstruktor
        public function __construct($capacity = "", $price = 0){
            $this->capacity = $capacity;
            $this->price = $price;
        }

        #prosedur setter
        public function setCapacity($capacity){
            $this->capacity = $capacity;
        }

        public function setPrice($price){
            $this->price = $price;
        }

        #prosedur getter
        public function getCapacity(){
            return $this->capacity;
        }

        public function getPrice(){
            return $this->price;
        }

        public function __destruct(){ }

    }
?>