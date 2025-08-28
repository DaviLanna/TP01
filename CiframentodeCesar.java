import java.util.*;

public class CiframentodeCesar {

    private static StringBuilder Cifra(StringBuilder string){
        StringBuilder aux = new StringBuilder();
        for(int i = 0; i < string.length(); i++){
            char c = string.charAt(i);
            if(c >= 32 && c <= 126){
                aux.append((char)(c + 3));
            } else {
                aux.append(c);
            }
        }
        return aux;
    }
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        StringBuilder string = new StringBuilder(sc.nextLine());

        while (!string.toString().equals("FIM")) {
            System.out.println(Cifra(string));
            string = new StringBuilder(sc.nextLine());
        }
        sc.close();
    }
}