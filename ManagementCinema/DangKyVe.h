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


	private: System::Windows::Forms::Label^ lableTenPhim;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboNgayChieu;

	private: System::Windows::Forms::ComboBox^ comboTenPhim;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;





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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboKhungGio = (gcnew System::Windows::Forms::ComboBox());
			this->lableTenPhim = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboNgayChieu = (gcnew System::Windows::Forms::ComboBox());
			this->comboTenPhim = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(933, 181);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboKhungGio);
			this->groupBox1->Controls->Add(this->lableTenPhim);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboNgayChieu);
			this->groupBox1->Controls->Add(this->comboTenPhim);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox1->Location = System::Drawing::Point(290, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(643, 181);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Chọn phim";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DangKyVe::groupBox1_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Khung giờ: ";
			// 
			// comboKhungGio
			// 
			this->comboKhungGio->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboKhungGio->FormattingEnabled = true;
			this->comboKhungGio->Location = System::Drawing::Point(97, 130);
			this->comboKhungGio->Name = L"comboKhungGio";
			this->comboKhungGio->Size = System::Drawing::Size(199, 21);
			this->comboKhungGio->TabIndex = 14;
			// 
			// lableTenPhim
			// 
			this->lableTenPhim->AutoSize = true;
			this->lableTenPhim->Location = System::Drawing::Point(94, 22);
			this->lableTenPhim->Name = L"lableTenPhim";
			this->lableTenPhim->Size = System::Drawing::Size(0, 13);
			this->lableTenPhim->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ngày chiếu: ";
			// 
			// comboNgayChieu
			// 
			this->comboNgayChieu->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboNgayChieu->FormattingEnabled = true;
			this->comboNgayChieu->Location = System::Drawing::Point(97, 88);
			this->comboNgayChieu->Name = L"comboNgayChieu";
			this->comboNgayChieu->Size = System::Drawing::Size(199, 21);
			this->comboNgayChieu->TabIndex = 11;
			// 
			// comboTenPhim
			// 
			this->comboTenPhim->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboTenPhim->FormattingEnabled = true;
			this->comboTenPhim->Location = System::Drawing::Point(97, 52);
			this->comboTenPhim->Name = L"comboTenPhim";
			this->comboTenPhim->Size = System::Drawing::Size(199, 21);
			this->comboTenPhim->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Mã Phim:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Tên Phim: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 163);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 181);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(933, 62);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 243);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(933, 315);
			this->panel3->TabIndex = 2;
			// 
			// DangKyVe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 558);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"DangKyVe";
			this->Text = L"Đăng ký vé";
			this->Load += gcnew System::EventHandler(this, &DangKyVe::DangKyVe_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dataPhims = gcnew DataTable();
		DataTable^ dataLichChieus = gcnew DataTable();
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DangKyVe_Load(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDanhSachPhimCoLichChieu();
	}
	};
}
