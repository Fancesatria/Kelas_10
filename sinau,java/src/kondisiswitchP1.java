public class kondisiswitchP1{
    public static void main(String[] args) {
        int nilai = 67;
        switch(nilai){
            case 100 :
                 System.out.println("SELAMAT ANDA MASUK KE BABAK SPESIAL DENGAN NILAI : " + nilai);
                 break;
            case 90 :
                 System.out.println("SELAMAT ANDA MASUK KE BABAK NASIONAL DENGAN NILAI : " + nilai);
                 break;
            case 60 :
                 System.out.println("SELAMAT ANDA MENDAPAT SERTIFIKAT DENGAN NILAI : " + nilai);
                 break;
            default :
                 System.out.println("MAAF ANDA HARUS MENGULANG DENGAN NILAI : " + nilai);

        }
    }
}