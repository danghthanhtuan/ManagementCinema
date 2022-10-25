#include "MyForm.h"
#include "Store.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//WinformCDemo is your project name
	ManagementCinema::MyForm form;
	Application::Run(% form);
}

String^ ManagementCinema::MyForm::getName(int i)
{
	switch (i)
	{
	case 1: return "A";
	case 2: return "B";
	case 3: return "C";
	case 4: return "D";
	case 5: return "E";
	case 6: return "F";
	case 7: return "G";
	case 8: return "H";
	default:
		break;
	}
}

void ManagementCinema::MyForm::LoadDataGhe()
{
	Store^ s = gcnew Store();
	s->GetAllPhims();
	
	for (int i = 0; i < 8; i++)
	{
		dtData->Columns->Add("" + i);
	}

	for (int i = 0; i < 8; i++)
	{
		DataRow^ dr = dtData->NewRow();
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0) {
				dr[j] = 1;
			}
			else {
				dr[j] = 0;
			}
			
		}
		dtData->Rows->Add(dr);
	}

	for (int i = 0; i < 8; i++) {
		local[i] = gcnew array< Int32 >(8);
		for (int j = 0; j < 8; j++)
			local[i][j] = 1;
	}

}
