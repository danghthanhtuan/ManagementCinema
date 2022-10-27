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

void ManagementCinema::MyForm::XoaText()
{
	txtMaPhim->Text = "";
	txtNamSanXuat->Text = "";
	txtTheLoai->Text = "";
	txtThoiLuong->Text = "";
	comboBox1->Text = "";
	txtTenPhim->Text = "";
	fileName = "";
}

void ManagementCinema::MyForm::LoadDanhSachPhim()
{
	Store^ s = gcnew Store();
	dt =s->GetAllPhims();
	dataGridView1->DataSource = dt;
}

void ManagementCinema::MyForm::LoadComboBoxQuocGia()
{
	comboBox1->Items->Add(L"Việt Nam");
	comboBox1->Items->Add(L"Mỹ");
	comboBox1->Items->Add("Trung");
	comboBox1->Items->Add(L"Thái");
}

bool ManagementCinema::MyForm::KiemTraPhimTonTai(String^ maPhim)
{
	Store^ s = gcnew Store();
	return s->CheckPhimTonTai(maPhim);
}

bool ManagementCinema::MyForm::Them1Phim()
{
	Store^ s = gcnew Store();
	return s->Them1Phim(txtMaPhim->Text,
		txtTenPhim->Text,
		txtNamSanXuat->Text,
		txtThoiLuong->Text,
		comboBox1->Text,
		txtTheLoai->Text,
		fileName);
}

bool ManagementCinema::MyForm::Sua1Phim()
{
	Store^ s = gcnew Store();
	return s->Sua1Phim(txtMaPhim->Text,
		txtTenPhim->Text,
		txtNamSanXuat->Text,
		txtThoiLuong->Text,
		comboBox1->Text,
		txtTheLoai->Text,
		fileName);
}

bool ManagementCinema::MyForm::Xoa1Phim(String^ maPhim)
{
	Store^ s = gcnew Store();
	return s->Xoa1Phim(maPhim);
}

void ManagementCinema::MyForm::LoadButton(bool bbtnThem, bool bbtnLuu, bool bbtnSua, bool bbtnXoa, bool bbtnHuy)
{
	btnThem->Enabled = bbtnThem;
	btnLuu->Enabled = bbtnLuu;
	btnSua->Enabled = bbtnSua;
	btnXoa->Enabled = bbtnXoa;
	btnHuy->Enabled = bbtnHuy;
}
