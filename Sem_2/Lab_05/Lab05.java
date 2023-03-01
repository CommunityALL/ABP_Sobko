package Sem_2.Lab_05;

import javax.swing.*;
import java.awt.*;
public class Lab05 extends JFrame{
    public Lab05(String title) {
        super(title);
    }
    public static void main(java.lang.String[] args) {
        var cwd = System.getProperty("user.dir");
        JFrame windowStart = new JFrame("Lab_05 var_8");
        windowStart.setBounds(70, 70, 820, 500);
        windowStart.setLayout(null);
        windowStart.getContentPane().setBackground(Color.getHSBColor(0.5806F, 0.158798F, 0.913725F));
        JLabel loginAuthorization = new JLabel("Авторизація входу");
        loginAuthorization.setBounds(275, 20, 400, 50);
        Font fontLogin = new Font("Times New Roman", Font.BOLD, 29);
        loginAuthorization.setFont(fontLogin);
        windowStart.add(loginAuthorization);
        JLabel phone = new JLabel("Телефон");
        phone.setBounds(50, 70, 100, 40);
        Font fontPhone = new Font("Times New Roman", Font.PLAIN, 25);
        phone.setFont(fontPhone);
        windowStart.add(phone);
        JTextField phone_Flied = new JTextField("");
        phone_Flied.setBounds(160, 70, 450, 40);
        windowStart.add(phone_Flied);
        var icon = new ImageIcon(cwd + "/Sem_2/Lab_05/phoneIcon.png");
        var panelPhone = new JPanel();
        panelPhone.add(new JLabel(icon));
        panelPhone.setBounds(30, 120, 250, 270);
        panelPhone.setBackground(Color.getHSBColor(0.5806F, 0.158798F, 0.913725F));
        windowStart.add(panelPhone);
        Font fontDigits = new Font("Times New Roman", Font.PLAIN, 20);
        phone.setFont(fontPhone);
        JLabel digits1 = new JLabel("Введіть чотири останні цифри номеру,");
        digits1.setBounds(300, 200, 400, 20);
        digits1.setFont(fontDigits);
        windowStart.add(digits1);
        JLabel digits2 = new JLabel("з якого Вам телефонують:");
        digits2.setBounds(300, 220, 400, 20);
        digits2.setFont(fontDigits);
        windowStart.add(digits2);
        JTextField digits_Field = new JTextField();
        digits_Field.setBounds(360, 250, 180, 40);
        windowStart.add(digits_Field);
        Font fontButton = new Font("Times New Roman", Font.BOLD, 18);
        JButton recall = new JButton("Повторний дзвінок");
        recall.setBounds(30, 390, 230, 40);
        recall.setBackground(Color.YELLOW);
        recall.setFont(fontButton);
        windowStart.add(recall);
        JButton send = new JButton("Надіслати");
        send.setBounds(290, 390, 230, 40);
        send.setBackground(Color.getHSBColor(0.213889F, 0.534161F, 0.631373F));
        send.setFont(fontButton);
        windowStart.add(send);
        JButton cancel = new JButton("Відмінити");
        cancel.setBounds(550, 390, 230, 40);
        cancel.setBackground(Color.RED);
        cancel.setFont(fontButton);
        windowStart.add(cancel);

        windowStart.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        windowStart.setVisible(true);
    }
}