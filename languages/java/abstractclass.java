/*
abstract function  (abstract keyword before class)
then calculate cost per unit multiple of area

define area() () 
rectangle , squre , triangle
per unit cost 
*/

import java.util.*;

abstract class shape {
    abstract double getarea();
};

class rectangle extends shape {
    public double len, br;

    rectangle(double l, double b) {
        this.len = l;
        this.br = b;
    }

    double getarea() {
        return len * br;
    }
};

class triangle extends shape {
    public double len, br;

    triangle(double l, double b) {
        this.len = l;
        this.br = b;
    }

    double getarea() {
        return (1 / 2 * len * br);
    }
};

class square extends shape {
    public double s;

    square(double l) {
        this.s = l;
    }

    double getarea() {
        return s * s;
    }
};

public class abstractclass {
    public static void main(String[] args) {
        // shape obj = new shape(); //(it willl give an error)
        square s1 = new square(2);
        s1.getarea();
        rectangle r1 = new rectangle(2, 3);
        r1.getarea();
    }
}

/*
 * classes -> extends
 * interfaces -> implement
 * 
 */