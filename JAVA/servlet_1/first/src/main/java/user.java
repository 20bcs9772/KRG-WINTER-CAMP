
public class user {
	private String userName;
	private String name;
	private String email;
	private int age;
	private long contact;
	private String city;
	
	public user() {	
	}
	
	public String getuserName() {
		return userName;
	}
	public void setuserName(String userName) {
		this.userName= userName;
	}
	public String getname() {
		return name;
	}
	public void setname(String name) {
		this.name= name;
	}
	public String getemail() {
		return email;
	}
	public void setemail(String email) {
		this.email= email;
	}
	public int getage() {
		return age;
	}
	public void setage(int age) {
		this.age= age;
		
	}
	public long getcontact() {
		return contact;
	}
	public void setcontact(long contact) {
		this.contact = contact;
	}
	public String getcity() {
		return city;
	}
	public void setcity(String city) {
		this.city= city;
	}
	@Override
	public String toString() {
		return "user [ userName= " +userName+ "name= "+ name + ", email: "+ email + " age: "+ age + ", contact:"+ contact+ ", city: "+ city+ "]";
	}
	
	
}
