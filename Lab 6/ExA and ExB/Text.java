/*  ENSF 480 Fall 2022
    Lab 6 - Exercise A
    Filename: Text.java
    Author: Aarushi Roy Choudhury
    Date: 2022-11-15
 */
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Stroke;
import java.awt.BasicStroke;
import java.awt.RenderingHints;
import java.awt.Font;
import java.awt.Color;

public class Text implements Component {

    int x;
    int y;
    String text;

    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    @Override
    public void draw(Graphics g) {
        g.setColor(Color.black);
        g.setFont(new Font("TimesRoman", Font.PLAIN, 16));
        g.drawString(text, x - 20, y);
       
    }
    
}

