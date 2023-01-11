public class a1q2 implements Cloneable{
	int a;
	String name;
	a1q2(int a, String name) {
		this.a= a;
		this.name= name;
	}
	public static void main(String[] args) {
		a1q2 s1= new a1q2(1, "jilll");
		System.out.println(s1.a+ " "+ s1.name);
		try {
			a1q2 s2= (a1q2)s1.clone();
			System.out.println(s2.a+ " "+ s2.name);
		}
		catch(Exception e) {
			System.out.println(e);
		}
		
	}
}