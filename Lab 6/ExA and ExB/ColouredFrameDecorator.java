/*  ENSF 480 Fall 2022
    Lab 6 - Exercise A
    Filename: ColouredFrameDecorator.java
    Author: Aarushi Roy Choudhury (30113987)
    Date: 2022-11-15
 */

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Stroke;
import java.awt.BasicStroke;
import java.awt.Color;

public class ColouredFrameDecorator extends Decorator{
    
    int thickness;

    public ColouredFrameDecorator(Component c, int xCoord, int yCoord, int w, int h, int thicc){
        cmp = c;
        x = xCoord;
        y = yCoord;
        width = w;
        height = h;
        thickness = thicc;
    }

    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D)g;
        cmp.draw(g);
        g2d.setStroke(new BasicStroke(thickness));
        g2d.setColor(Color.red);
        g2d.drawRect(x, y, width, height);
    }
}