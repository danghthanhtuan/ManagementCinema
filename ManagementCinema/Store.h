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
	DataTable^ GetAllPhims();
	bool CheckPhimTonTai(String^ maPhim);
	bool Them1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ quocgia, String^ theloai, String^ hinhanh);
protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~Store()
	{
	}
};
