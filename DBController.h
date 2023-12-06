#pragma once

namespace DB {
	ref class DBController {
	public:
		DBController();
		
		bool connect(System::String^ login, System::String^ password);

		System::Data::DataSet^ getRows(System::String^ sql);
		//System::Data::DataSet^ getRow(System::String^ sql);
		System::Void actionRows(System::String^ sql);

		bool isConnected();

	private:
		bool connected;
		System::Data::SqlClient::SqlConnection^ sqlConnection;
		System::Data::SqlClient::SqlCommand^ sqlCommand;
		System::Data::SqlClient::SqlDataAdapter^ sqlDataAdapter;
		System::Data::DataSet^ sqlDataSet;
	};
}
