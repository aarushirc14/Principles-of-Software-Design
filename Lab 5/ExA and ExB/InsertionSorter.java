/*  ENSF 480 Fall 2022
    Lab 5 - Exercise A and B
    Filename: InsertionSorter.java
    Author: Aarushi Roy Choudhury (30113987)
 */


import java.util.ArrayList;


public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> arr) {
        
        for(int i = 1; i < arr.size(); i++) {
            Item<E> key = arr.get(i); 
            int j = i-1; 

            
            while(j >= 0 && arr.get(j).getItem().compareTo(key.getItem()) > 0) {
                arr.set(j + 1, arr.get(j));
                j--;
            }
            arr.set(j + 1, key);
        }
    }
}