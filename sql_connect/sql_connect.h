#ifndef __SQL_CONNECT__
#define __SQL_CONNECT__

#include <iostream>
#include <string>
#include <stdlib.h>
#include "mysql.h"

//std::string lib_path="LD_LIBRARY_PATH=/home/wmy/Desktop/classes/httpd/sql_connect";
class sql_connecter{
    public:
        sql_connecter(const std::string &host, const std::string &user, const std::string &passwd, const std::string &db);
        bool begin_connect();
        bool insert_sql(const std::string &data);
        bool select_sql(std::string [],std::string _out_str[][5], int &_out_row);
        //bool updata_sql();
        //bool delete_sql();
        //bool delete_table();
        //bool creat_table();
        //close remote link
        bool close_connect();
        ~sql_connecter();
        void show_info();
    private:
        MYSQL_RES *res;
        MYSQL *mysql_base;
        std::string host;
        std::string user;
        std::string passwd;
        std::string db;

};
#endif
