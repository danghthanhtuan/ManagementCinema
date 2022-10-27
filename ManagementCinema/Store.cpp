#include "Store.h"
OleDbConnection^ Store::ConnectionAccess()
{
	String^ DBPath = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\MyProject2\\Winf\\ManagementCinema\\ManagementCinema\\QLPhim.accdb;Persist Security Info=False;";
	OleDbConnection^ conn = gcnew OleDbConnection(DBPath);
	conn->Open();
	return conn;
}
void Store::CloseAccess(OleDbConnection^ conn)
{
	if (conn != nullptr) {
		conn->Close();
	}
}
DataTable^ Store::Store::GetAllPhims()
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM Phim";
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}

bool Store::CheckPhimTonTai(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM Phim WHERE MaPhim ='" + maPhim + "'";
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);
	CloseAccess(conn);
	if (results->Rows->Count > 0)
	{
		return true;
	}
	return false;
}

bool Store::Xoa1Phim(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "DELETE * FROM Phim WHERE MaPhim ='" + maPhim->Trim() + "';";

	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}

bool Store::Them1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ quocgia, String^ theloai, String^ hinhanh)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "INSERT INTO Phim (Ten,ThoiLuong,NamSanXuat,QuocGia,TheLoai,HinhAnh,MaPhim)"
		+ "VALUES ('" + ten + "', '" + thoiluong + "', '" + nam + "', '" + quocgia + "', '" + theloai + "', '" + hinhanh + "', '" + maPhim + "')";

	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}

bool Store::Sua1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ quocgia, String^ theloai, String^ hinhanh)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "UPDATE Phim SET " +
		"Ten = '" + ten + "'," +
		"ThoiLuong = '" + thoiluong + "'," +
		"NamSanXuat = '" + nam + "'," +
		"QuocGia = '" + quocgia + "'," +
		"TheLoai = '" + theloai + "'," +
		"HinhAnh = '" + hinhanh  +"'"
		"WHERE MaPhim = '" + maPhim->Trim() + "'; ";
	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}


