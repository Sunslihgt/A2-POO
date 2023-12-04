#pragma once
#include "Mapper.h"
#include "DBController.h"

namespace Services {
	public ref class Services {
	private:
		DB::DBController^ dbController;

	public:
		Services(System::String^ login, System::String^ password);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(int, System::String^, System::String^);
		void modifierUnePersonne(int, System::String^, System::String^);
		void supprimerUnePersonne(int);
	};
}
