#include "PurchaseEditorForm.h"
#include "MainForm.h"

System::Void NS_IHM::PurchaseEditorForm::addFloatTextBoxConstraints() {
	this->txtFloatDiscountAmount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatDutyFreePrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatTtcPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatVatAmount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
	this->txtFloatPaymentAmount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(&MainForm::txtFloatKeyDown);
}

