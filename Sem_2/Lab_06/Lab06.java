package Sem_2.Lab_06;

import java.awt.*;
import java.awt.event.ActionListener;
import javax.swing.*;
public class Lab06 extends JPanel{
    static int colorInt = 0;
    public void paint(Graphics g){
        super.paintComponent(g);

        Polygon polygon = new Polygon();
        int[] xPolygon = {50, 150, 250};
        int[] yPolygon = {310, 120, 310};
        for(int i = 0; i < 3; i++){
            polygon.addPoint(xPolygon[i], yPolygon[i]);
        }
        switch (colorInt) {
            case 1 -> {
                g.setColor(Color.RED);
                g.fillPolygon(polygon);
            }
            case 2 -> {
                g.setColor(Color.BLACK);
                g.fillPolygon(polygon);
            }
            case 3 -> {
                g.setColor(Color.GREEN);
                g.fillPolygon(polygon);
            }
        }
        g.setColor(Color.BLACK);
        g.drawPolygon(polygon);
    }
    public static void main(java.lang.String[] args) {
        JFrame window = new JFrame("Lab_06 var_8");
        window.setBounds(70, 70, 600, 500);
        Lab06 polygons = new Lab06();
        polygons.setBounds(0, 0, 251, 311);
        window.add(polygons);

        JRadioButton red = new JRadioButton("Залити фігуру червоним.");
        red.setBounds(350, 0, 200, 100);
        JRadioButton black = new JRadioButton("Залити фігуру чорним.");
        black.setBounds(350, 100, 200, 100);
        JRadioButton green = new JRadioButton("Залити фігуру зеленим.");
        green.setBounds(350, 200, 200, 100);
        ButtonGroup buttonGroup = new ButtonGroup();

        ActionListener actionListener = e -> {
            if (red.isSelected()){
                colorInt = 1;
                Lab06 lab = new Lab06();
                window.add(lab);
                window.pack();
                window.setBounds(70, 70, 600, 500);

            }
            if (black.isSelected()){
                colorInt = 2;
                Lab06 lab = new Lab06();
                window.add(lab);
                window.pack();
                window.setBounds(70, 70, 600, 500);
            }
            if (green.isSelected()){
                colorInt = 3;
                Lab06 lab = new Lab06();
                window.add(lab);
                window.pack();
                window.setBounds(70, 70, 600, 500);
            }
        };
        red.addActionListener(actionListener);
        black.addActionListener(actionListener);
        green.addActionListener(actionListener);

        buttonGroup.add(red);
        buttonGroup.add(black);
        buttonGroup.add(green);
        window.add(red);
        window.add(black);
        window.add(green);

        window.setLayout(null);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setVisible(true);
    }
}
