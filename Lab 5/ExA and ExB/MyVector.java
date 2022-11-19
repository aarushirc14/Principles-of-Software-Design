/*  ENSF 480 Fall 2022
    Lab 5 - Exercise A and B
    Filename: MyVector.java
    Author: Aarushi Roy Choudhury (30113987)
 */


import java.util.ArrayList;

public class MyVector<E extends Number & Comparable<E>> {
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    public MyVector(final int n) {
        storageM = new ArrayList<Item<E>>(n);
    }

    public MyVector(final ArrayList<Item<E>> arr) {
        storageM = new ArrayList<>(arr);
    }

    public void add(final Item<E> value) {
        storageM.add(value);
    }

    public void setSortStrategy(final Sorter <E> s) {
        sorter = s;
    }

    public void performSort() {
        sorter.sort(storageM);
    }

    public void display() {
        for (Item<E> item : storageM) {
            System.out.print(item.getItem() + "\t");
        }
    }
}