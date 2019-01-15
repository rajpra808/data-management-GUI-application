/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : To create a form for view option click to show details of a person


**************************************************************************************************

*/

#pragma once
#include "oper.h"
namespace manage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for view
	/// </summary>
	public ref class view : public System::Windows::Forms::Form
	{
	public:
		view(void)
		{
			InitializeComponent();
		}

	protected:
		~view()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	// function to create a label with P Text
		Label^ createLbl(int x, int y, String^ P)
		{
			Label^ l = gcnew Label();
			l->AutoSize = true;
			l->Name = P;
			l->Text = P;
			l->BackColor = Color::White;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->Size = System::Drawing::Size(126, 20);
			l->Location = System::Drawing::Point(x,y);
			return l;
		}


//function to create dynamic label in flowlayout Windows
		void Create_Row()
		{

			while (Controls->Count > 0) {
				Controls->RemoveAt(0);
			}
			person A = Operation::View_id;
			int x = 355;
			int y = 12;
			//converts simple string to system String
			String^ str0 = gcnew String(A.GId().c_str());
			String^ str1 = gcnew String(A.GName().c_str());
			String^ str2 = gcnew String(A.Gmob().c_str());
			String^ str3 = gcnew String(A.Gfname().c_str());
			String^ str4 = gcnew String(A.Gdob().c_str());
			String^ str5 = gcnew String(A.Gocc().c_str());


			Label^ a = createLbl(x, y, str0);//str3
			this->Controls->Add(a);
			y = y + 24;
			Label^ b = createLbl(x, y, str1);//str3
			this->Controls->Add(b);

			y = y + 24;
			Label^ c = createLbl(x, y, str3);//str3
			this->Controls->Add(c);

			y = y + 24;
			Label^ d = createLbl(x, y, str4);//str3
			this->Controls->Add(d);

			y = y + 24;
			Label^ e = createLbl(x, y, str2);//str3
			this->Controls->Add(e);

			y = y + 24;
			Label^ f = createLbl(x, y, str5);//str3
			this->Controls->Add(f);

		}

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(view::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Father\'s Name";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(132, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Date of Birth";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(132, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Mobile No:";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(132, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Occupation";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(131, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"ID";
			//
			// view\

			Create_Row();
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 161);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"view";
			this->Text = L"view";
			this->Load += gcnew System::EventHandler(this, &view::view_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void view_Load(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
