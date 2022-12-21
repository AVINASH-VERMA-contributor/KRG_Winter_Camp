package p1;

public class TestThrow {
    public static void checkNum(int num){
        if(num<0){
            throw new ArithmeticException("Number is -ve cannot square");
        }
        else{
            System.out.println("Square of num is "+ (num*num));
        }
    }
    public static void main(String[] args) {
        TestThrow t=new TestThrow();
        t.checkNum(9);
        System.out.println("Rest of the code");
    }
}
