
import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

// import user;

import java.io.PrintWriter;

/**
 * Servlet implementation class secondservlet
 */
@WebServlet("/secondservlet")
public class secondservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public secondservlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		user u= new user();
		HttpSession session = request.getSession(false);
		if(session!= null) {
		 u= (user) session.getAttribute("user");
		u.setage(Integer.parseInt(request.getParameter("age")));
		u.setemail(request.getParameter("email"));
		session.setAttribute("user",u);
		response.sendRedirect("three.html");
	}
	}
}
