/*  ENSF 480 Fall 2022
    Lab 5 - Exercise A and B
    Filename: SelectionSorter.java
    Author: Aarushi Roy Choudhury (30113987)
 */

import java.util.ArrayList;


public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> arr) {
       
        for(int i = 0; i < arr.size() - 1; i++) {
            int min = i; 
            for(int j = i + 1; j < arr.size(); j++) {
                if(arr.get(j).getItem().compareTo(arr.get(min).getItem()) < 0)
                    min = j;
            }
           
            Item<E> temp = arr.get(i);
            arr.set(i, arr.get(min));
            arr.set(min, temp);
        }
    }
}