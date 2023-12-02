#include "Services.h"

NS_Comp_Svc::Services::Services(System::String^ identifiant, System::String^ mdp) {
	this->oCAD = gcnew NS_Comp_Data::CAD(identifiant, mdp);
	this->oMapper = gcnew NS_Comp_Mappage::Mapper();
}
System::Data::DataSet^ NS_Comp_Svc::Services::selectionnerToutesLesPersonnes(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMapper->Select();
	return this->oCAD->getRows(sql, dataTableName);
}
void NS_Comp_Svc::Services::ajouterUnePersonne(int id, System::String^ nom, System::String^ prenom) {
	System::String^ sql;

	this->oMapper->setId(id);
	this->oMapper->setNom(nom);
	this->oMapper->setPrenom(prenom);
	sql = this->oMapper->Insert();

	this->oCAD->actionRows(sql);
}

void NS_Comp_Svc::Services::modifierUnePersonne(int id, System::String^ nom, System::String^ prenom) {
	System::String^ sql;

	this->oMapper->setId(id);
	this->oMapper->setNom(nom);
	this->oMapper->setPrenom(prenom);
	sql = this->oMapper->Update();

	this->oCAD->actionRows(sql);
}

void NS_Comp_Svc::Services::supprimerUnePersonne(int id) {
	System::String^ sql;

	this->oMapper->setId(id);
	sql = this->oMapper->Delete();

	this->oCAD->actionRows(sql);
}
