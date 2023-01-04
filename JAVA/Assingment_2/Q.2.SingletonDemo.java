/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication3;

class Singleton{
    private static Singleton single_instance = null;
    String val;
    private Singleton(){
        val = "Demo of singleton class";
    }
    public static Singleton getInstance(){
        if(single_instance == null){
            single_instance = new Singleton();
            
        }
        return single_instance;
    }
}

public class SingletonDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Singleton s1 = Singleton.getInstance();
        System.out.println("s1 is initialized");
        Singleton s2 = Singleton.getInstance();
        System.out.println("s2 is initialized\n");
        System.out.println("Value in S1: " + s1.val);
        System.out.println("Value in S2: " + s2.val);
        System.out.println("\n\nValue in S2 is updated!!\n");
        s2.val = "changed demo Singleton class";
        System.out.println("new Value in S1: " + s1.val);
        System.out.println("new Value in S2: " + s2.val);
        
    }
    
    
}
