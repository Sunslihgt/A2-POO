#include "ConnectionForm.h"
#include "PurchaseEditorForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	System::DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");

	IHM::ConnectionForm connectionForm;
	Application::Run(% connectionForm);
}
