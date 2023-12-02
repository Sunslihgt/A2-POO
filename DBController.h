#pragma once
using namespace System::IO;
using namespace System;

ref class DBController {
public:
	DBController();
	DataSet^ getRows(String sql);
	DataSet^ getRow(String sql);
	void actionRows(String sql);

private:
	SqlConnection sqlConnection;
	SqlCommand sqlCommand;
	SqlDataAdapter sqlDataAdapter;
	DataSet sqlDataSet;
};

