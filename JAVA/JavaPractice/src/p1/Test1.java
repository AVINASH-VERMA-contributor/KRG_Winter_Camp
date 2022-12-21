package p1;

public class Test1 {
    public static void main(String[] args) throws InterruptedException {
        doStuff();
    }

    public  static void doStuff() throws InterruptedException {
        doMoreStuff();
    }

    public static void doMoreStuff() throws InterruptedException {
        System.out.println("Yep");
        Thread.sleep(1000);
        System.out.println("Yep");
    }
}
