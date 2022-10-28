#pragma once
#include "Phim.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;
public ref class Store {
public:
	Store(void)
	{}
	OleDbConnection^ ConnectionAccess();
	void CloseAccess(OleDbConnection^ conn);
	DataTable^ GetAllPhims(String^ timkiemTen);
	DataTable^ LoadDanhSachLichChieu(String^ maPhim);
	DataTable^  LoadDanhSachLichChieuTuongLai(String^ maPhim);
	DataTable^ LoadListRapPhim(String^ maRap);
	DataTable^ GetPhimCoLichChieu();
	bool CheckPhimTonTai(String^ maPhim);
	bool KiemTraLichChieuTonTai(DateTime batdau,DateTime ketthuc, String^ maRap);
	bool Xoa1Phim(String^ maPhim);
	bool Them1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ quocgia, String^ theloai, String^ hinhanh);
	bool Sua1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ quocgia, String^ theloai, String^ hinhanh);
	bool Them1LichPhim(String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc);
protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~Store()
	{
	}
};
