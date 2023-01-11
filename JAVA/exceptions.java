public class exceptions{
    public void checkNum(int num){
        if(num<1){
            throw new ArithmeticException("number negative cannot calculate square ");
        } else {
            System.out.println("Square is "+(num*num));
        }
    }

    public static int divideNum(int n, int m) throws ArithmeticException {
        int div = n/m;
        return div;
    }

    public static void main(String[] args) {
        exceptions ex = new exceptions();
        try{
            ex.checkNum(8);
            System.out.println(ex.divideNum(4, 2));
        } catch (Exception e){
            System.out.println("Exception found "+e);
        }
    }
}

// we can use throws keyword to deligate responsibility of 
// exceptuon handling to the caller method and is responsible to handle that exception