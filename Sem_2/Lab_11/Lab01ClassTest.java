package Sem_2.Lab_11;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class Lab01ClassTest {

    @BeforeEach
    void setUp() {
    }

    @AfterEach
    void tearDown() {
    }

    @Test
    void part1() {
        int x = 4;
        int y = 5;
        double [] expResult = {94.5, 4.47213595499958};
        double [] result = Lab01Class.part1(x,y);
        assertArrayEquals(expResult, result);
    }

    @Test
    void part2() {
        int integer = 4;
        String expResult = "Positive single digit number.";
        String result = Lab01Class.part2(integer);
        assertEquals(expResult,result);
    }

    @Test
    void part3() {
        int n = 4;
        double expResult = 22.0;
        double result = Lab01Class.part3(n);
        assertEquals(expResult,result);
    }

    @Test
    void part4() {
        int n = 500;
        int[] expResult = {-100, 3};
        int[] result = Lab01Class.part4(n);
        assertArrayEquals(expResult,result);
    }

    @Test
    void part5() {
        int [] x = new int[] {0,0,0,0,0};
        int [] y = new int[] {0,1,2,3,4};
        String[] expResult = {"A", "E", "4.0"};
        String[] result = Lab01Class.part5(x, y);
        assertArrayEquals(expResult,result);
    }
}