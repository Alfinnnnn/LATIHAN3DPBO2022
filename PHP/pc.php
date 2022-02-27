<?php

    class pc
    {
        private $processor;
        private $disk;
        private $ram;
        private $totalPrice = 0;
        
        #konstruktor
        public function __construct($processor, $disk, $ram, $totalPrice = 0){
            $this->processor = $processor;
            $this->disk = $disk;
            $this->ram = $ram;
            $this->totalPrice = $totalPrice;
        }

        #prosedur setter
        public function setProcessor($processor){
          $this->processor = $processor;  
        }

        public function setDisk($disk){
            $this->disk = $disk;
        }

        public function setRam($ram){
            $this->ram = $ram;
        }

        public function totalPrice($totalPrice){
            $this->totalPrice = $totalPrice;
        }

        #prosedur getter
        public function getProcessor(){
            return $this->processor;
        }

        public function getDisk(){
            return $this->disk;
        }

        public function getRam(){
            return $this->ram;
        }

        public function getTotalPrice(){
            return $this->totalPrice;
        }

        public function __destruct(){ }


    }
?>