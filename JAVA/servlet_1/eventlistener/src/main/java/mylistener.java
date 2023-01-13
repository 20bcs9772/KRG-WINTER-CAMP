
import javax.servlet.annotation.WebListener;

import javax.servlet.http.HttpSessionAttributeListener;
import javax.servlet.http.HttpSessionBindingEvent;
import javax.servlet.http.HttpSessionEvent;
import javax.servlet.http.HttpSessionListener;
import java.util.Date;
/**
 * Application Lifecycle Listener implementation class mylistener
 *
 */
@WebListener
public class mylistener implements HttpSessionListener, HttpSessionAttributeListener {

    /**
     * Default constructor. 
     */
    public mylistener() {
        // TODO Auto-generated constructor stub
    }

	/**
     * @see HttpSessionListener#sessionCreated(HttpSessionEvent)
     */
    public void sessionCreated(HttpSessionEvent hey)  { 
         // TODO Auto-generated method stub
    	System.out.println("Hello from Listener, Session is created at "+ new Date(hey.getSession().getCreationTime()));
    }

	/**
     * @see HttpSessionListener#sessionDestroyed(HttpSessionEvent)
     */
    public void sessionDestroyed(HttpSessionEvent hey)  { 
         // TODO Auto-generated method stub
    	System.out.println("Hello from listener, session destroyed at "+ new Date(hey.getSession().getCreationTime()));
    }

	/**
     * @see HttpSessionAttributeListener#attributeAdded(HttpSessionBindingEvent)
     */
    public void attributeAdded(HttpSessionBindingEvent hey)  { 
         // TODO Auto-generated method stub
    	System.out.println("Hello from listener," + hey.getName()+ " and value is "+ hey.getValue() + " added successfully");
    }

	/**
     * @see HttpSessionAttributeListener#attributeRemoved(HttpSessionBindingEvent)
     */
    public void attributeRemoved(HttpSessionBindingEvent hey)  { 
         // TODO Auto-generated method stub
    	System.out.println("From Listener key with "+ hey.getName()+ " and value is"+ hey.getValue()+ " removed successfully");
    }

	/**
     * @see HttpSessionAttributeListener#attributeReplaced(HttpSessionBindingEvent)
     */
    public void attributeReplaced(HttpSessionBindingEvent hey)  { 
         // TODO Auto-generated method stub
    	System.out.println("From Listener key with "+ hey.getName()+ " and value is"+ hey.getValue()+ " replaced successfully");
    	System.out.println(hey.getValue());
    }
	
}