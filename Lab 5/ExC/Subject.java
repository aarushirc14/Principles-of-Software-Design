/*  ENSF 480 Fall 2022
    Lab 5 - Exercise C
    Filename: Subject.java
    Author: Aarushi Roy Choudhury
 */
public interface Subject {
    public void registerObserver(Observer o);
    public void remove(Observer o);
    public void notifyAllObservers();
}
