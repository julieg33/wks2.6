#include "accesBdd.h"

AccesBdd::AccesBdd()
{
	this->request_sql = "";
	this->connection_string = "Data Source=.;Initial Catalog=test;Integrated Security=True";
	this->sql_connection = gcnew SqlConnection(this->connection_string);
	this->sql_command = gcnew SqlCommand(this->request_sql, this->sql_connection);
	this->sql_command->CommandType = CommandType::Text;
	this->sql_connection->Open();
	this->sql_connection->Close();
}

System::Data::DataSet^ AccesBdd::getRows(String^ requestsql, String^ dataTableName)
{
	this->set_sql(requestsql);
	this->sql_data_adapter = gcnew SqlDataAdapter(this->sql_command);
	this->sql_command->CommandText = this->request_sql;
	this->data_set = gcnew DataSet();
	this->sql_data_adapter->Fill(this->data_set, dataTableName);
	return this->data_set;
}

// normalement actionRows et actionRowsID c'etait pour faire autre chose que des select 
// mais on a pas eu le temps de les faire

void AccesBdd::actionRows(String^)
{
	throw gcnew System::NotImplementedException();
}

int AccesBdd::actionRowsID(String^)
{
	return 0;
}



void AccesBdd::set_sql(String^ requestsql)
{
	this->request_sql = requestsql;
}