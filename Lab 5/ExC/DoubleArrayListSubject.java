/*  ENSF 480 Fall 2022
    Lab 5 - Exercise C
    Filename: DoubleArrayListSubject.java
    Author: Aarushi Roy Choudhury (30113987)
 */


import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {
    private ArrayList<Double> data; 
    private ArrayList<Observer> observers; 

   
    public DoubleArrayListSubject() {
        data = new ArrayList<Double>();
        observers = new ArrayList<Observer>();
    }

   
    public void addData(double d) {
        this.data.add(d);
        notifyAllObservers();
    }

   
    public void setData(double d, int index) {
        data.set(index, d);
        notifyAllObservers();
    }

   
    public void populate(double [] arr) {
        data.clear();
        
        for (double d : arr) {
            data.add(d);
        }
        notifyAllObservers();
    }

   
    public void registerObserver(Observer o) {
        observers.add(o);
        o.update(data);
    }

   
    public void remove(Observer o) {
        observers.remove(o);
    }

  
    public void notifyAllObservers() {
        for (Observer o : observers) {
            o.update(data);
        }
    }

  
    public void display() {
        if (observers.isEmpty()) {
            System.err.println("Empty List ...");
        } else {
            for (Observer o : observers) {
                o.display();
            }
        }
    }
}