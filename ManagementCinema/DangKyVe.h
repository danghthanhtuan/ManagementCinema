#pragma once

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DangKyVe
	/// </summary>
	public ref class DangKyVe : public System::Windows::Forms::Form
	{
	public:
		DangKyVe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void LoadDanhSachPhimCoLichChieu();
		void LoadDanhSachLichChieuTuongLai(String^ maPhim);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DangKyVe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboKhungGio;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboNgayChieu;

	private: System::Windows::Forms::ComboBox^ comboTenPhim;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnLuu;
	private: System::Windows::Forms::Button^ btnHuy;
	private: System::Windows::Forms::Button^ btnChon;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboKhungGio = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboNgayChieu = (gcnew System::Windows::Forms::ComboBox());
			this->comboTenPhim = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnLuu = (gcnew System::Windows::Forms::Button());
			this->btnHuy = (gcnew System::Windows::Forms::Button());
			this->btnChon = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1244, 223);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboKhungGio);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboNgayChieu);
			this->groupBox1->Controls->Add(this->comboTenPhim);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox1->Location = System::Drawing::Point(387, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(857, 223);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Chọn phim";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DangKyVe::groupBox1_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 129);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Khung giờ: ";
			// 
			// comboKhungGio
			// 
			this->comboKhungGio->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboKhungGio->FormattingEnabled = true;
			this->comboKhungGio->Location = System::Drawing::Point(122, 126);
			this->comboKhungGio->Margin = System::Windows::Forms::Padding(4);
			this->comboKhungGio->Name = L"comboKhungGio";
			this->comboKhungGio->Size = System::Drawing::Size(264, 24);
			this->comboKhungGio->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 80);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ngày chiếu: ";
			// 
			// comboNgayChieu
			// 
			this->comboNgayChieu->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboNgayChieu->FormatString = L"yyyy/MM/dd";
			this->comboNgayChieu->FormattingEnabled = true;
			this->comboNgayChieu->Location = System::Drawing::Point(123, 80);
			this->comboNgayChieu->Margin = System::Windows::Forms::Padding(4);
			this->comboNgayChieu->Name = L"comboNgayChieu";
			this->comboNgayChieu->Size = System::Drawing::Size(264, 24);
			this->comboNgayChieu->TabIndex = 11;
			// 
			// comboTenPhim
			// 
			this->comboTenPhim->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboTenPhim->FormattingEnabled = true;
			this->comboTenPhim->Location = System::Drawing::Point(123, 33);
			this->comboTenPhim->Margin = System::Windows::Forms::Padding(4);
			this->comboTenPhim->Name = L"comboTenPhim";
			this->comboTenPhim->Size = System::Drawing::Size(264, 24);
			this->comboTenPhim->TabIndex = 10;
			this->comboTenPhim->SelectedValueChanged += gcnew System::EventHandler(this, &DangKyVe::comboTenPhim_SelectedValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 41);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Tên Phim: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 201);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnLuu);
			this->panel2->Controls->Add(this->btnHuy);
			this->panel2->Controls->Add(this->btnChon);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 223);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1244, 52);
			this->panel2->TabIndex = 1;
			// 
			// btnLuu
			// 
			this->btnLuu->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnLuu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLuu->Location = System::Drawing::Point(873, 7);
			this->btnLuu->Name = L"btnLuu";
			this->btnLuu->Size = System::Drawing::Size(137, 37);
			this->btnLuu->TabIndex = 2;
			this->btnLuu->Text = L"Lưu";
			this->btnLuu->UseVisualStyleBackColor = false;
			// 
			// btnHuy
			// 
			this->btnHuy->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnHuy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHuy->Location = System::Drawing::Point(557, 7);
			this->btnHuy->Name = L"btnHuy";
			this->btnHuy->Size = System::Drawing::Size(137, 37);
			this->btnHuy->TabIndex = 1;
			this->btnHuy->Text = L"Hủy";
			this->btnHuy->UseVisualStyleBackColor = false;
			// 
			// btnChon
			// 
			this->btnChon->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnChon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChon->Location = System::Drawing::Point(226, 7);
			this->btnChon->Name = L"btnChon";
			this->btnChon->Size = System::Drawing::Size(137, 37);
			this->btnChon->TabIndex = 0;
			this->btnChon->Text = L"Chọn";
			this->btnChon->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 275);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1244, 412);
			this->panel3->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1241, 246);
			this->dataGridView1->TabIndex = 0;
			// 
			// DangKyVe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1244, 687);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DangKyVe";
			this->Text = L"Đăng ký vé";
			this->Load += gcnew System::EventHandler(this, &DangKyVe::DangKyVe_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dataPhims = gcnew DataTable();
		DataTable^ dataLichChieus = gcnew DataTable();
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DangKyVe_Load(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDanhSachPhimCoLichChieu();
		/*dataGvPhims->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataGvLich->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		this->LoadDataPhim();
		this->LoadDanhSachRapPhim("");*/
	}
	private: System::Void comboTenPhim_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selected = comboTenPhim->GetItemText(this->comboTenPhim->SelectedItem);
		String^ a = selected->Split('-')[1];
		this->LoadDanhSachLichChieuTuongLai(a);
	}
};
}
