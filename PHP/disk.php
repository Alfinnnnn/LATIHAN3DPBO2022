<?php

    class disk
    {
        private $type = "";
        private $capacity = "";
        private $price = 0;

        //konstruktor
        public function __construct($type = "", $capacity = "", $price = 0){
            $this->type = $type;
            $this->capacity = $capacity;
            $this->price = $price;
        }
         #prosedur setter data
        public function setType($type){
            $this->type = $type;
        }

        public function setCapacity($capacity){
            $this->capacity = $capacity;
        }

        public function setPrice($price){
            $this->price = $price;
        }

        #prosedur getter data
        public function getType(){
            return $this->type;
        }

        public function getCapacity(){
            return $this->capacity;
        }

        public function getPrice(){
            return $this->price;
        }

        public function __destruct(){ }
    }
?>