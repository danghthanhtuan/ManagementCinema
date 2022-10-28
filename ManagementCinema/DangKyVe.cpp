#include "DangKyVe.h"
#include "Store.h"

void ManagementCinema::DangKyVe::LoadDanhSachPhimCoLichChieu()
{
	Store^ s = gcnew Store();
	dataPhims = s->GetPhimCoLichChieu();
	for each (DataRow ^ item in dataPhims->Rows)
	{
		comboTenPhim->Items->Add(item["Ten"]->ToString() + "-" + item["MaPhim"]->ToString());		
	}
	if (dataPhims->Rows->Count > 0) {
		DataRow^ row = dataPhims->Rows[0];
		String^ maPhim = row["MaPhim"]->ToString();
		dataLichChieus = s->LoadDanhSachLichChieuTuongLai(maPhim);

		for each (DataRow ^ item in dataLichChieus->Rows)
		{
			comboNgayChieu->Items->Add(item["NgayChieu"]->ToString());
		}
	}
}
