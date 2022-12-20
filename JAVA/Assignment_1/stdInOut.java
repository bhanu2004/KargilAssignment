import java.util.*;

public class stdInOut {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Input: ");
        int demoInt = sc.nextInt();
        Double demoDouble = sc.nextDouble();
        sc.nextLine();
        String demoString = sc.nextLine();
        
        System.out.println("\nOutput: ");
        System.out.println("String: "+demoString);
        System.out.println("Double: "+demoDouble);
        System.out.println("Int: "+demoInt);

    }
}
