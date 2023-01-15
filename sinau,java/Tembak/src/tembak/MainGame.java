// Fance Satria N  | XI-RPL | Absen = 14
//-----------------------------------------

package tembak;
import java.util.Scanner;


public class MainGame {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Tembak play = new Tembak();
        
        // memanggil variabel dari class lain
        play.player = "messi";
        play.nama = "AK-47";
        play.peluru = 60;
        
        play.tampil();
        
        int out;
        System.out.print("Masukkan jumlah tembakan : ");
        out = input.nextInt();
        
        int total;
        total = (play.peluru - out);
        
        if (total <= 0){
            play.aksi();
            
            System.out.println(" ");
            System.out.println("Reload...\t\t");
            
            int reload;
            System.out.print("Masukkan jumlah reload : ");
            reload = input.nextInt();
            
            int sisa = play.peluru + reload;
            System.out.println("Sisa amunisi : " + sisa);
        } else {
            int sisa2 = play.peluru - out;
            
            System.out.println(" ");
            System.out.println("Good...");
            System.out.println("Sisa amunisi : " + sisa2);
        }
        
        
        

    }
}
