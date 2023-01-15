public class Operatorlogika1 {
        public static void main(String[] args){
        int nilaibing = 65;
        int nilaibi = 80;
        int nilaiproduktif = 90;

        //PROSES PERBANDINGAN DENGAN OPERATOR LOGIKA AND (&&)
        boolean and1 = nilaibing > nilaiproduktif && nilaibi < nilaiproduktif; //false
        boolean and2 = nilaibing < nilaibi && nilaiproduktif > nilaibi; //true
                
        //PROSES PERBANDINGAN DENGAN OPERATOR LOGIKA AND (&)
        boolean anda1 = nilaibing > nilaiproduktif & nilaibi < nilaiproduktif; //false
        boolean anda2 = nilaibing < nilaibi & nilaiproduktif > nilaibi; //true
                
        //PROSES PERBANDINGAN DENGAN OPERATOR LOGIKA OR (||)
        boolean or1 = nilaibing > nilaibi || nilaiproduktif > nilaibi; //true
        boolean or2 = nilaibing < nilaibi || nilaiproduktif > nilaibi; //true
                
        //PROSES PERBANDINGAN DENGAN OPERATOR LOGIKA OR (|)
        boolean ora1 = nilaibing > nilaibi | nilaiproduktif > nilaibi; //true
        boolean ora2 = nilaibing < nilaibi | nilaiproduktif > nilaibi; //true
                
        //PROSES PERBANDINGAN DENGAN OPERATOR LOGIKA EXCLUSIVE OR (^)
        boolean xor1 = nilaibing > nilaibi ^ nilaiproduktif > nilaibi; //true
        boolean xor2 = nilaibing < nilaibi || nilaiproduktif > nilaibi; //false
                
        //PROSES PERBANDINGAN DENGAN OPERATOR LOGIKA NOT (!)
        boolean not1 = nilaibing > nilaibi; //false
        boolean not2 = nilaibing < nilaibi; //true
                
        //OUTPUT ATAU HASIL DARI PROSES PERBANDINGAN
        System.out.println("HASIL LOGIKA AND (&&) DAN AND (&) : ");
        System.out.println("And 1 = " + and1);
        System.out.println("And 2 = " + and2);
        System.out.println("Anda 1 = " + anda1);
        System.out.println("Anda 2 = " + anda2);        
        System.out.println("---------------------------------------------");
        System.out.println("HASIL LOGIKA OR (||) DAN OR (|) : ");
        System.out.println("Or 1 = " + or1);
        System.out.println("Or 2 = " + or2);
        System.out.println("Ora 1 = " + ora1);
        System.out.println("Ora 2 = " + ora2);
        System.out.println("---------------------------------------------");
        System.out.println("HASIL LOGIKA EXCLUSIVE OR (^) DAN NOT (!) : ");
        System.out.println("Xor 1 = " + xor1);
        System.out.println("Xor 2 = " + xor2);
        System.out.println("Not 1 = " + !not1);
        System.out.println("Not 2 = " + !not2);
        
        

        }
    }
    
