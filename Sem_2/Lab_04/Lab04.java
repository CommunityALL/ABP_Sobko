package Sem_2.Lab_04;

import java.awt.*;
import javax.swing.*;
public class Lab04 extends JPanel{
        public void paint(Graphics g){
        super.paintComponent(g);
        Polygon polygon1 = new Polygon();
        int[] xPolygon1 = {150, 250, 350, 450, 350, 250};
        int[] yPolygon1 = {250, 100, 100, 250, 400, 400};
        for(int i = 0; i < 6; i++){
            polygon1.addPoint(xPolygon1[i], yPolygon1[i]);
        }
        g.setColor(Color.GREEN);
        g.fillPolygon(polygon1);
        g.setColor(Color.BLACK);
        g.drawPolygon(polygon1);
        Polygon polygon2 = new Polygon();
        int[] xPolygon2 = {200, 265, 335, 400, 335, 265};
        int[] yPolygon2 = {250, 150, 150, 250, 350, 350};
        for(int i = 0; i < 6; i++){
            polygon2.addPoint(xPolygon2[i], yPolygon2[i]);
        }
        g.setColor(Color.GRAY);
        g.fillPolygon(polygon2);
        g.setColor(Color.BLACK);
        g.drawPolygon(polygon2);
        Polygon polygon3 = new Polygon();
        int[] xPolygon3 = {250, 280, 320, 350, 320, 280};
        int[] yPolygon3 = {250, 200, 200, 250, 300, 300};
        for(int i = 0; i < 6; i++){
            polygon3.addPoint(xPolygon3[i], yPolygon3[i]);
        }
        g.setColor(Color.YELLOW);
        g.fillPolygon(polygon3);
        g.setColor(Color.BLACK);
        g.drawPolygon(polygon3);
    }
    public static void main(java.lang.String[] args) {
        JFrame window = new JFrame("Lab_04 var_8");
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setBounds(70, 70, 600, 500);
        JLabel label = new JLabel("Viktoriia Oleksandrivna");
        label.setBounds(100, 5, 400, 50);
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);
        Font font = new Font("Times New Roman", Font.ITALIC + Font.BOLD, 19);
        label.setFont(font);
        label.setForeground(Color.RED);
        window.add(label);
        Lab04 polygons = new Lab04();
        window.add(polygons);

        window.setVisible(true);
    }

}
