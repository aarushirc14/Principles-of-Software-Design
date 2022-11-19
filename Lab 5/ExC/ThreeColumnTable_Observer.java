/*  ENSF 480 Fall 2022
    Lab 5 - Exercise C
    Filename: ThreeColumnTable_Observer.java
    Author: Aarushi Roy Choudhury (30113987)
 */
import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
    private ArrayList<Double> data; // our data
    private DoubleArrayListSubject subject;

    public ThreeColumnTable_Observer(DoubleArrayListSubject subject) {
        this.subject = subject; 
        subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> arr) {
        data = new ArrayList<>(arr);
        System.out.println("\nNotification to Three-Column Table Observer: Data Changed:");
        display();
    }

    public void display() {
        if(data.isEmpty()) {
            System.out.println("Empty List ...");
        }
        else {
            int counter = 0;
            for(Double d : data) {
                System.out.print(d + "\t");
                counter++;
                if(counter == 3) {
                    System.out.println();
                    counter = 0;
                }
            }
            System.out.println();
        }
    }
}