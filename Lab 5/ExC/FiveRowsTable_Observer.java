/*  ENSF 480 Fall 2022
    Lab 5 - Exercise C
    Filename: FiveRowsTable_Observer.java
    Author: Aarushi Roy Choudhury (30113987)
 */
import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {
    private ArrayList<Double> data; 
    private DoubleArrayListSubject subject;

    public FiveRowsTable_Observer(DoubleArrayListSubject subject) {
        this.subject = subject; 
        subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> arr) {
        data = new ArrayList<>(arr);
        System.out.println("\nNotification to Five-Rows Table Observer: Data Changed:");
        display();
    }

    public void display() {
        if(data.isEmpty()) {
            System.out.println("Empty List ...");
        }
        else {
            int colNum = data.size() / 5; 
            if(data.size() % 5 != 0)
                colNum++; 
            for(int i = 0; i < 5; i++) { 
                for(int j = 0; j < colNum; j++) { 
                    int index = j * 5 + i;
                    if(index < data.size())
                        System.out.print(data.get(index) + "\t");
                }
                System.out.println();
            }

            System.out.println();
        }
    }
}