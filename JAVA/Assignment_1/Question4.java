// output --------------------
// static - grandparent
// static - parent
// static - child
// instance - grandparent
// constructor - grandparent
// instance - parent
// constructor - parent
// instance - child
// constructor - child

// --------------------------------------------
class Parent extends Grandparent {

    {
        System.out.println("instance - parent");
    }
    public Parent() {
        System.out.println("constructor - parent");
    }
    static {
        System.out.println("static - parent");
    }
}

class Grandparent {
    static {
        System.out.println("static - grandparent");
    }

    {
        System.out.println("instance - grandparent");
    }
    public Grandparent() {
        System.out.println("constructor - grandparent");
    }

}

class Child extends Parent {
    public Child() {
        System.out.println("constructor - child");
    }
    static {
        System.out.println("static - child");
    }
    {
        System.out.println("instance - child");
    }
}

public class Question4 {
    public static void main(String[] args) {
        Child obj = new Child();
    }
}
