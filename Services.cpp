#include "Services.h"
#include "Mapper.h"

Services::Services::Services(System::String^ login, System::String^ password) {
	this->dbController = gcnew DB::DBController();
	bool connectionStatus = this->dbController->connect(login, password);

	if (!connectionStatus) {
		throw gcnew System::Exception("Impossible de se connecter � la base de donn�es");
	}
}

System::Void Services::Services::searchClients(System::String^ name) {
	throw gcnew System::NotImplementedException();
	if (name != "") {
		System::String^ sql = DB::Mapper::searchClients(name, gcnew System::String(""), nullptr, nullptr);
		this->dbController->getRows(sql, "Clients");
	}
}