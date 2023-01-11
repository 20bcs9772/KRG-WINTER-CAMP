package JAVA.ASSIGN_2.A2Q1;

public class lms {

    String username;
    String password;

    lms(String u, String p) {
        this.username = u;
        this.password = p;
    }

    public void login(String u, String p){
        if(this.username == u && this.password == p){
            System.out.println("You have successfully logged in :) ");
        } else {
            System.out.println("Username or Password did not match :( ");
        }
    }

    public void register(String u, String p){
        this.username = u;
        this.password = p;
        System.out.println("You have created an account successfully :) ");
    }

}