#pragma once


namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ getName(int i);
		void LoadDanhSachPhim();
		bool KiemTraPhimTonTai(String^ maPhim);
		bool Them1Phim();
		void LoadButton(bool btnThem, bool btnLuu, bool btnSua, bool btnXoa, bool bbtnHuy);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnThem;
	private: System::Windows::Forms::Button^ btnSua;
	private: System::Windows::Forms::Button^ btnXoa;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtQuocGia;
	private: System::Windows::Forms::TextBox^ txtMaPhim;
	private: System::Windows::Forms::TextBox^ txtThoiLuong;
	private: System::Windows::Forms::TextBox^ txtNamSanXuat;
	private: System::Windows::Forms::TextBox^ txtTenPhim;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TenPhim;
	private: System::Windows::Forms::Button^ btnLuu;
	private: System::Windows::Forms::Button^ btnHuy;
	private: System::Windows::Forms::Label^ lableThaoTac;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ btnChonHinh;
	private: System::Windows::Forms::TextBox^ txtTheLoai;
	private: System::Windows::Forms::Label^ The;


	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnChonHinh = (gcnew System::Windows::Forms::Button());
			this->txtQuocGia = (gcnew System::Windows::Forms::TextBox());
			this->txtMaPhim = (gcnew System::Windows::Forms::TextBox());
			this->txtThoiLuong = (gcnew System::Windows::Forms::TextBox());
			this->txtNamSanXuat = (gcnew System::Windows::Forms::TextBox());
			this->txtTenPhim = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lableThaoTac = (gcnew System::Windows::Forms::Label());
			this->btnHuy = (gcnew System::Windows::Forms::Button());
			this->btnLuu = (gcnew System::Windows::Forms::Button());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnThem = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TenPhim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtTheLoai = (gcnew System::Windows::Forms::TextBox());
			this->The = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtTheLoai);
			this->panel1->Controls->Add(this->The);
			this->panel1->Controls->Add(this->btnChonHinh);
			this->panel1->Controls->Add(this->txtQuocGia);
			this->panel1->Controls->Add(this->txtMaPhim);
			this->panel1->Controls->Add(this->txtThoiLuong);
			this->panel1->Controls->Add(this->txtNamSanXuat);
			this->panel1->Controls->Add(this->txtTenPhim);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(976, 238);
			this->panel1->TabIndex = 0;
			// 
			// btnChonHinh
			// 
			this->btnChonHinh->Location = System::Drawing::Point(473, 173);
			this->btnChonHinh->Name = L"btnChonHinh";
			this->btnChonHinh->Size = System::Drawing::Size(95, 27);
			this->btnChonHinh->TabIndex = 11;
			this->btnChonHinh->Text = L"Hình Ảnh";
			this->btnChonHinh->UseVisualStyleBackColor = true;
			this->btnChonHinh->Click += gcnew System::EventHandler(this, &MyForm::btnChonHinh_Click);
			// 
			// txtQuocGia
			// 
			this->txtQuocGia->Location = System::Drawing::Point(473, 118);
			this->txtQuocGia->Name = L"txtQuocGia";
			this->txtQuocGia->Size = System::Drawing::Size(307, 20);
			this->txtQuocGia->TabIndex = 10;
			// 
			// txtMaPhim
			// 
			this->txtMaPhim->Location = System::Drawing::Point(473, 40);
			this->txtMaPhim->Name = L"txtMaPhim";
			this->txtMaPhim->Size = System::Drawing::Size(307, 20);
			this->txtMaPhim->TabIndex = 9;
			// 
			// txtThoiLuong
			// 
			this->txtThoiLuong->Location = System::Drawing::Point(473, 66);
			this->txtThoiLuong->Name = L"txtThoiLuong";
			this->txtThoiLuong->Size = System::Drawing::Size(307, 20);
			this->txtThoiLuong->TabIndex = 8;
			// 
			// txtNamSanXuat
			// 
			this->txtNamSanXuat->Location = System::Drawing::Point(473, 92);
			this->txtNamSanXuat->Name = L"txtNamSanXuat";
			this->txtNamSanXuat->Size = System::Drawing::Size(307, 20);
			this->txtNamSanXuat->TabIndex = 7;
			// 
			// txtTenPhim
			// 
			this->txtTenPhim->Location = System::Drawing::Point(473, 14);
			this->txtTenPhim->Name = L"txtTenPhim";
			this->txtTenPhim->Size = System::Drawing::Size(307, 20);
			this->txtTenPhim->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(377, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Năm sản xuất:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(378, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Quốc gia:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(375, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Tên phim:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(375, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Thời lượng:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(377, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mã phim:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(336, 210);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 238);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(976, 76);
			this->panel2->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lableThaoTac);
			this->groupBox1->Controls->Add(this->btnHuy);
			this->groupBox1->Controls->Add(this->btnLuu);
			this->groupBox1->Controls->Add(this->btnXoa);
			this->groupBox1->Controls->Add(this->btnSua);
			this->groupBox1->Controls->Add(this->btnThem);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(976, 76);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thao tác";
			// 
			// lableThaoTac
			// 
			this->lableThaoTac->AutoSize = true;
			this->lableThaoTac->Location = System::Drawing::Point(12, 35);
			this->lableThaoTac->Name = L"lableThaoTac";
			this->lableThaoTac->Size = System::Drawing::Size(0, 13);
			this->lableThaoTac->TabIndex = 5;
			// 
			// btnHuy
			// 
			this->btnHuy->Location = System::Drawing::Point(830, 28);
			this->btnHuy->Name = L"btnHuy";
			this->btnHuy->Size = System::Drawing::Size(95, 27);
			this->btnHuy->TabIndex = 4;
			this->btnHuy->Text = L"Hủy thao tác";
			this->btnHuy->UseVisualStyleBackColor = true;
			// 
			// btnLuu
			// 
			this->btnLuu->Location = System::Drawing::Point(717, 28);
			this->btnLuu->Name = L"btnLuu";
			this->btnLuu->Size = System::Drawing::Size(95, 27);
			this->btnLuu->TabIndex = 3;
			this->btnLuu->Text = L"Lưu";
			this->btnLuu->UseVisualStyleBackColor = true;
			this->btnLuu->Click += gcnew System::EventHandler(this, &MyForm::btnLuu_Click);
			// 
			// btnXoa
			// 
			this->btnXoa->Location = System::Drawing::Point(574, 28);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(95, 27);
			this->btnXoa->TabIndex = 2;
			this->btnXoa->Text = L"Xóa";
			this->btnXoa->UseVisualStyleBackColor = true;
			// 
			// btnSua
			// 
			this->btnSua->Location = System::Drawing::Point(445, 28);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(95, 27);
			this->btnSua->TabIndex = 1;
			this->btnSua->Text = L"Sửa";
			this->btnSua->UseVisualStyleBackColor = true;
			// 
			// btnThem
			// 
			this->btnThem->Location = System::Drawing::Point(309, 28);
			this->btnThem->Name = L"btnThem";
			this->btnThem->Size = System::Drawing::Size(95, 27);
			this->btnThem->TabIndex = 0;
			this->btnThem->Text = L"Thêm phim";
			this->btnThem->UseVisualStyleBackColor = true;
			this->btnThem->Click += gcnew System::EventHandler(this, &MyForm::btnThem_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 314);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(976, 262);
			this->panel3->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->ID, this->TenPhim });
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(976, 262);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"ID";
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// TenPhim
			// 
			this->TenPhim->DataPropertyName = L"Ten";
			this->TenPhim->HeaderText = L"Tên Phim";
			this->TenPhim->Name = L"TenPhim";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// txtTheLoai
			// 
			this->txtTheLoai->Location = System::Drawing::Point(473, 144);
			this->txtTheLoai->Name = L"txtTheLoai";
			this->txtTheLoai->Size = System::Drawing::Size(307, 20);
			this->txtTheLoai->TabIndex = 13;
			// 
			// The
			// 
			this->The->AutoSize = true;
			this->The->Location = System::Drawing::Point(378, 147);
			this->The->Name = L"The";
			this->The->Size = System::Drawing::Size(48, 13);
			this->The->TabIndex = 12;
			this->The->Text = L"Thể loại:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 576);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dt = gcnew DataTable();
		DataTable^ dtData = gcnew DataTable();
		//array<array<Int32>^>^ local = gcnew array<array< Int32 >^>(8);
		int enumXuly = 0; // 1 Them, 2 Xoa, 3 Sua
		String^ fileName = "";
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDanhSachPhim();
		btnChonHinh->Enabled = false;
		this->LoadButton(true, false, true, true, false);
		dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataGridView1->DataSource = dt;
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridView^ senderGrid = (DataGridView^)sender;

		if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;
			DataRow^ dr = dt->Rows[a];
			txtMaPhim->Text = dr["MaPhim"]->ToString();
			txtNamSanXuat->Text = dr["NamSanXuat"]->ToString();
			txtTenPhim->Text = dr["Ten"]->ToString();
			txtThoiLuong->Text = dr["ThoiLuong"]->ToString();
			txtQuocGia->Text = dr["QuocGia"]->ToString();
			//if (File->Exists(fullImagePath))
			pictureBox1->Image = gcnew Bitmap(dr["HinhAnh"]->ToString());
		}
	}

	private: System::Void btnThem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LoadButton(false, true, false, false, true);
		btnChonHinh->Enabled = true;
		lableThaoTac->Text = "Thao tác thêm Phim";
		enumXuly = 1;
	}
	private: System::Void btnChonHinh_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFile = gcnew OpenFileDialog;
		openFile->Filter = "Image Files (JPG,PNG,GIF)|*.JPG;*.PNG;*.GIF";

		if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFile->OpenFile()) != nullptr) {
				pictureBox1->Image = gcnew Bitmap(openFile->FileName);
				fileName = openFile->FileName;
				myStream->Close();
			}
		}
	}
	private: System::Void btnLuu_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enumXuly == 1) {
			if (txtMaPhim->Text == "" 
				|| txtNamSanXuat->Text == ""
				|| txtQuocGia-> Text == ""
				|| txtTenPhim->Text == ""
				|| txtThoiLuong->Text == ""
				|| fileName == "")
			{
				MessageBox::Show(L"Bạn vui lòng nhập đầy đủ thông tin!", "Thông Báo");
			}
			
			if (this->KiemTraPhimTonTai(txtMaPhim->Text)) {
				MessageBox::Show(L"Mã phim đã tồn tại!", "Thông Báo");
			}
			bool result = Them1Phim();
			if (result) {
				LoadDanhSachPhim();
			}

		}
	}
	};
}
