<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Welcome Page</title>
</head>
<body>

	<form action="logout" method="get">

		<div class="">
            <h1>
                Hello
                <%=request.getParameter("name")%>!
            </h1>
            <h2>Welcome to Library Management System using Servlets</h2>
            <h3>Choose one of the following actions</h3>
            <ul>
                <li>Add book Information</li>
                <li>Display book Information</li>
                <li>List all available books</li>
                <li>Display count of all the books</li>
                <li><input type="submit" value="Logout" /></li>
            </ul>
    
            <br> 
        </div>
	</form>
	
</body>
</html>
