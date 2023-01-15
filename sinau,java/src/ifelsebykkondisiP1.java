public class ifelsebykkondisiP1{

    public static void main(String[] args) {

        int nilai = 78;

        if (nilai == 100){
            System.out.println("SELAMAT ANDA MASUK KE BABAK SPESIAL DENGAN NILAI : " + nilai);
        }
        else if (nilai >= 80){
             System.out.println("SELAMAT ANDA MASUK KE TAHAP NASIONAL DENGAN NILAI : " + nilai);
        }
        else if (nilai >= 60){
             System.out.println("SELAMAT ANDA MENDAPAT SERTIFIKAT DENGAN NILAI : " + nilai);
        }
        else {
             System.out.println("MAAF ANDA HARUS BELAJAR LAGI TT, NILAI ANDA : " + nilai);
        }        
    }
}