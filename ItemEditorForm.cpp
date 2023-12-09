#include "ItemEditorForm.h"
#include "MainForm.h"

System::Void NS_IHM::ItemEditorForm::addFloatTextBoxConstraints() {
	this->txtFloatSupplierPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatUnitPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatVatRate->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
}