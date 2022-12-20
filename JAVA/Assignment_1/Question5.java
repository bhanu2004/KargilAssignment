import java.util.*;

public class Question5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1[] = new String[3];
        

        // ----- taking inputs from user --------------
        System.out.println("Input: ");
        for(int it=0;it<3;it++){
            str1[it] = sc.nextLine();
        }
        System.out.println("\nOutput:");
        for(int it=0;it<3;it++){
            char[] strArray = str1[it].toCharArray();
            int n = str1[it].length();


            //---- finding the <blank> in string ------------
            int idx=0;
            for(int i=0;i<n;i++){
                if(strArray[i]==' '){
                    idx = i;
                    break;
                }
            }


            // ------- creating string with exactly 15 characters ------------
            char strPart[]= new char[15];
            for(int i=0;i<idx;i++){
                strPart[i] = strArray[i];
            }
            for(int i = idx;i<15;i++){
                strPart[i]=' ';
            }


            // ------- creating Integer Part with exactly 3 characters ------------
            char intPart[] = new char[3];
            int l = 2;
            for(int i = n-1;i>idx;i--){
                intPart[l] = strArray[i];
                l--;

            }
            while(l>=0){
                intPart[l] = '0';
                l--;
            }

            // -------------- printing the string and integers ---------------
            String StrP = String.valueOf(strPart);
            String intP = String.valueOf(intPart);
            System.out.println(StrP + intP);
        }
        
        
    }
}
