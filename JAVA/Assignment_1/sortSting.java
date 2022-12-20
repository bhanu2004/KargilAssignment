public class sortSting {
    public static void main(String[] args){
        String str = "demosortstring";
        System.out.println("Original String: " + str);
        char [] strArry = str.toCharArray();
        int idx = 0;
        int n = strArry.length;
        for(int i=0;i<n;i++){
            idx=i;
            for(int j=i;j<n;j++){
                if(strArry[j]<strArry[idx]){
                    idx = j;
                }
            }
            char c = strArry[idx];
            strArry[idx] = strArry[i];
            strArry[i] = c;
        }
        str = String.valueOf(strArry);
        System.out.println("Sorted String: " + str);
    }
}
