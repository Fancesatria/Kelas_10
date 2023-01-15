import java.applet.Applet;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class DemoTeks extends Applet implements ActionListener{
    TextField nama, pass;

    @Override
    public void init() {
        Label namap = new Label("Nama : ",Label.RIGHT);
        Label passp = new Label("\t\tPassword : ",Label.RIGHT);

        nama = new TextField(20);
        pass = new TextField(5);
        pass.setEchoChar('?');

        add (namap);
        add (nama);
        add (passp);
        add (pass);

        nama.addActionListener(this);
        pass.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent ae){
        repaint();
    }

    public void pain(Graphics g) {
        g.drawString("Nama : " + nama.getText(), 6, 60);
        g.drawString("Teks Nama : " + nama.getSelectedText(), 6, 80);
        g.drawString("Password : " + pass.getText(), 6, 100);
    }
}


