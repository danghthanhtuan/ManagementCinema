#include "DangKyVe.h"
#include "Store.h"
#include "KhungGio.h"

void ManagementCinema::DangKyVe::LoadDanhSachPhimCoLichChieu()
{
	Store^ s = gcnew Store();
	dataPhims = s->GetPhimCoLichChieu();
	for each (DataRow ^ item in dataPhims->Rows)
	{
		comboTenPhim->Items->Add(item["Ten"]->ToString() + "-" + item["MaPhim"]->ToString());
	}
	/*if (dataPhims->Rows->Count > 0) {
		DataRow^ row = dataPhims->Rows[0];
		String^ maPhim = row["MaPhim"]->ToString();
		dataLichChieus = s->LoadDanhSachLichChieuTuongLai(maPhim);

		for each (DataRow ^ item in dataLichChieus->Rows)
		{
			comboNgayChieu->Items->Add(item["NgayChieu"]->ToString());
		}
	}*/
}

void ManagementCinema::DangKyVe::LoadDanhSachLichChieuTuongLai(String^ maPhim)
{
	Store^ s = gcnew Store();
	dataLichChieus = s->LoadDanhSachLichChieuTuongLai(maPhim);
	comboNgayChieu->Items->Clear();

	DataTable^ phim = s->Get1Phim(maPhim);
	if (phim->Rows->Count == 0) {
		MessageBox::Show(L"Không tìm thấy phim!", "Thông Báo");
		return;
	}
	DataRow^ dr = phim->Rows[0];
	pictureBox1->Image = gcnew Bitmap(dr["HinhAnh"]->ToString());
	for each (DataRow ^ item in dataLichChieus->Rows)
	{
		comboNgayChieu->Items->Add(item[0]->ToString());
	}
}

void ManagementCinema::DangKyVe::LoadDanhSachKhungGioChieu(String^ maPhim, DateTime^ date)
{
	Store^ s = gcnew Store();
	dataKhunGioChieus = s->LoadDanhSachLichKhungGio(maPhim, date);
	comboKhungGio->Items->Clear();
	for each (DataRow ^ item in dataKhunGioChieus->Rows)
	{
		//String^ a = DateTime::Parse(item["GioBatDau"]->ToString()).ToString("HH:mm") + L" đến " + DateTime::Parse(item["GioKetThuc"]->ToString()).ToString("HH:mm");
		//KhungGio^ khungGio = gcnew KhungGio(item["ID"]->ToString(), a);
		//dataKhunGioChieusSelect->NewRow();
		comboKhungGio->Items->Add(DateTime::Parse(item["GioBatDau"]->ToString()).ToString("HH:mm") + L" đến " + DateTime::Parse(item["GioKetThuc"]->ToString()).ToString("HH:mm") + "  -" + item["ID"]->ToString());
	}
	//comboKhungGio->DataSource = dataKhunGioChieus;
	//comboKhungGio->ValueMember = "ID";
	//comboKhungGio->DisplayMember = "GioBatDau" + "GioKetThuc";
	
}

void ManagementCinema::DangKyVe::LoadDanhSachGhe(String^ idLich)
{
	Store^ s = gcnew Store();
	String^ rapPhim = "";
	for each (DataRow^ item in dataKhunGioChieus->Rows)
	{
		if (item["ID"]->ToString() == idLich) {
			rapPhim = item["RapPhim"]->ToString();
			break;
		}
	}
	if (rapPhim == "") {
		MessageBox::Show(L"Không tìm thấy rạp phim!", "Thông Báo");
		return;
	}
	//DataTable^ danhSachGheDaDangKy = s->GetLichPhim(maPhim, date);
	DataTable^ rap = s->GetRapPhim(rapPhim);
	throw gcnew System::NotImplementedException();
}
