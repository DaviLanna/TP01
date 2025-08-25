import java.util.*;

public class PalindromoREC {

    private static boolean VerificaPalindromoREC(String string, int inicio, int fim){
        if(inicio >= fim) return true;
        if(string.charAt(inicio) != string.charAt(fim)){
            return false;
        }else{
            return VerificaPalindromoREC(string, inicio + 1, fim -1);
        }
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        String string;
        while (!(string = sc.nextLine()).equals("FIM")) {

            if (VerificaPalindromoREC(string, 0, string.length()-1) == false) {
                System.out.println("NAO");

            } else {
                System.out.println("SIM");
            }
        }
        sc.close();
    }
}