/*  ENSF 480 Fall 2022
    Lab 5 - Exercise A and B
    Filename: BubbleSorter.java
    Author: Aarushi Roy Choudhury (30113987)
 */

import java.util.ArrayList;


public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> arr) {
       
        for(int i = 0; i < arr.size() - 1; i++){
            
            for(int j = 0; j < arr.size() - i - 1; j++) {
                
                if(arr.get(j).getItem().compareTo(arr.get(j + 1).getItem()) > 0) {
                    Item<E> temp = arr.get(j);
                    arr.set(j, arr.get(j + 1));
                    arr.set(j + 1, temp);
                }
            }
        }
    }
}