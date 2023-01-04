
import java.util.*;


public class Question3 {
    
    static void compareUsingWhileLoop(){
        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.print("Enter a word: ");
            String str = sc.next();
            int n = str.length();
            
            if(str.equals("done")){
                break;
            }
            if(str.charAt(0)==str.charAt(n-1)){
                System.out.println(str+": equals\n");
            }
            else  System.out.println(str+": not equals\n");
        }
    }
    
    static void compareUsingDoWhileLoop(){
        Scanner sc = new Scanner(System.in);
        do{
            System.out.print("Enter a word: ");
            String str = sc.next();
            int n = str.length();
            
            if(str.equals("done")){
                break;
            }
            if(str.charAt(0)==str.charAt(n-1)){
                System.out.println(str+": equals\n");
            }
            else  System.out.println(str+": not equals\n");
        }
        while(true);
    }
    
    public static void main(String[] args){
        System.out.println("Enter the method for operation: ");
        System.out.println("a: using while loop ");
        System.out.println("b: using do while loop ");
        
        Scanner sc = new Scanner(System.in);
        
        char val = sc.next().charAt(0);
        if(val == 'a'){
            compareUsingDoWhileLoop();
        }
        else{
            compareUsingWhileLoop();
        }
        
    }
    
    
    
}
