#include "QuanLyLichChieu.h"
#include "Store.h"

void ManagementCinema::QuanLyLichChieu::LoadDataPhim()
{
	Store^ s = gcnew Store();
	dt = s->GetAllPhims(textBox1->Text);
	dataGvPhims->DataSource = dt;
}

void ManagementCinema::QuanLyLichChieu::LoadDanhSachLichChieu(String^ maPhim)
{
	Store^ s = gcnew Store();
	dtLichChieu = s->LoadDanhSachLichChieu(maPhim);
	dataGvLich->DataSource = dtLichChieu;
}

void ManagementCinema::QuanLyLichChieu::LoadDanhSachRapPhim(String^ maRap)
{
	Store^ s = gcnew Store();
	dataCombo = s->LoadListRapPhim(maRap);
	for each (DataRow^ item in dataCombo->Rows)
	{
		comboRapPhim->Items->Add( item["MaRap"]->ToString());
	}
}

bool ManagementCinema::QuanLyLichChieu::KiemTraLichChieu()
{
	Store^ s = gcnew Store();
	bool result = s->KiemTraLichChieuTonTai(datePickBatDau->Value, datePickKetThuc->Value,comboRapPhim->Text);
	return result;
}

bool ManagementCinema::QuanLyLichChieu::ThemLichPhim()
{
	Store^ s = gcnew Store();
	DateTime^ batdau = gcnew DateTime(
		datePickNgayChieu->Value.Year,
		datePickNgayChieu->Value.Month,
		datePickNgayChieu->Value.Day,
		datePickBatDau->Value.Hour,
		datePickBatDau->Value.Minute,
		datePickBatDau->Value.Second);
	DateTime^ ketthuc = gcnew DateTime(
		datePickNgayChieu->Value.Year,
		datePickNgayChieu->Value.Month,
		datePickNgayChieu->Value.Day,
		datePickKetThuc->Value.Hour,
		datePickKetThuc->Value.Minute,
		datePickKetThuc->Value.Second);
	bool result = s->Them1LichPhim(txtMaPhim->Text,
		comboRapPhim->Text,
		txtGiaVe->Text,
		datePickNgayChieu->Value,
		batdau,
		ketthuc);
	return result;

}
