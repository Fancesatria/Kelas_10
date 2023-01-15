package examples;
import javax.swing.*;
import java.awt.*;

public class Frame {
    public static void main(String[]args) {
//     JFrame al; //membuat objek
//     al = new JFrame("Tugas JFrame Class"); //Menentukan nama jendela
//     al.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//     al.setSize(300,300); //Mengatur ukuran jendela
//     al.setVisible(true); //Menampilkan jendela ke layar
//        
//     Label Label1 = new Label("Nim        :");
//     
//     TextField txt1 = new TextField("Inputkan Nim");
        //JFrame ini juga berguna untuk container
        JFrame frame = new JFrame("Tugas JFrame Class");
        GridLayout layout = new GridLayout(5, 2);
            layout.setHgap(15);
            layout.setVgap(15);
            frame.getContentPane().setLayout(layout);
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setSize(400,300);
            frame.setLocationRelativeTo(null);
            frame.setVisible(true);
        
        Label Label1 = new Label("NIM       :");
        frame.add(Label1);
        Label1.setBounds(30, 30, 130, 30);
        TextField txt1 = new TextField("Inputkan NIM");
        frame.add(txt1);
        txt1.setBounds(170, 30, 170, 30);
        
        Label Label2 = new Label("Nama       :");
        frame.getContentPane().add(Label2);
        Label2.setBounds(30, 80, 130, 30);
        TextField txt2 = new TextField("Inputkan Nama Anda");
        frame.getContentPane().add(txt2);
        txt2.setBounds(170, 80, 170, 30);
        
        Label Label3 = new Label("Alamat       :");
        frame.getContentPane().add(Label3);
        Label3.setBounds(30, 130, 130, 30);
        TextField txt3 = new TextField("Inputkan Alamat Anda");
        frame.getContentPane().add(txt3);
        txt3.setBounds(170, 130, 170, 30);
        
        JButton Button1 = new JButton("Submit");
        Button1.setSize(6);
        frame.add(Button1);
        
            
        JButton Button2 = new JButton("Cancel");
        frame.getContentPane().add(Button2);
        Button2.setBounds(70, 150, 40, 20);
        
        
     
    }
}
