/*  ENSF 480 Fall 2022
    Lab 5 - Exercise C
    Filename: Observer.java
    Author: Aarushi Roy Choudhury (30113987)
 */
import java.util.ArrayList;

public interface Observer {
    public void update(ArrayList<Double> arr);
    public void display();
}