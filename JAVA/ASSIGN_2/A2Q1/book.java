package JAVA.ASSIGN_2.A2Q1;

// public class book {
    
//     String title;
//     String author;
//     String publication;
//     Integer id;

// }

public class book {
	private String title = "";
	private boolean flag = true;
	private float context_rating = 0;
	private int quantity=0;
	int noOfRating=0;
	float sum=0;
	 void beingCheckedOut(){
		 	if(quantity>0) {
		 		quantity = quantity-1;
		        flag = false;
		 	}
		 	else System.out.println("No books");
	    }
	    void beingReturned(){
	    	if(quantity>0) {
	    	quantity = quantity+1;
	    	flag = true;
	    	}
		 	else System.out.println("No books");
	        
	    }
	    void receivingARating(float context_rating){
	        noOfRating += 1;
	        sum += context_rating;
	        this.context_rating = sum/noOfRating;
	    }
	    void setTitle(String title){
	        this.title =title;
	    }
	    String getTitle(){
	        return title;
	    }
	    boolean getFlag(){
	        return flag;
	    }
	    int getQuantity() {
	    	return quantity;
	    }
	    float getRating(){
	        return context_rating;
	    }
	    
}
