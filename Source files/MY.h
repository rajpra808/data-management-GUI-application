/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : To create a form Main window to do data management


**************************************************************************************************

*/
#pragma once
#include "view.h"
#include "people.h"
#include "oper.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include <sstream>
namespace manage {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Operation;
	using namespace std;
	public ref class MY : public System::Windows::Forms::Form
	{
	public:
		MY(void)
		{
			InitializeComponent();
		}

	protected:
		~MY()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  Info;

	private: System::Windows::Forms::Button^  Modify;


	private: System::Windows::Forms::Button^  Rem;


	private: System::Windows::Forms::Button^  Add;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  ShowAll;
	private: System::Windows::Forms::GroupBox^  GB1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  UserNameMain;






	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::GroupBox^  GB2;
	private: System::Windows::Forms::Button^  clr;
	private: System::Windows::Forms::Button^  sub;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  occcu;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DateTimePicker^  Date;

	private: System::Windows::Forms::TextBox^  addrs;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Mob;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Fname;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Sname;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  GB3;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  GB4;
	private: System::Windows::Forms::DateTimePicker^  Edate;



	private: System::Windows::Forms::TextBox^  Eadd;

	private: System::Windows::Forms::TextBox^  Emob;

	private: System::Windows::Forms::TextBox^  Efname;

	private: System::Windows::Forms::TextBox^  Ename;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Button^  Edit;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::GroupBox^  GB5;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::RadioButton^  rB2;

	private: System::Windows::Forms::RadioButton^  rB1;
private: System::Windows::Forms::TextBox^  SMOB;
private: System::Windows::Forms::TextBox^  SN;



	private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Button^  FindMob;


	private: System::Windows::Forms::ComboBox^  Eooc;

	private: System::Windows::Forms::FlowLayoutPanel^  lb;
	private: System::Windows::Forms::TextBox^  RemoveId;
	private: System::Windows::Forms::TextBox^  EId;
	private: System::Windows::Forms::Button^  getD;
private: System::Windows::Forms::Button^  FindName;
private: System::Windows::Forms::FlowLayoutPanel^  fl2;
private: System::Windows::Forms::FlowLayoutPanel^  fl1;





	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		//create a label for dynamic use

		Label^ create(int i)
		{
			Label^ l = gcnew Label();
			l->Name = "lab" + i.ToString();
			l->Text = "lab" + i.ToString();
			l->BackColor = Color::Yellow;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->Size = System::Drawing::Size(120, 20);
	     	return l;
		}

		//create a name label
		Label^ createName(int id, String^ P)
		{
			Label^ l = gcnew Label();
			l->Name = id.ToString();
			l->Text = P;
			l->BackColor = Color::White;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->Size = System::Drawing::Size(130, 20);
			//l->Location = System::Drawing::Point(start, end);
			return l;
		}
		Label^ createName2(int id, String^ P)
		{
			Label^ l = gcnew Label();
			l->Name = id.ToString();
			l->Text = P;
			l->BackColor = Color::White;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->Size = System::Drawing::Size(100, 20);
			//l->Location = System::Drawing::Point(start, end);
			return l;
		}
		Label^ createName3(int id, String^ P)
		{
			Label^ l = gcnew Label();
			l->Name = id.ToString();
			l->Text = P;
			l->BackColor = Color::White;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->Size = System::Drawing::Size(140, 20);
			//l->Location = System::Drawing::Point(start, end);
			return l;
		}
		//TO create link label
		LinkLabel^ createlink(String^ x)
		{
			LinkLabel^ l = gcnew LinkLabel();
			l->Name =x;
			l->Text = " View ";
			l->BackColor = Color::Yellow;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->Size = System::Drawing::Size(120, 20);
			l->Click += gcnew System::EventHandler(this,&MY::view_Click);
			l->LinkBehavior = LinkBehavior(1);
			//l->Location = System::Drawing::Point(start, end);
			return l;
		}
		void ShowResultByName(std::vector<person> Sresult)
		{
			while (fl1->Controls->Count > 0) {
				fl1->Controls->RemoveAt(0);
			}

			int x = 5;
			for (unsigned int i = 0; i < Sresult.size(); i++)
			{
				int y = 10;
				y = y + 1000;

				String^ str1 = gcnew String(Sresult[i].GId().c_str());
				String^ str2 = gcnew String(Sresult[i].Gmob().c_str());
				String^ str3 = gcnew String(Sresult[i].Gfname().c_str());
				String^ str4 = gcnew String(Sresult[i].Gdob().c_str());


				Label^ l = createName2(i, str1);//str3
				this->fl1->Controls->Add(l);

				l = createName2(i, str2);//str1
				this->fl1->Controls->Add(l);


				l = createName2(i, str3);//str2
				this->fl1->Controls->Add(l);


				l = createName3(i, str4);//str2
				this->fl1->Controls->Add(l);
			}
		}

		void ShowResultByMob(std::vector<person> Sresult)
		{
			while (fl2->Controls->Count > 0) {
				fl2->Controls->RemoveAt(0);
			}

			int x = 5;
			for (unsigned int i = 0; i < Sresult.size(); i++)
			{
				int y = 10;
				y = y + 1000;

				String^ str1 = gcnew String(Sresult[i].GId().c_str());
				String^ str2 = gcnew String(Sresult[i].GName().c_str());
				String^ str3 = gcnew String(Sresult[i].Gfname().c_str());
				String^ str4 = gcnew String(Sresult[i].Gdob().c_str());


				Label^ l = createName2(i, str1);//str3
				this->fl2->Controls->Add(l);

				l = createName2(i, str2);//str1
				this->fl2->Controls->Add(l);


				l = createName2(i, str3);//str2
				this->fl2->Controls->Add(l);


				l = createName3(i, str4);//str2
				this->fl2->Controls->Add(l);
			}
		}
		void Create_Row()
		{
			/*if(lb->Controls)
			{
				lb->Controls->Clear();
			}*/
			while (lb->Controls->Count > 0) {
				lb->Controls->RemoveAt(0);
			}

			int x = 5;
			for (unsigned int i = 0; i < ppl.size(); i++)
			{
				int y = 10;
				y = y + 1000;

				String^ str1 = gcnew String(ppl[i].GName().c_str());
				String^ str2 = gcnew String(ppl[i].Gmob().c_str());
				String^ str3 = gcnew String(ppl[i].GId().c_str());


				Label^ l = createName(i, str3);//str3
				this->lb->Controls->Add(l);

				//x = x + 18000;
				l = createName(i, str1);//str1
				this->lb->Controls->Add(l);

				//x = x + 18000;

				l = createName(i, str2);//str2
				this->lb->Controls->Add(l);

				//x = x + 18000;
				LinkLabel^ a = createlink(str3);
				//l = createName(i, s);//str2
				this->lb->Controls->Add(a);
				//a->Click += gcnew System::EventHandler(this->view_Click);
				//this->Info->Click += gcnew System::EventHandler(this, &MY::Info_Click);
			}

		}



		private: System::Void view_Click(System::Object^ sender, System::EventArgs^ e) {
			//LinkLabel ip = sender;
			LinkLabel^ obj = ((LinkLabel^)sender);
			String^ idd = obj->Name;
			std::string xs = msclr::interop::marshal_as<std::string>(idd);
			int k=findIndex(xs);

			View_id = ppl[k];
			view ^ abc = gcnew view;
			abc->Show();

		}
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MY::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->Info = (gcnew System::Windows::Forms::Button());
			this->Modify = (gcnew System::Windows::Forms::Button());
			this->Rem = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->UserNameMain = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ShowAll = (gcnew System::Windows::Forms::Button());
			this->GB1 = (gcnew System::Windows::Forms::GroupBox());
			this->GB2 = (gcnew System::Windows::Forms::GroupBox());
			this->GB3 = (gcnew System::Windows::Forms::GroupBox());
			this->GB4 = (gcnew System::Windows::Forms::GroupBox());
			this->GB5 = (gcnew System::Windows::Forms::GroupBox());
			this->fl2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->fl1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->FindName = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->rB2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB1 = (gcnew System::Windows::Forms::RadioButton());
			this->SMOB = (gcnew System::Windows::Forms::TextBox());
			this->SN = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->FindMob = (gcnew System::Windows::Forms::Button());
			this->getD = (gcnew System::Windows::Forms::Button());
			this->EId = (gcnew System::Windows::Forms::TextBox());
			this->Eooc = (gcnew System::Windows::Forms::ComboBox());
			this->Edate = (gcnew System::Windows::Forms::DateTimePicker());
			this->Eadd = (gcnew System::Windows::Forms::TextBox());
			this->Emob = (gcnew System::Windows::Forms::TextBox());
			this->Efname = (gcnew System::Windows::Forms::TextBox());
			this->Ename = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Edit = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->RemoveId = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->clr = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->occcu = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::DateTimePicker());
			this->addrs = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Mob = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Fname = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Sname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lb = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->GB1->SuspendLayout();
			this->GB2->SuspendLayout();
			this->GB3->SuspendLayout();
			this->GB4->SuspendLayout();
			this->GB5->SuspendLayout();
			this->SuspendLayout();
			//
			// splitContainer1
			//
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			//
			// splitContainer1.Panel1
			//
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->splitContainer1->Panel1->Controls->Add(this->Info);
			this->splitContainer1->Panel1->Controls->Add(this->Modify);
			this->splitContainer1->Panel1->Controls->Add(this->Rem);
			this->splitContainer1->Panel1->Controls->Add(this->Add);
			this->splitContainer1->Panel1->Controls->Add(this->panel1);
			this->splitContainer1->Panel1->Controls->Add(this->ShowAll);
			//
			// splitContainer1.Panel2
			//
			this->splitContainer1->Panel2->AllowDrop = true;
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->splitContainer1->Panel2->Controls->Add(this->GB1);
			this->splitContainer1->Size = System::Drawing::Size(876, 538);
			this->splitContainer1->SplitterDistance = 239;
			this->splitContainer1->TabIndex = 0;
			//
			// Info
			//
			this->Info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Info->Location = System::Drawing::Point(19, 469);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(197, 39);
			this->Info->TabIndex = 5;
			this->Info->Text = L"Find a person";
			this->Info->UseVisualStyleBackColor = true;
			this->Info->Click += gcnew System::EventHandler(this, &MY::Info_Click);
			//
			// Modify
			//
			this->Modify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Modify->Location = System::Drawing::Point(19, 406);
			this->Modify->Name = L"Modify";
			this->Modify->Size = System::Drawing::Size(197, 39);
			this->Modify->TabIndex = 3;
			this->Modify->Text = L"Edit Person Details";
			this->Modify->UseVisualStyleBackColor = true;
			this->Modify->Click += gcnew System::EventHandler(this, &MY::Modify_Click);
			//
			// Rem
			//
			this->Rem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Rem->Location = System::Drawing::Point(17, 338);
			this->Rem->Name = L"Rem";
			this->Rem->Size = System::Drawing::Size(197, 39);
			this->Rem->TabIndex = 2;
			this->Rem->Text = L"Remove Member";
			this->Rem->UseVisualStyleBackColor = true;
			this->Rem->Click += gcnew System::EventHandler(this, &MY::Rem_Click);
			//
			// Add
			//
			this->Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Add->Location = System::Drawing::Point(19, 268);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(197, 39);
			this->Add->TabIndex = 1;
			this->Add->Text = L"Add Person";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MY::Add_Click);
			//
			// panel1
			//
			this->panel1->Controls->Add(this->UserNameMain);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(235, 162);
			this->panel1->TabIndex = 0;
			//
			// UserNameMain
			//
			this->UserNameMain->AutoSize = true;
			this->UserNameMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameMain->Location = System::Drawing::Point(46, 124);
			this->UserNameMain->Name = L"UserNameMain";
			this->UserNameMain->Size = System::Drawing::Size(59, 24);
			this->UserNameMain->TabIndex = 0;

			String^ x = gcnew String(adm.c_str());
			this->UserNameMain->Text = x;
			//
			// pictureBox1
			//
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(60, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 96);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			//
			// ShowAll
			//
			this->ShowAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowAll->Location = System::Drawing::Point(19, 198);
			this->ShowAll->Name = L"ShowAll";
			this->ShowAll->Size = System::Drawing::Size(197, 39);
			this->ShowAll->TabIndex = 0;
			this->ShowAll->Text = L"Show";
			this->ShowAll->UseVisualStyleBackColor = true;
			this->ShowAll->Click += gcnew System::EventHandler(this, &MY::ShowAll_Click);
			//
			// GB1
			//
			this->GB1->Controls->Add(this->GB2);
			this->GB1->Controls->Add(this->lb);
			this->GB1->Controls->Add(this->linkLabel1);
			this->GB1->Controls->Add(this->label4);
			this->GB1->Controls->Add(this->label3);
			this->GB1->Controls->Add(this->label2);
			this->GB1->Location = System::Drawing::Point(-1, 15);
			this->GB1->Name = L"GB1";
			this->GB1->Size = System::Drawing::Size(593, 450);
			this->GB1->TabIndex = 0;
			this->GB1->TabStop = false;
			this->GB1->Text = L"Data";
			//
			// GB2
			//
			this->GB2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->GB2->Controls->Add(this->GB5);
			this->GB2->Controls->Add(this->GB3);
			this->GB2->Controls->Add(this->clr);
			this->GB2->Controls->Add(this->sub);
			this->GB2->Controls->Add(this->label10);
			this->GB2->Controls->Add(this->occcu);
			this->GB2->Controls->Add(this->label9);
			this->GB2->Controls->Add(this->Date);
			this->GB2->Controls->Add(this->addrs);
			this->GB2->Controls->Add(this->label8);
			this->GB2->Controls->Add(this->Mob);
			this->GB2->Controls->Add(this->label7);
			this->GB2->Controls->Add(this->Fname);
			this->GB2->Controls->Add(this->label6);
			this->GB2->Controls->Add(this->Sname);
			this->GB2->Controls->Add(this->label5);
			this->GB2->Location = System::Drawing::Point(0, 0);
			this->GB2->Name = L"GB2";
			this->GB2->Size = System::Drawing::Size(596, 491);
			this->GB2->TabIndex = 4;
			this->GB2->TabStop = false;
			this->GB2->Text = L"ADD";
			//
			// GB3
			//
			this->GB3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->GB3->Controls->Add(this->GB4);
			this->GB3->Controls->Add(this->RemoveId);
			this->GB3->Controls->Add(this->label12);
			this->GB3->Controls->Add(this->label11);
			this->GB3->Controls->Add(this->button2);
			this->GB3->Controls->Add(this->label16);
			this->GB3->Location = System::Drawing::Point(0, 4);
			this->GB3->Name = L"GB3";
			this->GB3->Size = System::Drawing::Size(591, 487);
			this->GB3->TabIndex = 14;
			this->GB3->TabStop = false;
			this->GB3->Text = L"Remove";
			//
			// GB4
			//
			this->GB4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->GB4->Controls->Add(this->getD);
			this->GB4->Controls->Add(this->EId);
			this->GB4->Controls->Add(this->Eooc);
			this->GB4->Controls->Add(this->Edate);
			this->GB4->Controls->Add(this->Eadd);
			this->GB4->Controls->Add(this->Emob);
			this->GB4->Controls->Add(this->Efname);
			this->GB4->Controls->Add(this->Ename);
			this->GB4->Controls->Add(this->label22);
			this->GB4->Controls->Add(this->label21);
			this->GB4->Controls->Add(this->label20);
			this->GB4->Controls->Add(this->label19);
			this->GB4->Controls->Add(this->label18);
			this->GB4->Controls->Add(this->label17);
			this->GB4->Controls->Add(this->label13);
			this->GB4->Controls->Add(this->label14);
			this->GB4->Controls->Add(this->Edit);
			this->GB4->Controls->Add(this->label15);
			this->GB4->Location = System::Drawing::Point(0, 0);
			this->GB4->Name = L"GB4";
			this->GB4->Size = System::Drawing::Size(600, 487);
			this->GB4->TabIndex = 16;
			this->GB4->TabStop = false;
			this->GB4->Text = L"Edit";
			//
			// GB5
			//
			this->GB5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->GB5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->GB5->Controls->Add(this->fl2);
			this->GB5->Controls->Add(this->fl1);
			this->GB5->Controls->Add(this->FindName);
			this->GB5->Controls->Add(this->label23);
			this->GB5->Controls->Add(this->rB2);
			this->GB5->Controls->Add(this->rB1);
			this->GB5->Controls->Add(this->SMOB);
			this->GB5->Controls->Add(this->SN);
			this->GB5->Controls->Add(this->label30);
			this->GB5->Controls->Add(this->FindMob);
			this->GB5->Location = System::Drawing::Point(4, 0);
			this->GB5->Name = L"GB5";
			this->GB5->Size = System::Drawing::Size(595, 500);
			this->GB5->TabIndex = 27;
			this->GB5->TabStop = false;
			this->GB5->Text = L"Search";
			//
			// fl2
			//
			this->fl2->AllowDrop = true;
			this->fl2->AutoScroll = true;
			this->fl2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->fl2->Location = System::Drawing::Point(45, 348);
			this->fl2->Name = L"fl2";
			this->fl2->Size = System::Drawing::Size(528, 71);
			this->fl2->TabIndex = 29;
			//
			// fl1
			//
			this->fl1->AllowDrop = true;
			this->fl1->AutoScroll = true;
			this->fl1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->fl1->Location = System::Drawing::Point(45, 179);
			this->fl1->Name = L"fl1";
			this->fl1->Size = System::Drawing::Size(528, 71);
			this->fl1->TabIndex = 28;
			//
			// FindName
			//
			this->FindName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->FindName->Location = System::Drawing::Point(335, 134);
			this->FindName->Name = L"FindName";
			this->FindName->Size = System::Drawing::Size(101, 39);
			this->FindName->TabIndex = 27;
			this->FindName->Text = L"Find";
			this->FindName->UseVisualStyleBackColor = true;
			this->FindName->Click += gcnew System::EventHandler(this, &MY::FindName_Click);
			//
			// label23
			//
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(136, 59);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(122, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Select One of the option";
			//
			// rB2
			//
			this->rB2->AutoSize = true;
			this->rB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->rB2->Location = System::Drawing::Point(61, 266);
			this->rB2->Name = L"rB2";
			this->rB2->Size = System::Drawing::Size(140, 22);
			this->rB2->TabIndex = 25;
			this->rB2->TabStop = true;
			this->rB2->Text = L"Mobile Number";
			this->rB2->UseVisualStyleBackColor = true;
			this->rB2->CheckedChanged += gcnew System::EventHandler(this, &MY::rB2_CheckedChanged);
			//
			// rB1
			//
			this->rB1->AutoSize = true;
			this->rB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->rB1->Location = System::Drawing::Point(58, 99);
			this->rB1->Name = L"rB1";
			this->rB1->Size = System::Drawing::Size(70, 22);
			this->rB1->TabIndex = 24;
			this->rB1->TabStop = true;
			this->rB1->Text = L"Name";
			this->rB1->UseVisualStyleBackColor = true;
			this->rB1->CheckedChanged += gcnew System::EventHandler(this, &MY::rB1_CheckedChanged);
			//
			// SMOB
			//
			this->SMOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SMOB->Location = System::Drawing::Point(237, 269);
			this->SMOB->Name = L"SMOB";
			this->SMOB->Size = System::Drawing::Size(324, 24);
			this->SMOB->TabIndex = 23;
			//
			// SN
			//
			this->SN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SN->Location = System::Drawing::Point(237, 98);
			this->SN->Name = L"SN";
			this->SN->Size = System::Drawing::Size(324, 24);
			this->SN->TabIndex = 21;
			//
			// label30
			//
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(138, 24);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(111, 25);
			this->label30->TabIndex = 14;
			this->label30->Text = L"Search By";
			//
			// FindMob
			//
			this->FindMob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->FindMob->Location = System::Drawing::Point(340, 299);
			this->FindMob->Name = L"FindMob";
			this->FindMob->Size = System::Drawing::Size(101, 39);
			this->FindMob->TabIndex = 12;
			this->FindMob->Text = L"Find";
			this->FindMob->UseVisualStyleBackColor = true;
			this->FindMob->Click += gcnew System::EventHandler(this, &MY::FindMob_Click);
			//
			// getD
			//
			this->getD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->getD->Location = System::Drawing::Point(419, 82);
			this->getD->Name = L"getD";
			this->getD->Size = System::Drawing::Size(139, 33);
			this->getD->TabIndex = 29;
			this->getD->Text = L"Get details";
			this->getD->UseVisualStyleBackColor = true;
			this->getD->Click += gcnew System::EventHandler(this, &MY::getD_Click);
			//
			// EId
			//
			this->EId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->EId->Location = System::Drawing::Point(179, 91);
			this->EId->Name = L"EId";
			this->EId->Size = System::Drawing::Size(197, 24);
			this->EId->TabIndex = 28;
			//
			// Eooc
			//
			this->Eooc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->Eooc->FormattingEnabled = true;
			this->Eooc->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Student", L"Govt. Job", L"Private Job", L"Work from Home",
					L"Other"
			});
			this->Eooc->Location = System::Drawing::Point(245, 329);
			this->Eooc->Name = L"Eooc";
			this->Eooc->Size = System::Drawing::Size(322, 26);
			this->Eooc->TabIndex = 26;
			//
			// Edate
			//
			this->Edate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->Edate->Location = System::Drawing::Point(245, 288);
			this->Edate->Name = L"Edate";
			this->Edate->Size = System::Drawing::Size(322, 24);
			this->Edate->TabIndex = 25;
			//
			// Eadd
			//
			this->Eadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eadd->Location = System::Drawing::Point(243, 255);
			this->Eadd->Name = L"Eadd";
			this->Eadd->Size = System::Drawing::Size(324, 24);
			this->Eadd->TabIndex = 24;
			//
			// Emob
			//
			this->Emob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Emob->Location = System::Drawing::Point(243, 217);
			this->Emob->Name = L"Emob";
			this->Emob->Size = System::Drawing::Size(324, 24);
			this->Emob->TabIndex = 23;
			//
			// Efname
			//
			this->Efname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Efname->Location = System::Drawing::Point(244, 182);
			this->Efname->Name = L"Efname";
			this->Efname->Size = System::Drawing::Size(324, 24);
			this->Efname->TabIndex = 22;
			//
			// Ename
			//
			this->Ename->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ename->Location = System::Drawing::Point(244, 152);
			this->Ename->Name = L"Ename";
			this->Ename->Size = System::Drawing::Size(324, 24);
			this->Ename->TabIndex = 21;
			//
			// label22
			//
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(47, 335);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(94, 18);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Occupation";
			//
			// label21
			//
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(49, 294);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(44, 18);
			this->label21->TabIndex = 19;
			this->label21->Text = L"DOB";
			//
			// label20
			//
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(49, 258);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 18);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Address";
			//
			// label19
			//
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(49, 223);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(122, 18);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Mobile Number";
			//
			// label18
			//
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(49, 188);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(118, 18);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Father\'s Name";
			//
			// label17
			//
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(49, 155);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 18);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Name";
			//
			// label13
			//
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(118, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(206, 16);
			this->label13->TabIndex = 15;
			this->label13->Text = L"*Use Find Option  to know your Id ";
			//
			// label14
			//
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(82, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(267, 25);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Select ID of person to Edit ";
			//
			// Edit
			//
			this->Edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->Edit->Location = System::Drawing::Point(200, 398);
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(136, 46);
			this->Edit->TabIndex = 12;
			this->Edit->Text = L"Save";
			this->Edit->UseVisualStyleBackColor = true;
			this->Edit->Click += gcnew System::EventHandler(this, &MY::Edit_Click);
			//
			// label15
			//
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(127, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 18);
			this->label15->TabIndex = 0;
			this->label15->Text = L"ID";
			//
			// RemoveId
			//
			this->RemoveId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->RemoveId->Location = System::Drawing::Point(315, 162);
			this->RemoveId->Name = L"RemoveId";
			this->RemoveId->Size = System::Drawing::Size(197, 24);
			this->RemoveId->TabIndex = 17;
			//
			// label12
			//
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(225, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(206, 16);
			this->label12->TabIndex = 15;
			this->label12->Text = L"*Use Find Option  to know your Id ";
			//
			// label11
			//
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(184, 97);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(301, 25);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Select ID of person to remove ";
			//
			// button2
			//
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button2->Location = System::Drawing::Point(255, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 46);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MY::button2_Click);
			//
			// label16
			//
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(227, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 18);
			this->label16->TabIndex = 0;
			this->label16->Text = L"ID";
			//
			// clr
			//
			this->clr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->clr->Location = System::Drawing::Point(376, 356);
			this->clr->Name = L"clr";
			this->clr->Size = System::Drawing::Size(136, 46);
			this->clr->TabIndex = 13;
			this->clr->Text = L"RESET";
			this->clr->UseVisualStyleBackColor = true;
			this->clr->Click += gcnew System::EventHandler(this, &MY::clr_Click);
			//
			// sub
			//
			this->sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->sub->Location = System::Drawing::Point(147, 355);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(136, 46);
			this->sub->TabIndex = 12;
			this->sub->Text = L"Submit";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &MY::sub_Click);
			//
			// label10
			//
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(70, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 18);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Occupation";
			//
			// occcu
			//
			this->occcu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->occcu->FormattingEnabled = true;
			this->occcu->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Student", L"Govt. Job", L"Private Job", L"Work from home",
					L"Other"
			});
			this->occcu->Location = System::Drawing::Point(232, 280);
			this->occcu->Name = L"occcu";
			this->occcu->Size = System::Drawing::Size(246, 26);
			this->occcu->TabIndex = 10;
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(65, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 18);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Date of Birth";
			//
			// Date
			//
			this->Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->Date->Location = System::Drawing::Point(230, 239);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(248, 24);
			this->Date->TabIndex = 8;
			//
			// addrs
			//
			this->addrs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addrs->Location = System::Drawing::Point(230, 196);
			this->addrs->Name = L"addrs";
			this->addrs->Size = System::Drawing::Size(248, 24);
			this->addrs->TabIndex = 7;
			this->addrs->Text = L"village,district,state(pin Code)";
			this->addrs->Click += gcnew System::EventHandler(this, &MY::addrs_Click);
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(65, 202);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 18);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Address";
			//
			// Mob
			//
			this->Mob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mob->Location = System::Drawing::Point(230, 149);
			this->Mob->Name = L"Mob";
			this->Mob->Size = System::Drawing::Size(248, 24);
			this->Mob->TabIndex = 5;
			this->Mob->Text = L"10 Digit Mobile number";
			this->Mob->Click += gcnew System::EventHandler(this, &MY::Mob_Click);
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(64, 155);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 18);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Mobile";
			//
			// Fname
			//
			this->Fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fname->Location = System::Drawing::Point(230, 104);
			this->Fname->Name = L"Fname";
			this->Fname->Size = System::Drawing::Size(248, 24);
			this->Fname->TabIndex = 3;
			this->Fname->Text = L"Fathers Full Name";
			this->Fname->Click += gcnew System::EventHandler(this, &MY::Fname_Click);
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(64, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Father\'s Name";
			//
			// Sname
			//
			this->Sname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sname->Location = System::Drawing::Point(230, 59);
			this->Sname->Name = L"Sname";
			this->Sname->Size = System::Drawing::Size(248, 24);
			this->Sname->TabIndex = 1;
			this->Sname->Text = L"Full Name";
			this->Sname->Click += gcnew System::EventHandler(this, &MY::Sname_Click);
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(64, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 18);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Name";
			//
			// lb
			//
			this->lb->AllowDrop = true;
			this->lb->AutoScroll = true;
			this->lb->Location = System::Drawing::Point(26, 85);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(564, 421);
			this->lb->TabIndex = 5;
			//
			// linkLabel1
			//
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->linkLabel1->Location = System::Drawing::Point(418, 51);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(60, 20);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Action";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(291, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"DOB";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(146, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Name";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID";
			//
			// MY
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 538);
			this->Controls->Add(this->splitContainer1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->Name = L"MY";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Data management System";
			this->Load += gcnew System::EventHandler(this, &MY::MY_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->GB1->ResumeLayout(false);
			this->GB1->PerformLayout();
			this->GB2->ResumeLayout(false);
			this->GB2->PerformLayout();
			this->GB3->ResumeLayout(false);
			this->GB3->PerformLayout();
			this->GB4->ResumeLayout(false);
			this->GB4->PerformLayout();
			this->GB5->ResumeLayout(false);
			this->GB5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void minimize_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState(1);
	}

	private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void Sname_Click(System::Object^  sender, System::EventArgs^  e) {
		Sname->Clear();
	}

	private: System::Void Fname_Click(System::Object^  sender, System::EventArgs^  e) {
		Fname->Clear();
	}
	private: System::Void Mob_Click(System::Object^  sender, System::EventArgs^  e) {
		Mob->Clear();
	}

	private: System::Void addrs_Click(System::Object^  sender, System::EventArgs^  e) {
		addrs->Clear();
	}

	private: System::Void clr_Click(System::Object^  sender, System::EventArgs^  e) {
		Sname->Clear();
		Fname->Clear();
		Mob->Clear();
		addrs->Clear();
	}

	private: System::Void ShowAll_Click(System::Object^  sender, System::EventArgs^  e) {
		//GB1->BringToFront();
		Create_Row();
		GB1->Visible = true;
		GB2->Visible = false;
		GB3->Visible = false;
		GB4->Visible = false;
		GB5->Visible = false;
	}
	private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
		GB2->BringToFront();
		GB2->Visible = true;
		GB1->Visible = true;
		GB3->Visible = false;
		GB4->Visible = false;
		GB5->Visible = false;
	}
	private: System::Void Rem_Click(System::Object^  sender, System::EventArgs^  e) {
		GB3->BringToFront();
		GB3->Visible = true;
		GB2->Visible = true;
		GB1->Visible = true;
		GB4->Visible = false;
		GB5->Visible = false;

	}
	private: System::Void Modify_Click(System::Object^  sender, System::EventArgs^  e) {
		GB4->BringToFront();
		GB4->Visible = true;
		GB2->Visible = true;
		GB3->Visible = true;
		GB1->Visible = true;
		GB5->Visible = false;
	}
	private: System::Void Info_Click(System::Object^  sender, System::EventArgs^  e) {
		GB5->BringToFront();
		GB5->Visible = true;
		GB2->Visible = true;
		GB3->Visible = true;
		GB4->Visible = true;
		GB1->Visible = true;
		FindName->Hide();
		SN->Hide();
		FindMob->Hide();
		SMOB->Hide();
	}

	private: System::Void MY_Load(System::Object^  sender, System::EventArgs^  e) {
		Create_Row();
		GB1->Visible = true;
		GB2->Visible = false;
		GB3->Visible = false;
		GB4->Visible = false;
		GB5->Visible = false;
	}

			 // add new person
	private: System::Void sub_Click(System::Object^  sender, System::EventArgs^  e) {
		/*
		Fname
		Mob
		addrs
		Date
		occcu
		*/
		String ^ a = Sname->Text;
		String ^ b = Fname->Text;
		String ^ x = Mob->Text;
		String ^ c = addrs->Text;
		String ^ d = Date->Text;
		String ^ g = occcu->Text;
		//MessageBox::Show("Name : "+a+"\n FName : " + b+"\n "+x+"\n"+c+"\n"+d+"\n"+g+" done ", "Database");

		std::string as = msclr::interop::marshal_as<std::string>(a);
		std::string bs = msclr::interop::marshal_as<std::string>(b);
		std::string cs = msclr::interop::marshal_as<std::string>(c);
		std::string ds = msclr::interop::marshal_as<std::string>(d);
		std::string es = msclr::interop::marshal_as<std::string>(g);
		std::string xs = msclr::interop::marshal_as<std::string>(x);

		person A;
		std::ostringstream s;
		s << GenId();


		std::string IIIDDD = s.str();
		A.enter(IIIDDD, as, bs, xs, cs, ds, es);
		SortAndInsert(A);
		std::string fi = adm + ".txt";
		WriteTOFile(ppl, fi);
		ppl.clear();
		int k=LoadData(ppl, fi);
		if (k == 123)
		{
			MessageBox::Show("Something Went Wrong", "Database");
		}
		else {
			MessageBox::Show("SuccessFully Added" + a, "Database");

		}
		Sname->Clear();
		Fname->Clear();
		Mob->Clear();
		addrs->Clear();

		int km=findIndex(IIIDDD);
		View_id = ppl[km];
		view ^ abc = gcnew view;
		abc->Show();
	}

	//Remove a person
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ a = RemoveId->Text;
		std::string as = msclr::interop::marshal_as<std::string>(a);
		int abc=findIndex(as);
		if (abc != -124)
		{
			String^ str1 = gcnew String(ppl[abc].GName().c_str());
			String^ str2 = gcnew String(ppl[abc].GId().c_str());
			String^ str3 = gcnew String(ppl[abc].Gfname().c_str());
			//String^ str4 = gcnew String(ppl[abc].Gmob().c_str());
			String^ str5 = gcnew String(ppl[abc].Gdob().c_str());

			if (MessageBox::Show("Are you Sure, You want to remove the following" + "\ID: "+ str2 + "\nName: " + str1 + "\nFathers Name: " + str3+ "\nDOB: " + str5+"?", "Database", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				ppl.erase(ppl.begin() + abc );
				std::string fi = adm + ".txt";
				WriteTOFile(ppl, fi);
				ppl.clear();
				int k = LoadData(ppl, fi);
				if (k == 123)
				{
					MessageBox::Show("Something Went Wrong", "Database");
				}
				else MessageBox::Show("Operation Completed!", "Database");
			}
		}
		else
		{
			MessageBox::Show("Invalid Id ", "Database");
		}
	}

			 //Edit details
	private: System::Void Edit_Click(System::Object^  sender, System::EventArgs^  e) {
		/*
		EId
		Ename
		Efname
		Emob
		Eadd
		Edate
		Eooc*/
		if (Idselected)
		{
			String ^ x = EId->Text;
			String^ a = Ename->Text;
			String^ b = Efname->Text;
			String^ c = Emob->Text;
			String^ d = Eadd->Text;
			String^ k = Edate->Text;
			String^ f = Eooc->Text;


			std::string as = msclr::interop::marshal_as<std::string>(a);
			std::string bs = msclr::interop::marshal_as<std::string>(b);
			std::string cs = msclr::interop::marshal_as<std::string>(c);
			std::string ds = msclr::interop::marshal_as<std::string>(d);
			std::string es = msclr::interop::marshal_as<std::string>(k);
			std::string xs = msclr::interop::marshal_as<std::string>(x);
			std::string fs = msclr::interop::marshal_as<std::string>(f);

			person A;

			int key = findIndex(xs);
			if (key != -124)
			{
				ppl.erase(ppl.begin() + key);
					//GlobalId
				A.enter(globalID, as, bs, cs, ds, es, fs);
				SortAndInsert(A);
				std::string fi = adm + ".txt";
				WriteTOFile(ppl, fi);
				ppl.clear();
				int k = LoadData(ppl, fi);
				Idselected = false;
				if (k == 123)
				{
					MessageBox::Show("Something Went Wrong", "Database");
				}
				MessageBox::Show("Operation Completed!", "Database");

			}
			else
			{
				MessageBox::Show("Something Went Wrong!\n Please Try Again", "Database");
			}

		}
		else
		{
			MessageBox::Show("Please select a correct Id", "Database");
		}

	}
	private: System::Void getD_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ a = EId->Text;
		std::string as = msclr::interop::marshal_as<std::string>(a);
		int abc = findIndex(as);
		if (abc != -124)
		{
			globalID = as;
			int  key = abc;


			String^ str1 = gcnew String(ppl[abc].GName().c_str());
			String^ str2 = gcnew String(ppl[abc].Gfname().c_str());
			String^ str3 = gcnew String(ppl[abc].Gmob().c_str());
			String^ str4 = gcnew String(ppl[abc].Gadd().c_str());
			String^ str5 = gcnew String(ppl[abc].Gdob().c_str());
			String^ str6 = gcnew String(ppl[abc].Gocc().c_str());


			Ename->Text = str1;
			Efname->Text = str2;
			Emob->Text = str3;
			Eadd->Text = str4;
			Edate->Text = str5;
			Eooc->Text = str6;

			Idselected = true;
		}
		else
		{
			MessageBox::Show("Invalid Id ", "Database");
		}
	}
	private: System::Void rB1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		FindName->Show();
		SN->Show();
		//fl1->Hide();
		//fl2->Hide();
		FindMob->Hide();
		SMOB->Hide();
	}
	private: System::Void rB2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		//fl1->Hide();
		//fl2->Hide();
		FindName->Hide();
		SN->Hide();
		FindMob->Show();
		SMOB->Show();
	}
			 //find by Name clicked
	private: System::Void FindName_Click(System::Object^  sender, System::EventArgs^  e) {
		std::vector<person> Sresult;
		String ^ x = SN->Text;
		std::string xs = msclr::interop::marshal_as<std::string>(x);
		for (unsigned int i = 0; i < ppl.size(); i++)
		{
			if (ppl[i].GName() == xs)
			{
				Sresult.push_back(ppl[i]);
			}
		}
		if (Sresult.empty())
		{
			MessageBox::Show("No Result Found", "Database");
		}
		else
		{
			fl2->Hide();
			fl1->Show();
			ShowResultByName(Sresult);

		}
	}
	private: System::Void FindMob_Click(System::Object^  sender, System::EventArgs^  e) {
		std::vector<person> Sresult;
		String ^ x = SMOB->Text;
		std::string xs = msclr::interop::marshal_as<std::string>(x);
		for (unsigned int i = 0; i < ppl.size(); i++)
		{
			if (ppl[i].Gmob() == xs)
			{
				Sresult.push_back(ppl[i]);
			}
		}
		if (Sresult.empty())
		{
			MessageBox::Show("No result Found", "Database");
		}
		else
		{
			fl1->Hide();
			fl2->Show();
			ShowResultByMob(Sresult);
		}
	}
};
}
