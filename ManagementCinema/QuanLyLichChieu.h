#pragma once

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QuanLyLichChieu
	/// </summary>
	public ref class QuanLyLichChieu : public System::Windows::Forms::Form
	{
	public:
		QuanLyLichChieu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void LoadDataPhim();
		void LoadDanhSachLichChieu(String^ maPhim);
		void LoadDanhSachRapPhim(String^ maRap);
		bool KiemTraLichChieu();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuanLyLichChieu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTimKiem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGvPhims;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGvLich;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDLich;
	private: System::Windows::Forms::TextBox^ txtGiaVe;

	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::TextBox^ txtMaPhim;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ datePickNgayChieu;
	private: System::Windows::Forms::DateTimePicker^ datePickBatDau;
	private: System::Windows::Forms::DateTimePicker^ datePickKetThuc;



	private: System::Windows::Forms::Label^ labRap;
	private: System::Windows::Forms::ComboBox^ comboRapPhim;
	private: System::Windows::Forms::Button^ btnThemLich;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ten;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MaPhim;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NamSanXuat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TheLoai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuocGia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ThoiLuong;





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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labRap = (gcnew System::Windows::Forms::Label());
			this->comboRapPhim = (gcnew System::Windows::Forms::ComboBox());
			this->datePickKetThuc = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePickBatDau = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePickNgayChieu = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtGiaVe = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMaPhim = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTimKiem = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnThemLich = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGvPhims = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ten = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MaPhim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NamSanXuat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TheLoai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuocGia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ThoiLuong = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGvLich = (gcnew System::Windows::Forms::DataGridView());
			this->IDLich = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvPhims))->BeginInit();
			this->panel4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvLich))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnTimKiem);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(952, 133);
			this->panel1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->labRap);
			this->groupBox3->Controls->Add(this->comboRapPhim);
			this->groupBox3->Controls->Add(this->datePickKetThuc);
			this->groupBox3->Controls->Add(this->datePickBatDau);
			this->groupBox3->Controls->Add(this->datePickNgayChieu);
			this->groupBox3->Controls->Add(this->txtGiaVe);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->txtMaPhim);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox3->Location = System::Drawing::Point(286, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(666, 133);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Thông tin";
			// 
			// labRap
			// 
			this->labRap->AutoSize = true;
			this->labRap->Location = System::Drawing::Point(343, 48);
			this->labRap->Name = L"labRap";
			this->labRap->Size = System::Drawing::Size(30, 13);
			this->labRap->TabIndex = 22;
			this->labRap->Text = L"Rạp:";
			// 
			// comboRapPhim
			// 
			this->comboRapPhim->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboRapPhim->FormattingEnabled = true;
			this->comboRapPhim->Location = System::Drawing::Point(417, 45);
			this->comboRapPhim->Name = L"comboRapPhim";
			this->comboRapPhim->Size = System::Drawing::Size(202, 21);
			this->comboRapPhim->TabIndex = 21;
			// 
			// datePickKetThuc
			// 
			this->datePickKetThuc->CustomFormat = L"HH:mm";
			this->datePickKetThuc->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePickKetThuc->Location = System::Drawing::Point(110, 97);
			this->datePickKetThuc->Name = L"datePickKetThuc";
			this->datePickKetThuc->Size = System::Drawing::Size(202, 20);
			this->datePickKetThuc->TabIndex = 20;
			// 
			// datePickBatDau
			// 
			this->datePickBatDau->CustomFormat = L"HH:mm";
			this->datePickBatDau->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePickBatDau->Location = System::Drawing::Point(110, 71);
			this->datePickBatDau->Name = L"datePickBatDau";
			this->datePickBatDau->Size = System::Drawing::Size(202, 20);
			this->datePickBatDau->TabIndex = 19;
			// 
			// datePickNgayChieu
			// 
			this->datePickNgayChieu->CustomFormat = L"yyyy-MM-dd";
			this->datePickNgayChieu->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePickNgayChieu->Location = System::Drawing::Point(110, 45);
			this->datePickNgayChieu->Name = L"datePickNgayChieu";
			this->datePickNgayChieu->Size = System::Drawing::Size(202, 20);
			this->datePickNgayChieu->TabIndex = 18;
			// 
			// txtGiaVe
			// 
			this->txtGiaVe->Location = System::Drawing::Point(417, 19);
			this->txtGiaVe->Name = L"txtGiaVe";
			this->txtGiaVe->Size = System::Drawing::Size(202, 20);
			this->txtGiaVe->TabIndex = 16;
			this->txtGiaVe->TextChanged += gcnew System::EventHandler(this, &QuanLyLichChieu::txtGiaVe_TextChanged);
			this->txtGiaVe->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &QuanLyLichChieu::txtGiaVe_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(343, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Giá Vé:";
			// 
			// txtMaPhim
			// 
			this->txtMaPhim->Enabled = false;
			this->txtMaPhim->Location = System::Drawing::Point(110, 19);
			this->txtMaPhim->Name = L"txtMaPhim";
			this->txtMaPhim->Size = System::Drawing::Size(202, 20);
			this->txtMaPhim->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Giờ kết thúc:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mã phim:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Giờ bắt đầu:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ngày chiếu:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tên Phim";
			// 
			// btnTimKiem
			// 
			this->btnTimKiem->Location = System::Drawing::Point(61, 38);
			this->btnTimKiem->Name = L"btnTimKiem";
			this->btnTimKiem->Size = System::Drawing::Size(75, 23);
			this->btnTimKiem->TabIndex = 1;
			this->btnTimKiem->Text = L"Tìm kiếm";
			this->btnTimKiem->UseVisualStyleBackColor = true;
			this->btnTimKiem->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnTimKiem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->btnThemLich);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 133);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(952, 48);
			this->panel2->TabIndex = 1;
			// 
			// btnThemLich
			// 
			this->btnThemLich->Location = System::Drawing::Point(285, 13);
			this->btnThemLich->Name = L"btnThemLich";
			this->btnThemLich->Size = System::Drawing::Size(94, 23);
			this->btnThemLich->TabIndex = 0;
			this->btnThemLich->Text = L"Thêm lịch chiếu";
			this->btnThemLich->UseVisualStyleBackColor = true;
			this->btnThemLich->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnThemLich_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 181);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(952, 185);
			this->panel3->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGvPhims);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(952, 185);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Danh sách Phim";
			// 
			// dataGvPhims
			// 
			this->dataGvPhims->AllowUserToAddRows = false;
			this->dataGvPhims->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGvPhims->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ID, this->Ten,
					this->MaPhim, this->NamSanXuat, this->TheLoai, this->QuocGia, this->ThoiLuong
			});
			this->dataGvPhims->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGvPhims->Location = System::Drawing::Point(3, 16);
			this->dataGvPhims->Name = L"dataGvPhims";
			this->dataGvPhims->Size = System::Drawing::Size(946, 166);
			this->dataGvPhims->TabIndex = 0;
			this->dataGvPhims->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QuanLyLichChieu::dataGvPhims_CellClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"ID";
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Ten
			// 
			this->Ten->DataPropertyName = L"Ten";
			this->Ten->HeaderText = L"Tên Phim";
			this->Ten->Name = L"Ten";
			this->Ten->ReadOnly = true;
			// 
			// MaPhim
			// 
			this->MaPhim->DataPropertyName = L"MaPhim";
			this->MaPhim->HeaderText = L"Mã Phim";
			this->MaPhim->Name = L"MaPhim";
			this->MaPhim->ReadOnly = true;
			// 
			// NamSanXuat
			// 
			this->NamSanXuat->DataPropertyName = L"NamSanXuat";
			this->NamSanXuat->HeaderText = L"Năm Sản Xuất";
			this->NamSanXuat->Name = L"NamSanXuat";
			this->NamSanXuat->ReadOnly = true;
			// 
			// TheLoai
			// 
			this->TheLoai->DataPropertyName = L"TheLoai";
			this->TheLoai->HeaderText = L"Thể Loại";
			this->TheLoai->Name = L"TheLoai";
			this->TheLoai->ReadOnly = true;
			// 
			// QuocGia
			// 
			this->QuocGia->DataPropertyName = L"QuocGia";
			this->QuocGia->HeaderText = L"Quốc Gia";
			this->QuocGia->Name = L"QuocGia";
			this->QuocGia->ReadOnly = true;
			// 
			// ThoiLuong
			// 
			this->ThoiLuong->DataPropertyName = L"ThoiLuong";
			this->ThoiLuong->HeaderText = L"Thời Lượng";
			this->ThoiLuong->Name = L"ThoiLuong";
			this->ThoiLuong->ReadOnly = true;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->groupBox2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 366);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(952, 200);
			this->panel4->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGvLich);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(952, 200);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Danh Sách Lịch chiếu";
			// 
			// dataGvLich
			// 
			this->dataGvLich->AllowUserToAddRows = false;
			this->dataGvLich->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGvLich->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->IDLich });
			this->dataGvLich->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGvLich->Location = System::Drawing::Point(3, 16);
			this->dataGvLich->Name = L"dataGvLich";
			this->dataGvLich->Size = System::Drawing::Size(946, 181);
			this->dataGvLich->TabIndex = 0;
			// 
			// IDLich
			// 
			this->IDLich->DataPropertyName = L"ID";
			this->IDLich->HeaderText = L"ID";
			this->IDLich->Name = L"IDLich";
			this->IDLich->ReadOnly = true;
			this->IDLich->Visible = false;
			// 
			// QuanLyLichChieu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 566);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"QuanLyLichChieu";
			this->Text = L"QuanLyLichChieu";
			this->Load += gcnew System::EventHandler(this, &QuanLyLichChieu::QuanLyLichChieu_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvPhims))->EndInit();
			this->panel4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvLich))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dt = gcnew DataTable();
		DataTable^ dtLichChieu = gcnew DataTable();
		DataTable^ dataCombo = gcnew DataTable();
		
#pragma endregion

	private: System::Void QuanLyLichChieu_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGvPhims->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataGvLich->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		this->LoadDataPhim();
		this->LoadDanhSachRapPhim("");
	}
	private: System::Void dataGvPhims_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;
			DataRow^ dr = dt->Rows[a];
			String^ maPhim = dr["MaPhim"]->ToString();
			LoadDanhSachLichChieu(maPhim);
			txtMaPhim->Text = maPhim;
		}

	}
	private: System::Void btnTimKiem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDataPhim();
	}
	private: System::Void btnThemLich_Click(System::Object^ sender, System::EventArgs^ e) {
		// kiểm tra dữ liệu đầu vào đầy đủ không
		if (txtMaPhim->Text == ""
			|| comboRapPhim->Text == ""
			|| datePickBatDau->Text == ""
			|| datePickKetThuc->Text == ""
			|| datePickNgayChieu->Text == ""
			|| txtGiaVe->Text == "")
		{
			MessageBox::Show(L"Bạn vui lòng nhập đầy đủ thông tin!", "Thông Báo");
			return;
		}

		// kiểm tra ngày chiếu có nằm trong quá khứ thì báo lỗi
		if (datePickNgayChieu->Value.Date < System::DateTime::Now.Date) {
			MessageBox::Show(L"Vui lòng chọn ngày chiếu trong tương lai!", "Thông Báo");
			return;
		}

		// kiểm tra giờ bắt đầu và kết thúc hợp lệ không
		System::TimeSpan batdau = datePickBatDau->Value.TimeOfDay;
		System::TimeSpan ketthuc = datePickKetThuc->Value.TimeOfDay;
		if (System::TimeSpan::Compare(batdau, ketthuc) >= 0) {
			MessageBox::Show(L"Vui lòng chọn giờ chiếu bắt đầu và kết thúc hợp lệ!", "Thông Báo");
			return;
		}

		// kiểm tra phim đang thêm + rạp phim + thời gian chiếu đã trùng với lịch nào chưa
		// ví dụ: thêm phim A ngày chiếu 10/10/2022 thời gian chiếu 12h đến 2h rạp số 1
		// => thì khi thêm 1 lịch chiếu nếu tồn tại 1 lịch trùng với thời gian của rạp số 1 thì báo lỗi
		if (KiemTraLichChieu()) {
			MessageBox::Show(L"Thời gian chiếu phim của rạp " + comboRapPhim->Text + L" đã có lịch chiếu", "Thông Báo");
			return;
		}

	}
	private: System::Void txtGiaVe_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void txtGiaVe_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		txtGiaVe->Text = String::Format("{0:#,##0}", double::Parse(txtGiaVe->Text));
	}
};
}
