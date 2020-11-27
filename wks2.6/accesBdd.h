#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

 ref class AccesBdd 
{
public:
	AccesBdd();
	System::Data::DataSet^ getRows(String^, String^);
	void actionRows(String^);
	int actionRowsID(String^);
private :
	String^ connection_string;
	String^ request_sql;
	SqlConnection^ sql_connection;
	SqlDataAdapter^ sql_data_adapter;
	SqlCommand^ sql_command;
	System::Data::DataSet^ data_set;
	void set_sql(String^);

};