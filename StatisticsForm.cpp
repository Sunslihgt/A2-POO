#include "StatisticsForm.h"
#include "MainForm.h"

System::Void IHM::StatisticsForm::addFloatTextBoxConstraints() {
	this->txtFloatProfitPercent->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatUnknownShrinkagePercent->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatVatPercent->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
}