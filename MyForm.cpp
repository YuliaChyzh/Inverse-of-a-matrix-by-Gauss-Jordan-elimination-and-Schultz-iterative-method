// �������� ������ ������� ������� ������
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IP54_Chyzh::MyForm form;
	Application::Run(%form);
	return 1;
}

