import java.util.*;

public class a1q6 {
	public static void main( String[] args) {
	Scanner sc= new Scanner(System.in);
	String str= sc.nextLine();
	int a= sc.nextInt();
	int b= sc.nextInt();
	
	String ans= str.substring(a,b);
	System.out.println(ans);
}
}