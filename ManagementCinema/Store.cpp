#include "Store.h"
void Store::Store::GetAllPhims()
{
	DataTable^ results = gcnew DataTable();
	String^ DBPath = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\tuandt2\\Documents\\QLPhim.accdb;Persist Security Info=False;";
	OleDbConnection^ conn = gcnew OleDbConnection(DBPath);
	conn->Open();

	OleDbCommand^ cmd = gcnew OleDbCommand("SELECT * FROM Phim;", conn);

	

	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);
	int i = 1;
}
