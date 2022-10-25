#pragma once
#include "Phim.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;

public ref class Store {
public:
	Store(void)
	{}
	void GetAllPhims();
protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~Store()
	{
	}
};
