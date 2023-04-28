/*  ENSF 480 Fall 2022
    Lab 5 - Exercise A and B
    Filename: Sorter.java
    Author: Aarushi Roy Choudhury
 */

import java.util.ArrayList;

public interface Sorter <E extends Number & Comparable<E>> {
    public void sort(ArrayList<Item<E>> arr); 
}
