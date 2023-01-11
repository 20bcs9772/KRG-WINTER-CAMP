
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
 * Servlet implementation class finalservlet
 */
@WebServlet("/finalservlet")
public class finalservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public finalservlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		HttpSession session= request.getSession(false);
		if(session!= null) {
			user u=(user) session.getAttribute("user");
			u.setcity(request.getParameter("city"));
			u.setcontact(Long.parseLong(request.getParameter("contact")));
//			response.setContentType("text/html");
			PrintWriter out= response.getWriter();
			out.print("Hello"+ u.getemail());
			out.print("Details"+ u);
			out.print("Session id"+ session.getId());
			out.print("Session Creation Time"+ session.getCreationTime());
		}
	}

}
