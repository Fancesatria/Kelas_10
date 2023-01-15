// Fance Satria N  | XI-RPL | Absen = 14
//-----------------------------------------

package tembak;

public class Tembak {

        // Deklarasi variabel
        String nama, player;
        int peluru, reload, sisa, sisa2;

        // Yang tampil di halaman utama
        void tampil(){
         System.out.println(player + " is shooting... \t\t");
            
         System.out.println("Senjata : " + nama);
         System.out.println("Amunisi : " + peluru);
         
         System.out.println("   ");
         
        }

        // Controller / method
        boolean aksi(){
         if(peluru <= 0) return true;
            return false;
         
        }
        

    }
