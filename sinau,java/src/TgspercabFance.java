// NAMA  : FANCE SATRIA NUSANTARA
// KELAS : XI RPL
// ABSEN : 14

// NOTE : TUGAS PERCABANGAN JADI SATU

// ----------------------------------------------------------------------------------


public class TgspercabFance{

    public static void main (String[] args){

    // PERCABANGAN 1 KONDISI
    int nilai1 = 92;

    if(nilai1 >= 80){
        System.out.println("SELAMAT ANDA LULUS !!!\n");
    }

    

    // PERCABANGAN 2 KONDISI
    int nilai2 = 75;

    if (nilai2 >= 80){
        System.out.println("SELAMAT ANDA LULUS !!!\n");
    } else {
        System.out.println("MOHON MAAF ANDA GAGAL\n");
    }


    // PERCABANGAN BANYAK KONDISI
    int nilai3 = 60;

    if (nilai3 == 100){
        System.out.println("SELAMAT ANDA NAIK KE TINGKAT INTERNASIONAL DENGAN NILAI : " + nilai3 + "\n");
    }else if (nilai3 >= 80){
        System.out.println("SELAMAT ANDA NAIK KE TINGKAT NASIONAL DENGAN NILAI : " + nilai3 + "\n");
    }else if (nilai3 >= 60){
        System.out.println("ANDA MENDAPATKAN SERTIFIKAT DENGAN NILAI : " + nilai3 + "\n");
    }else {
        System.out.println("MOHON MAAF, LANGKAH ANDA BERHENTI DISINI\n");
        
    }


    }
}


