#pragma once
namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		void LoadDataGhe();
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1124, 244);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 244);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1124, 76);
			this->panel2->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1124, 76);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thao tác";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 320);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1124, 299);
			this->panel3->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1124, 299);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1124, 619);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dt = gcnew DataTable();
		DataTable^ dtData = gcnew DataTable();
		array<array<Int32>^>^ local = gcnew array<array< Int32 >^>(8);
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDataGhe();
		for (int i = 0; i < 8; i++)
		{
			dt->Columns->Add("" + i);
		}

		for (int i = 0; i < 8; i++)
		{
			DataRow^ dr = dt->NewRow();
			for (int j = 0; j < 8;j ++) {

			}
			dt->Rows->Add(dr);
		}
		dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataGridView1->DataSource = dt;

		for (int i = 0; i < 8; i++)
		{
			dataGridView1->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			dataGridView1->Rows[i]->ReadOnly;
		}

		for (int i = 0; i < 8; i++)
		{
			DataRow^ dr = dtData->Rows[i];
			for (int j = 0; j < 8; j++)
			{
				if (dr[j]->ToString() == "0") {
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Green;
				}
				else
				{
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;
				}
			}

		}

	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridView^ senderGrid = (DataGridView^)sender;

		if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;
			//TODO - Button Clicked - Execute Code Here
		}
	}

};
}
