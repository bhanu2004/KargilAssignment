

public interface Furniture {
    public void stressTest();
    public void fireTest();
}

public abstract class Chair implements Furniture {
public abstract String chairType();

}


public abstract class Table implements Furniture {
 public abstract String tableType();
}

public class MetalChair extends Chair {
    public void stressTest() {
        System.out.println("Stress Test for Metal Chair !!");
    }

    public void fireTest() {
        System.out.println("Fire Test for Metal Chair !!");
    }
}

public class MetalTable extends Table {
    @Override
    public void stressTest() {

        System.out.println("Stress Test for Metal Table !!");
    }

    public void fireTest() {
        System.out.println("Fire Test for Metal Table !!");
    }

    
    public String tableType() {
        String s = "This is a metal Table";
        return s;
    }
}


public class WoodenTable extends Table {

    public void stressTest() {

        System.out.println("Stress Test for Wooden Table !!");
    }

    public void fireTest() {
        System.out.println("Fire Test for Wooden Table !!");
    }

    public String tableType() {
        String s = "This is a wooden Table";
        return s;
    }
}


public class WoodenChair extends Chair {
    public void stressTest() {

        System.out.println("Stress Test for Wooden Chair !!");
    }

    public void fireTest() {
        System.out.println("Fire Test for Wooden Chair !!");
    }
}

public class FurnitureTest {
    public static void main(String[] args){
        Table table = null;
        Scanner input =  new Scanner(System.in);
        String str = input.next();
        if(str.equals("wooden")){
            table = new WoodenTable();


        }   else if (str.equals("metal")){
            table = new MetalTable();


        }

        System.out.println(table.tableType());
        table.stressTest();
        table.fireTest();

    }
}
