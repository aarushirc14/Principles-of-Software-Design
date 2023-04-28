/*  ENSF 480 Fall 2022
    Lab 5 - Exercise C
    Filename: OneRow_Observe.java
    Author: Aarushi Roy Choudhury
 */
import java.util.ArrayList;

public class OneRow_Observer implements Observer {
    private ArrayList<Double> data; 
    private DoubleArrayListSubject subject;

    public OneRow_Observer(DoubleArrayListSubject subject) {
        this.subject = subject; 
        subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> arr) {
        data = new ArrayList<>(arr);
        System.out.println("\nNotification to One-Row Table Observer: Data Changed:");
        display();
    }

    public void display() {
        if(data.isEmpty()) {
            System.out.println("Empty List ...");
        }
        else {
            for(Double d : data) {
                System.out.print(d + "\t");
            }
            System.out.println();
        }
    }
}
