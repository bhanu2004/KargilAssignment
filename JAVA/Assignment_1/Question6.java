import java.util.*;
public class Question6 {
    public static void main(String[] args) {
        System.out.println("Input:");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int st = sc.nextInt();
        int end = sc.nextInt();
        sc.close();

        String ans = str.substring(st, end);
        System.out.println("\nOutput:");
        System.out.println(ans);
    }
}
