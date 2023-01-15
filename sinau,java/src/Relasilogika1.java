public class Relasilogika1{

    public static void main (String[] args){
        int a = 40;
        int b = 60;
        int c = 60;

        System.out.println("PERBANDINGAN ANGKA LEBIH BESAR DARI ... ");
        System.out.println("Apakah benar a > b " + (a > b)); //false
        System.out.println("Apakah benar b > c " + (b > c)); //false
        System.out.println("Apakah benar c > a " + (c > a)); //true
        
        System.out.println("PERBANDINGAN ANGKA LEBIH BESAR ATAU SAMA DENGAN ... ");
        System.out.println("Apakah benar a >= b " + (a >= b)); //false
        System.out.println("Apakah benar b >= c " + (b >= c)); //true
        System.out.println("Apakah benar c >= a " + (c >= a)); //true
        
        System.out.println("PERBANDINGAN ANGKA LEBIH KECIL DARI ... ");
        System.out.println("Apakah benar a < b " + (a < b)); //true
        System.out.println("Apakah benar b < c " + (b < c)); //false
        System.out.println("Apakah benar c < a " + (c < a)); //false
        
        System.out.println("PERBANDINGAN ANGKA LEBIH KECIL ATAU SAMA DENGAN ... ");
        System.out.println("Apakah benar a <= b " + (a <= b)); //true
        System.out.println("Apakah benar b <= c " + (b <= c)); //true
        System.out.println("Apakah benar c <= a " + (c <=a )); //false
        
        System.out.println("PERBANDINGAN ANGKA SAMA DENGAN ... ");
        System.out.println("Apakah benar a == b " + (a == b)); //false
        System.out.println("Apakah benar b == c " + (b == c)); //true
        System.out.println("Apakah benar c == a " + (c ==a )); //false
        
        System.out.println("PERBANDINGAN ANGKA TIDAK SAMA DENGAN ... ");
        System.out.println("Apakah benar a != b " + (a != b)); //true
        System.out.println("Apakah benar b != c " + (b != c)); //false
        System.out.println("Apakah benar c != a " + (c != a)); //true


    }
}