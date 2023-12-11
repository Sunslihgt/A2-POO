#include "ConnectionForm.h"
#include "PurchaseEditorForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	NS_IHM::ConnectionForm connectionForm;
	Application::Run(% connectionForm);
}
