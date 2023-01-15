// NAMA  : FANCE SATRIA NUSANTARA
// KELAS : XI RPL
// ABSEN : 14

// NOTE : TUGAS PERCABANGAN 

// ----------------------------------------------------------------------------------

import java.util.Scanner;

public class Percabangan {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String nama, nim;
        final double tugas_1, tugas_2, tugas_3, uts, uas, praktek, ratarata, nilaiakhir;

        System.out.println("=========== PROGRAM MENGHITUNG NILAI ===========\n");

        // PROSES INPUT :
        System.out.print("| Masukkan Nama \t\t: ");
        nama = input.nextLine();
        System.out.print("| Masukkan NIM \t\t\t: ");
        nim = input.nextLine();
        System.out.print("| Masukkan Nilai tugas-1 \t: ");
        tugas_1 = input.nextDouble();
        System.out.print("| Masukkan Nilai tugas-2 \t: ");
        tugas_2 = input.nextDouble();
        System.out.print("| Masukkan Nilai tugas-3 \t: ");
        tugas_3 = input.nextDouble();
        System.out.print("| Masukkan Nilai UTS \t\t: ");
        uts = input.nextDouble();
        System.out.print("| Masukkan Nilai UAS \t\t: ");
        uas = input.nextDouble();
        System.out.print("| Masukkan Nilai praktek \t: ");
        praktek = input.nextDouble();

        System.out.print("\n");

        // HASIL
        System.out.println("===========           HASIL         ===========\n");
        ratarata = (tugas_1 + tugas_2 + tugas_3 / 3);

        nilaiakhir = (0.45 * uts + 0.15 * uas + 0.20 * praktek + 0.20 * ratarata);

        char nilaimutu;
        if (nilaiakhir >= 80) {
            nilaimutu = 'A';
        } else if (nilaiakhir >= 70 && nilaiakhir < 80) {
            nilaimutu = 'B';
        } else if (nilaiakhir >= 60 && nilaiakhir < 70) {
            nilaimutu = 'C';
        } else if (nilaiakhir >= 50 && nilaiakhir < 60) {
            nilaimutu = 'D';
        } else {
            nilaimutu = 'E';
        }

        System.out.println("| Nama \t\t\t: " + nama);
        System.out.println("| NIM \t\t\t: " + nim);
        System.out.println("| Nilai Tugas Rata-rata : " + ratarata);
        System.out.println("| Nilai UTS \t\t: " + uts);
        System.out.println("| Nilai UAS \t\t: " + uas);
        System.out.println("| Nilai Akhir \t\t: " + nilaiakhir);
        System.out.println("| Nilai Mutu \t\t: " + nilaimutu);

        System.out.println("| \n");
        System.out.println("------------------------------------------------");

    }
}