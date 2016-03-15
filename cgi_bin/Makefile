FIND_PATH=-I/home/wmy/Desktop/classes/httpd/sql_connect -I/home/wmy/Desktop/classes/httpd/sql_connect/mysql_lib/include -L/home/wmy/Desktop/classes/httpd/sql_connect/mysql_lib/lib -lmysqlclient

.PHONY:all
all: debug_cgi math_cgi register_cgi show_student_cgi
debug_cgi:debug_cgi.c
	gcc -o $@ $^
math_cgi:math_cgi.c
	gcc -o $@ $^
show_student_cgi:show_student_cgi.cpp /home/wmy/Desktop/classes/httpd/sql_connect/sql_connect.cpp 
	g++ -o $@ $^ $(FIND_PATH)
register_cgi:register_cgi.cpp /home/wmy/Desktop/classes/httpd/sql_connect/sql_connect.cpp
	g++ -o $@ $^ $(FIND_PATH) 
	
.PHONY:output
output:
	cp debug_cgi ../output/htdocs/cgi_bin
	cp math_cgi ../output/htdocs/cgi_bin
	cp register_cgi ../output/htdocs/cgi_bin
	cp show_student_cgi ../output/htdocs/cgi_bin

.PHONY:clean
clean:
	rm -rf debug_cgi math_cgi register_cgi show_student_cgi

