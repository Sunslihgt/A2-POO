#include "Services.h"
#include "Mapper.h"

Services::Services::Services(System::String^ login, System::String^ password) {
	this->dbController = gcnew DB::DBController();
	bool connectionStatus = this->dbController->connect(login, password);

	if (!connectionStatus) {
		throw gcnew System::Exception("Impossible de se connecter à la base de données");
	}
}

System::Data::DataSet^ Services::Services::selectionnerToutesLesPersonnes(System::String^ dataTableName) {
	System::String^ sql;

	sql = DB::Mapper::Select();
	return this->oCAD->getRows(sql, dataTableName);
}
void Services::Services::ajouterUnePersonne(int id, System::String^ nom, System::String^ prenom) {
	System::String^ sql;

	this->oMapper->setId(id);
	this->oMapper->setNom(nom);
	this->oMapper->setPrenom(prenom);
	sql = this->oMapper->Insert();

	this->oCAD->actionRows(sql);
}

void Services::Services::modifierUnePersonne(int id, System::String^ nom, System::String^ prenom) {
	System::String^ sql;

	this->oMapper->setId(id);
	this->oMapper->setNom(nom);
	this->oMapper->setPrenom(prenom);
	sql = this->oMapper->Update();

	this->oCAD->actionRows(sql);
}

void DB::Services::supprimerUnePersonne(int id) {
	System::String^ sql;

	this->oMapper->setId(id);
	sql = this->oMapper->Delete();

	this->oCAD->actionRows(sql);
}
