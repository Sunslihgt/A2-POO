#pragma once

namespace NS_Comp_Data {
	ref class CAD {
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CAD(System::String^ identifiant, System::String^ mdp);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}