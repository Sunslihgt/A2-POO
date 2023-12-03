#pragma once
#include "Mapper.h"
#include "CAD.h"

namespace Services {
	public ref class Services {
	private:
		NS_Comp_Data::CAD^ oCAD;
		NS_Comp_Mappage::Mapper^ oMapper;
	public:
		Services(System::String^ identifiant, System::String^ mdp);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(int, System::String^, System::String^);
		void modifierUnePersonne(int, System::String^, System::String^);
		void supprimerUnePersonne(int);
	};
}
