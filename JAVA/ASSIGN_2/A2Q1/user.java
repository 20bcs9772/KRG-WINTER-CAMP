package JAVA.ASSIGN_2.A2Q1;

public class user {
    String name;
    Integer id;

    public user(String name, Integer id) {
        this.name = name;
        this.id = id;
    }

    public void verifyAccount(Integer id){
        if(this.id == id){
            System.out.println("This is a verified account ");
        } else {
            System.out.println("Please verify your account ");
        }
    }

    
}
