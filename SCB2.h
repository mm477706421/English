

//SCB2.h
#include "passwordChange.h"
#include "BDC1.h"
#include <Windows.h>
#pragma once

namespace Login_Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// SCB2 摘要
	/// </summary>
	public ref class SCB2 : public System::Windows::Forms::Form
	{
	public:
		SCB2(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SCB2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ComboBox^  tianjiacbox;

	private: System::Windows::Forms::TextBox^  SCBtbox;

	private: System::Windows::Forms::TextBox^  outbox;

	private: System::Windows::Forms::TextBox^  inBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  SCBlabel;
	private: System::Windows::Forms::Button^  tianjiaCBbutton;



	private: System::Windows::Forms::Button^  tianjiafenzu;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  bianji;

	private: System::Windows::Forms::Button^  BJdelete;

	private: System::Windows::Forms::CheckedListBox^  BJbox;

	private: System::Windows::Forms::ListBox^  SCBlbox;
	private: System::Windows::Forms::Button^  tuichubianji;




	private: System::Windows::Forms::ComboBox^  SCBcbox2;

	private: System::Windows::Forms::ComboBox^  SCBcbox;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  Deletebutton;

	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  shanchu;




	private: System::Windows::Forms::Button^  tuichubianji2;



	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  qingkong;

	private: System::Windows::Forms::CheckedListBox^  historycBox;

	private: System::Windows::Forms::ListBox^  history;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Deletebutton = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->tianjiacbox = (gcnew System::Windows::Forms::ComboBox());
			this->SCBtbox = (gcnew System::Windows::Forms::TextBox());
			this->outbox = (gcnew System::Windows::Forms::TextBox());
			this->inBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SCBlabel = (gcnew System::Windows::Forms::Label());
			this->tianjiaCBbutton = (gcnew System::Windows::Forms::Button());
			this->tianjiafenzu = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bianji = (gcnew System::Windows::Forms::Button());
			this->BJdelete = (gcnew System::Windows::Forms::Button());
			this->BJbox = (gcnew System::Windows::Forms::CheckedListBox());
			this->SCBlbox = (gcnew System::Windows::Forms::ListBox());
			this->tuichubianji = (gcnew System::Windows::Forms::Button());
			this->SCBcbox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SCBcbox = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->shanchu = (gcnew System::Windows::Forms::Button());
			this->tuichubianji2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->qingkong = (gcnew System::Windows::Forms::Button());
			this->historycBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->history = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(359, 292);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->Deletebutton);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->tianjiacbox);
			this->tabPage1->Controls->Add(this->SCBtbox);
			this->tabPage1->Controls->Add(this->outbox);
			this->tabPage1->Controls->Add(this->inBox);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->SCBlabel);
			this->tabPage1->Controls->Add(this->tianjiaCBbutton);
			this->tabPage1->Controls->Add(this->tianjiafenzu);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(351, 266);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"查询";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(250, 200);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"开始测试";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SCB2::button6_Click);
			// 
			// Deletebutton
			// 
			this->Deletebutton->Location = System::Drawing::Point(177, 134);
			this->Deletebutton->Name = L"Deletebutton";
			this->Deletebutton->Size = System::Drawing::Size(45, 23);
			this->Deletebutton->TabIndex = 13;
			this->Deletebutton->Text = L"清空";
			this->Deletebutton->UseVisualStyleBackColor = true;
			this->Deletebutton->Click += gcnew System::EventHandler(this, &SCB2::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(177, 34);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(45, 23);
			this->button13->TabIndex = 12;
			this->button13->Text = L"清空";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &SCB2::button13_Click);
			// 
			// tianjiacbox
			// 
			this->tianjiacbox->FormattingEnabled = true;
			this->tianjiacbox->Location = System::Drawing::Point(66, 134);
			this->tianjiacbox->Name = L"tianjiacbox";
			this->tianjiacbox->Size = System::Drawing::Size(156, 20);
			this->tianjiacbox->TabIndex = 11;
			// 
			// SCBtbox
			// 
			this->SCBtbox->Location = System::Drawing::Point(66, 134);
			this->SCBtbox->Name = L"SCBtbox";
			this->SCBtbox->Size = System::Drawing::Size(156, 21);
			this->SCBtbox->TabIndex = 10;
			// 
			// outbox
			// 
			this->outbox->Location = System::Drawing::Point(66, 70);
			this->outbox->Name = L"outbox";
			this->outbox->Size = System::Drawing::Size(156, 21);
			this->outbox->TabIndex = 9;
			// 
			// inBox
			// 
			this->inBox->Location = System::Drawing::Point(66, 36);
			this->inBox->Name = L"inBox";
			this->inBox->Size = System::Drawing::Size(156, 21);
			this->inBox->TabIndex = 8;
			this->inBox->TextChanged += gcnew System::EventHandler(this, &SCB2::inBox_TextChanged);
			this->inBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SCB2::inBox_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 7;
			this->label3->Text = L"输入";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 6;
			this->label2->Text = L"结果";
			// 
			// SCBlabel
			// 
			this->SCBlabel->AutoSize = true;
			this->SCBlabel->Location = System::Drawing::Point(19, 133);
			this->SCBlabel->Name = L"SCBlabel";
			this->SCBlabel->Size = System::Drawing::Size(41, 12);
			this->SCBlabel->TabIndex = 5;
			this->SCBlabel->Text = L"生词本";
			// 
			// tianjiaCBbutton
			// 
			this->tianjiaCBbutton->AccessibleName = L"";
			this->tianjiaCBbutton->Location = System::Drawing::Point(250, 133);
			this->tianjiaCBbutton->Name = L"tianjiaCBbutton";
			this->tianjiaCBbutton->Size = System::Drawing::Size(75, 23);
			this->tianjiaCBbutton->TabIndex = 4;
			this->tianjiaCBbutton->Text = L"添加";
			this->tianjiaCBbutton->UseVisualStyleBackColor = true;
			this->tianjiaCBbutton->Click += gcnew System::EventHandler(this, &SCB2::tianjiaCBbutton_Click);
			// 
			// tianjiafenzu
			// 
			this->tianjiafenzu->Location = System::Drawing::Point(250, 134);
			this->tianjiafenzu->Name = L"tianjiafenzu";
			this->tianjiafenzu->Size = System::Drawing::Size(75, 23);
			this->tianjiafenzu->TabIndex = 3;
			this->tianjiafenzu->Text = L"添加分组";
			this->tianjiafenzu->UseVisualStyleBackColor = true;
			this->tianjiafenzu->Click += gcnew System::EventHandler(this, &SCB2::tianjiafenzu_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"添加生词本";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SCB2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SCB2::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->bianji);
			this->tabPage2->Controls->Add(this->BJdelete);
			this->tabPage2->Controls->Add(this->BJbox);
			this->tabPage2->Controls->Add(this->SCBlbox);
			this->tabPage2->Controls->Add(this->tuichubianji);
			this->tabPage2->Controls->Add(this->SCBcbox2);
			this->tabPage2->Controls->Add(this->SCBcbox);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(351, 266);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"生词本";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 7;
			this->label4->Text = L"生词本分组";
			// 
			// bianji
			// 
			this->bianji->Location = System::Drawing::Point(265, 223);
			this->bianji->Name = L"bianji";
			this->bianji->Size = System::Drawing::Size(75, 23);
			this->bianji->TabIndex = 6;
			this->bianji->Text = L"编辑";
			this->bianji->UseVisualStyleBackColor = true;
			this->bianji->Click += gcnew System::EventHandler(this, &SCB2::button7_Click);
			// 
			// BJdelete
			// 
			this->BJdelete->Location = System::Drawing::Point(265, 194);
			this->BJdelete->Name = L"BJdelete";
			this->BJdelete->Size = System::Drawing::Size(75, 23);
			this->BJdelete->TabIndex = 5;
			this->BJdelete->Text = L"删除";
			this->BJdelete->UseVisualStyleBackColor = true;
			this->BJdelete->Click += gcnew System::EventHandler(this, &SCB2::BJdelete_Click);
			// 
			// BJbox
			// 
			this->BJbox->FormattingEnabled = true;
			this->BJbox->Location = System::Drawing::Point(59, 50);
			this->BJbox->Name = L"BJbox";
			this->BJbox->Size = System::Drawing::Size(200, 196);
			this->BJbox->TabIndex = 4;
			// 
			// SCBlbox
			// 
			this->SCBlbox->FormattingEnabled = true;
			this->SCBlbox->ItemHeight = 12;
			this->SCBlbox->Location = System::Drawing::Point(59, 50);
			this->SCBlbox->Name = L"SCBlbox";
			this->SCBlbox->Size = System::Drawing::Size(200, 196);
			this->SCBlbox->TabIndex = 3;
			// 
			// tuichubianji
			// 
			this->tuichubianji->Location = System::Drawing::Point(265, 223);
			this->tuichubianji->Name = L"tuichubianji";
			this->tuichubianji->Size = System::Drawing::Size(75, 23);
			this->tuichubianji->TabIndex = 2;
			this->tuichubianji->Text = L"退出编辑";
			this->tuichubianji->UseVisualStyleBackColor = true;
			this->tuichubianji->Click += gcnew System::EventHandler(this, &SCB2::button5_Click);
			// 
			// SCBcbox2
			// 
			this->SCBcbox2->FormattingEnabled = true;
			this->SCBcbox2->Location = System::Drawing::Point(139, 24);
			this->SCBcbox2->Name = L"SCBcbox2";
			this->SCBcbox2->Size = System::Drawing::Size(121, 20);
			this->SCBcbox2->TabIndex = 1;
			this->SCBcbox2->SelectedIndexChanged += gcnew System::EventHandler(this, &SCB2::comboBox3_SelectedIndexChanged);
			// 
			// SCBcbox
			// 
			this->SCBcbox->FormattingEnabled = true;
			this->SCBcbox->Location = System::Drawing::Point(138, 21);
			this->SCBcbox->Name = L"SCBcbox";
			this->SCBcbox->Size = System::Drawing::Size(121, 20);
			this->SCBcbox->TabIndex = 0;
			this->SCBcbox->SelectedIndexChanged += gcnew System::EventHandler(this, &SCB2::SCBcbox_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->shanchu);
			this->tabPage3->Controls->Add(this->tuichubianji2);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->qingkong);
			this->tabPage3->Controls->Add(this->historycBox);
			this->tabPage3->Controls->Add(this->history);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(351, 266);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"历史记录";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"编辑";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SCB2::button3_Click);
			// 
			// shanchu
			// 
			this->shanchu->Location = System::Drawing::Point(136, 228);
			this->shanchu->Name = L"shanchu";
			this->shanchu->Size = System::Drawing::Size(50, 23);
			this->shanchu->TabIndex = 6;
			this->shanchu->Text = L"删除";
			this->shanchu->UseVisualStyleBackColor = true;
			this->shanchu->Click += gcnew System::EventHandler(this, &SCB2::shanchu_Click);
			// 
			// tuichubianji2
			// 
			this->tuichubianji2->Location = System::Drawing::Point(45, 228);
			this->tuichubianji2->Name = L"tuichubianji2";
			this->tuichubianji2->Size = System::Drawing::Size(75, 23);
			this->tuichubianji2->TabIndex = 4;
			this->tuichubianji2->Text = L"退出编辑";
			this->tuichubianji2->UseVisualStyleBackColor = true;
			this->tuichubianji2->Click += gcnew System::EventHandler(this, &SCB2::tuichubianji2_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(136, 228);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 23);
			this->button9->TabIndex = 3;
			this->button9->Text = L"排序";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &SCB2::button9_Click);
			// 
			// qingkong
			// 
			this->qingkong->Location = System::Drawing::Point(45, 228);
			this->qingkong->Name = L"qingkong";
			this->qingkong->Size = System::Drawing::Size(75, 23);
			this->qingkong->TabIndex = 2;
			this->qingkong->Text = L"清空";
			this->qingkong->UseVisualStyleBackColor = true;
			this->qingkong->Click += gcnew System::EventHandler(this, &SCB2::button8_Click);
			// 
			// historycBox
			// 
			this->historycBox->FormattingEnabled = true;
			this->historycBox->Location = System::Drawing::Point(45, 14);
			this->historycBox->Name = L"historycBox";
			this->historycBox->Size = System::Drawing::Size(222, 196);
			this->historycBox->TabIndex = 1;
			// 
			// history
			// 
			this->history->FormattingEnabled = true;
			this->history->ItemHeight = 12;
			this->history->Location = System::Drawing::Point(45, 14);
			this->history->Name = L"history";
			this->history->Size = System::Drawing::Size(222, 208);
			this->history->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(351, 266);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"账户管理";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(195, 95);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 34);
			this->button5->TabIndex = 1;
			this->button5->Text = L"注销";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SCB2::button5_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(69, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 34);
			this->button4->TabIndex = 0;
			this->button4->Text = L"修改密码";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SCB2::button4_Click);
			// 
			// SCB2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 298);
			this->Controls->Add(this->tabControl1);
			this->Name = L"SCB2";
			this->Text = L"SCB2";
			this->Load += gcnew System::EventHandler(this, &SCB2::SCB2_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {				 outbox->Clear();
				 if (inBox->Text == "")MessageBox::Show("重新输入","输入错误",MessageBoxButtons::OK);
				 else{

					 String^S = inBox->Text; //将输入框内容转换成字符串 
					 String^path1 = "E:\\课程设计\\测试词库.txt";
					 StreamReader^sr = gcnew StreamReader(path1);
					 int work = 0;
					 while (sr->Peek() >= 0){ if (S == sr->ReadLine()){ work = 1; break; } }
					 if (work)outbox->Text = sr->ReadLine();
					 sr->Close();
					 if (!work)MessageBox::Show("无法查询，重新输入", "错误", MessageBoxButtons::OK);
					 //历史记录
					 if (work){
						 String^path = "E:\\课程设计\\记录.txt";//文件路径
						 FileStream^fs = gcnew FileStream(path, FileMode::Append); //打开文件。若文件存在，则文件指针置于文件尾;若文件不存在则创建。
						 {StreamWriter^w = gcnew StreamWriter(fs);
						 w->WriteLine(S+outbox->Text);
						 w->Close();
						 fs->Close(); }//写入

						 history->Items->Clear();
						 history->Sorted = 0;//默认不按字母排序
						 sr = gcnew StreamReader(path);
						 while (sr->Peek() >= 0)history->Items->Add(sr->ReadLine());
						 sr->Close();

					 }
					 
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { if (inBox->Text == "")MessageBox::Show("重新输入", "输入错误", MessageBoxButtons::OK);
			 else{

				 String^S = inBox->Text; //将输入框内容转换成字符串 
				 String^path1 = "E:\\课程设计\\测试词库.txt";
				 StreamReader^sr = gcnew StreamReader(path1);
				 int work = 0;
				 while (sr->Peek() >= 0){ if (S == sr->ReadLine()){ work = 1; break; } }
				 if (work)outbox->Text = sr->ReadLine();
				 sr->Close();
				 if (!work)MessageBox::Show("无法查询，重新输入", "错误", MessageBoxButtons::OK);
				 if (work){
					 System::Windows::Forms::DialogResult result;//说明枚举变量
					 result = MessageBox::Show("是否添加分类", "单词本", MessageBoxButtons::YesNoCancel);
					 if (result == System::Windows::Forms::DialogResult::Yes)
					 {

						 SCBlabel->Show();
						 SCBtbox->Show();
						 tianjiafenzu->Show();
						 Deletebutton->Show();
						 SCBtbox->Select();//焦点

					 }
					 if (result == System::Windows::Forms::DialogResult::No){
						 SCBlabel->Show();
						 tianjiacbox->Show();
						 tianjiaCBbutton->Show();
						 tianjiacbox->Items->Clear();
						 String^path = "E:\\课程设计\\生词本\\分组.txt";//文件路径
						 sr = gcnew StreamReader(path);
						 while (sr->Peek() >= 0)
						 {

							 tianjiacbox->Items->Add(sr->ReadLine());
						 }
						 sr->Close();

					 }

				 }
			 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
 BJbox->Items->Clear();
			 String^name = SCBcbox2->Text;
			 String^path = "E:\\课程设计\\生词本\\" + name + ".txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 while (sr->Peek() >= 0)
			 {

				 BJbox->Items->Add(sr->ReadLine(),CheckState::Unchecked);
			 }
			 sr->Close();		 }
private: System::Void SCBcbox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {	 SCBlbox->Items->Clear();
			 String^name = SCBcbox->Text;
			 String^path = "E:\\课程设计\\生词本\\" + name + ".txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 while (sr->Peek() >= 0)
			 {

				 SCBlbox->Items->Add(sr->ReadLine());
			 }
			 sr->Close();
		 }
private: System::Void SCB2_Load(System::Object^  sender, System::EventArgs^  e) {
			 inBox->Select();
			 SCBcbox2->Hide();
			 tianjiafenzu->Hide();
			 SCBlabel->Hide();
			 SCBtbox->Hide();
			 tianjiacbox->Hide();
			 tianjiaCBbutton->Hide();
			 Deletebutton->Hide();
			 tuichubianji->Hide();
			 BJbox->Hide();
			 BJdelete->Hide();
			 historycBox->Hide();
			 tuichubianji2->Hide();
			 shanchu->Hide();
			
			 String^path = "E:\\课程设计\\生词本\\分组.txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 String^a;
			 while (sr->Peek() >= 0)
			 {
				 a = sr->ReadLine();
				 SCBcbox->Items->Add(a);
				 SCBcbox2->Items->Add(a);
			 }
			 sr->Close();
			SCBlbox->Items->Clear();
			BJbox->Items->Clear();
			history->Items->Clear();
			history->Sorted = 0;//默认不按字母排序
			sr = gcnew StreamReader("E:\\课程设计\\记录.txt");
			while (sr->Peek() >= 0)history->Items->Add(sr->ReadLine());
			sr->Close();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) { history->Sorted = 1;
		 }
private: System::Void shanchu_Click(System::Object^  sender, System::EventArgs^  e) {
 String^path = "E:\\课程设计\\记录.txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 FileStream^fs = gcnew FileStream("E:\\课程设计\\缓冲文件\\记录.txt", FileMode::Append);
			 StreamWriter^w = gcnew StreamWriter(fs);
			 int I = historycBox->Items->Count - 1;
			 while (sr->Peek() >= 0)
			 {
				 String ^m = sr->ReadLine();
				 int work = 1;
				 for (int i = 0; i <historycBox->CheckedItems->Count; i++)
				 {
					 if (m == historycBox->CheckedItems[i]->ToString())
					 {
						 historycBox->Items->Remove(historycBox->CheckedItems[i]);
						 work = 0;
					 }
				 }
				 if (work)w->WriteLine(m);
			 }
			 sr->Close();
			 w->Close();
			 fs->Close();
			 File::Delete(path);
			 StreamReader^sr2 = gcnew StreamReader("E:\\课程设计\\缓冲文件\\记录.txt");
			 FileStream^fs2 = gcnew FileStream(path, FileMode::Append);
			 StreamWriter^w2 = gcnew StreamWriter(fs2);
			 while (sr2->Peek() >= 0){ w2->WriteLine(sr2->ReadLine()); }
			 sr2->Close();
			 w2->Close();
			 fs2->Close();
			 File::Delete("E:\\课程设计\\缓冲文件\\记录.txt");
			
			 historycBox->Items->Clear();
			 sr = gcnew StreamReader(path);
			 while (sr->Peek() >= 0)
			 {

				 historycBox->Items->Add(sr->ReadLine(), CheckState::Unchecked);
			 }
			 sr->Close();		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) { history->Items->Clear();
			 File::Delete("E:\\课程设计\\记录.txt");
			 FileStream^s = gcnew FileStream("E:\\课程设计\\记录.txt", FileMode::Create);
			 s->Close();
		 }
private: System::Void inBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) { if (e->KeyCode == Keys::Enter)
			 {
				 outbox->Clear();
				 if (inBox->Text == "")MessageBox::Show("重新输入", "输入错误", MessageBoxButtons::OK);
				 else{

					 String^S = inBox->Text; //将输入框内容转换成字符串 
					 String^path1 = "E:\\课程设计\\测试词库.txt";
					 StreamReader^sr = gcnew StreamReader(path1);
					 int work = 0;
					 while (sr->Peek() >= 0){ if (S == sr->ReadLine()){ work = 1; break; } }
					 if (work)outbox->Text = sr->ReadLine();
					 sr->Close();
					 if (!work)MessageBox::Show("无法查询，重新输入", "错误", MessageBoxButtons::OK);
					 //历史记录
					 if (work){
						 String^path = "E:\\课程设计\\记录.txt";//文件路径


						 FileStream^fs = gcnew FileStream(path, FileMode::Append); //打开文件。若文件存在，则文件指针置于文件尾;若文件不存在则创建。
						 {StreamWriter^w = gcnew StreamWriter(fs);

						 w->WriteLine(S + outbox->Text);
						 w->Close();
						 fs->Close(); }//写入

						 history->Items->Clear();
						 history->Sorted = 0;//默认不按字母排序
						 sr = gcnew StreamReader(path);
						 while (sr->Peek() >= 0)history->Items->Add(sr->ReadLine());
						 sr->Close();

					 }

				 }
			 }
		 }
private: System::Void tianjiafenzu_Click(System::Object^  sender, System::EventArgs^  e) { if (SCBtbox->Text == "")MessageBox::Show("重新输入", "输入错误", MessageBoxButtons::OK);
				 else{
					 //记录生词本分组目录
					 String^path = "E:\\课程设计\\生词本\\分组.txt";//文件路径
					 String^name = SCBtbox->Text; //将输入框内容转换成字符串 
					 StreamReader^sr = gcnew StreamReader(path);
					 bool m = 1;
					 while (sr->Peek() >= 0)
					 if (name == sr->ReadLine())m = 0;
					 sr->Close();
					 delete sr;
					 if (!m)MessageBox::Show("分组已存在", "错误", MessageBoxButtons::OK);
					 else{
						 FileStream^fs = gcnew FileStream(path, FileMode::Append); //打开文件。若文件存在，则文件指针置于文件尾;若文件不存在则创建。
						 //写入
						 StreamWriter^w = gcnew StreamWriter(fs);
						 w->WriteLine(name);
						 w->Close();
						 fs->Close();
						 path = "E:\\课程设计\\生词本\\" + name + ".txt";//文件路径	
						 FileStream^s = gcnew FileStream(path, FileMode::Create);
						 s->Close();
					 }	
						 path = "E:\\课程设计\\生词本\\" + name + ".txt";//文件路径	
						 String^S = inBox->Text; //将输入框内容转换成字符串 
						 sr = gcnew StreamReader(path);
						 StreamReader^sr1 = gcnew StreamReader("E:\\课程设计\\测试词库.txt");
						 while (sr1->Peek() >= 0) if (S == sr1->ReadLine()) break;
						 String^a = S + sr1->ReadLine();//让a的格式为英文+中文
						 sr1->Close();
						int work = 1;
						 
						while (sr->Peek() >= 0)
						 {
							
							if (a ==  sr->ReadLine()){ work = 0; MessageBox::Show("已添加至该分组", "", MessageBoxButtons::OK); break; }
						 }
						 sr->Close();
						 if (work)
						 {
						 FileStream^fs2 = gcnew FileStream(path, FileMode::Append); //打开文件。若文件存在，则文件指针置于文件尾;若文件不存在则创
						 StreamWriter^w = gcnew StreamWriter(fs2); w->WriteLine(a); w->Close(); fs2->Close();
						 }





						 SCBlabel->Hide();
						 SCBtbox->Clear();
						 SCBtbox->Hide();
						 tianjiafenzu->Hide();
						 Deletebutton->Hide();
						 

						 //更新生词本界面分组框
						 SCBcbox->Items->Clear();
						 SCBcbox2->Items->Clear();
						 sr = gcnew StreamReader("E:\\课程设计\\生词本\\分组.txt");
						
						 while (sr->Peek() >= 0)
						 {
							 a = sr->ReadLine();
							 SCBcbox->Items->Add(a);
							 SCBcbox2->Items->Add(a);
							 tianjiacbox->Items->Add(a);
						 }
						 sr->Close();
					
					 
				 }
		 }
private: System::Void tianjiaCBbutton_Click(System::Object^  sender, System::EventArgs^  e) {String^name;
			 name = tianjiacbox->Text;
			 String^path = "E:\\课程设计\\生词本\\" + name + ".txt";//文件路径
				 String^S = inBox->Text; //将输入框内容转换成字符串 
				 StreamReader^sr = gcnew StreamReader(path);
				 StreamReader^sr1 = gcnew StreamReader("E:\\课程设计\\测试词库.txt");
				 while (sr1->Peek() >= 0) if (S == sr1->ReadLine()) break; 
				 String^a = S + sr1->ReadLine();//让a的格式为英文+中文
				 sr1->Close();
				 bool work = 1;
				 while (sr->Peek() >= 0)
				 {
					 if (a == sr->ReadLine()){ work = 0; MessageBox::Show("已添加至该分组", "", MessageBoxButtons::OK); break; }
				 }
				 sr->Close();
				 if (work){ FileStream^fs = gcnew FileStream(path, FileMode::Append); //打开文件。若文件存在，则文件指针置于文件尾;若文件不存在则创建。
				 StreamWriter^w = gcnew StreamWriter(fs); w->WriteLine(a); w->Close();
				 }



				 SCBlabel->Hide();
				 tianjiacbox->Hide();
				 tianjiaCBbutton->Hide();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 SCBlbox->Items->Clear();
			 String^name = SCBcbox->Text;
			 String^path = "E:\\课程设计\\生词本\\" + name + ".txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 while (sr->Peek() >= 0)
			 {

				 SCBlbox->Items->Add(sr->ReadLine());
			 }
			 sr->Close();
			 SCBlbox->Show();
			 bianji->Show();
			 BJbox->Hide();
			 BJbox->Items->Clear();
			 BJdelete->Hide();
			 tuichubianji->Hide();
			 SCBcbox2->Hide();
			 SCBcbox->Show();
		 }
private: System::Void BJdelete_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^name = SCBcbox2->Text;
			 String^path = "E:\\课程设计\\生词本\\" + name + ".txt";	
			 StreamReader^sr = gcnew StreamReader(path);
				 FileStream^fs = gcnew FileStream("E:\\课程设计\\缓冲文件\\" + name + ".txt", FileMode::Append);
				 StreamWriter^w = gcnew StreamWriter(fs);
				 int I = BJbox->Items->Count-1;
				 while (sr->Peek() >= 0)
				 {
					 String ^m = sr->ReadLine();
					 int work = 1;
					 for (int i = 0; i <BJbox->CheckedItems->Count; i++)
					 {
						 if (m == BJbox->CheckedItems[i]->ToString())
						 {
							 BJbox->Items->Remove(BJbox->CheckedItems[i]);
							 work = 0;
					     }
					 }
					 if (work)w->WriteLine(m);		
				 } 
				 sr->Close(); 
				 w->Close(); 
				 fs->Close(); 
					 File::Delete(path);
					 StreamReader^sr2 = gcnew StreamReader("E:\\课程设计\\缓冲文件\\" + name + ".txt");
					 FileStream^fs2 = gcnew FileStream(path, FileMode::Append);
					 StreamWriter^w2 = gcnew StreamWriter(fs2);
					 while (sr2->Peek() >= 0){ w2->WriteLine(sr2->ReadLine()); }
					 sr2->Close(); 
					w2->Close(); 
					 fs2->Close(); 
					 File::Delete("E:\\课程设计\\缓冲文件\\" + name + ".txt");
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 historycBox->Show();
			 SCBcbox->Hide();
			 SCBcbox2->Show();
			 SCBlbox->Hide();
			 bianji->Hide();
			
			 BJbox->Show();
			 BJdelete->Show();
			 tuichubianji->Show(); 
			 SCBcbox2->Text = SCBcbox->Text;
			 String^name = SCBcbox2->Text;
			 String^path = "E:\\课程设计\\生词本\\" + name + ".txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 BJbox->Items->Clear(); 
			 while (sr->Peek() >= 0)
			 {

				 BJbox->Items->Add(sr->ReadLine(), CheckState::Unchecked);
			 }
			 sr->Close(); 
		 
		
			 
		 }
private: System::Void tuichubianji2_Click(System::Object^  sender, System::EventArgs^  e) { tuichubianji2->Hide();
			 qingkong->Show();
			 shanchu->Hide();
			 historycBox->Hide();
			 history->Items->Clear(); 
			 history->Show();
			 history->Sorted = 0;//默认不按字母排序
			StreamReader ^sr = gcnew StreamReader("E:\\课程设计\\记录.txt");
			 while (sr->Peek() >= 0)history->Items->Add(sr->ReadLine());
			 sr->Close();
		 }
private: System::Void inBox_TextChanged(System::Object^  sender, System::EventArgs^  e) { outbox->Clear();
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { 
			 tuichubianji2->Show();
			 shanchu->Show();
			 qingkong->Hide();
			 history->Hide();
			 historycBox->Items->Clear();
			 historycBox->Show();
			 String^path = "E:\\课程设计\\记录.txt";
			 StreamReader^sr = gcnew StreamReader(path);
			 while (sr->Peek() >= 0)
			 {

				 historycBox->Items->Add(sr->ReadLine(), CheckState::Unchecked);
			 }
			 sr->Close();
		 }
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {			 
			 passwordChange^ rf = gcnew passwordChange();
			 rf->StartPosition = FormStartPosition::CenterScreen;
			 rf->TopMost = true;
			 rf->Show();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 BDC1^f1=gcnew BDC1();
			 f1->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f1->TopMost=true;
			 f1->Opacity=100;
			 f1->Show();
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 inBox->Clear();
		 }
};
}
