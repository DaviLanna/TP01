import java.util.*;

public class Palindromo {

    private static Boolean VerificaPalindromo(String string) {
        boolean resposta = true;
        for (int i = 0; i < string.length(); i++) {
            if (string.charAt(i) != string.charAt(string.length() - i - 1)) {
                resposta = false;
            }
        }
        return resposta;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String string;
        while (!(string = sc.nextLine()).equals("FIM")) {

            if (VerificaPalindromo(string) == false) {
                System.out.println("NAO");

            } else {
                System.out.println("SIM");
            }
        }
        sc.close();
    }
}