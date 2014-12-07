<?php

class problem4
{
   /**
     * @param $max_number
     * @return
     * */
    public function findLargestPalindromeNumber($max_number)
    {
        for ($i = $max_number; $i>=10000; $i--) {
            if ($this->isPalindrome($this->splitNumber($i))) {
                return $i;
            }
        }
    }

    public function splitNumber($number)
    {
        $new_number = [];
        $count = 0;

        while ($number !== 0) {
            $new_number[$count] = $number % 10;
            $number = intval($number/10);
            $count++;
        }

        return $new_number;
    }

    /**
     * @param array()
     * @return boolean
     * */
    public function isPalindrome(array $number)
    {
        $length_number = count($number);
        $j = $length_number - 1;

        for ($i = 0; $i < $length_number/2; $i++) {
            if ($number[$i] == $number[$j]) {
                $j--;
            } else {
                return false;
            }
        }
        return true;
    }
}

$obj = new problem4();
$answer = $obj->findLargestPalindromeNumber(998001);
var_dump($answer);
