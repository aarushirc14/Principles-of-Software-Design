/*  ENSF 480 Fall 2022
    Lab 6 - Exercise A
    Filename: BorderDecorator.java
    Author: Aarushi Roy Choudhury (30113987)
    Date: 2022-11-15
 */


import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Stroke;
import java.awt.BasicStroke;
import java.awt.Color;

public class BorderDecorator extends Decorator{

    public BorderDecorator(Component c, int xCoord, int yCoord, int w, int h){
        cmp = c;
        x = xCoord;
        y = yCoord;
        width = w;
        height = h;
    }

    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D)g;
        cmp.draw(g);
        g2d.setStroke(new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL, 0, new float[]{9}, 0));
        g2d.setColor(Color.black);
        g2d.drawRect(x, y, width, height);
    }
}