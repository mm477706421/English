
//BDC5
#include <iostream>
#include <ctime>
#include<cstdlib>
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
	/// BDC5 摘要
	/// </summary>
	public ref class BDC5 : public System::Windows::Forms::Form
	{
	public:
		BDC5(void)
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
		~BDC5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  r5;


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->r5 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"返回主界面";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BDC5::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BDC5::button1_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton4->Location = System::Drawing::Point(457, 192);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 29;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &BDC5::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton3->Location = System::Drawing::Point(457, 159);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 28;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &BDC5::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(457, 122);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 27;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &BDC5::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(457, 85);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 26;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &BDC5::radioButton1_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(34, 82);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(417, 130);
			this->richTextBox1->TabIndex = 25;
			this->richTextBox1->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(34, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(597, 45);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"本测试全部为选择题，在右边选项中选择合适的单词填入空格中";
			// 
			// r5
			// 
			this->r5->AutoSize = true;
			this->r5->Location = System::Drawing::Point(457, 220);
			this->r5->Name = L"r5";
			this->r5->Size = System::Drawing::Size(95, 16);
			this->r5->TabIndex = 32;
			this->r5->TabStop = true;
			this->r5->Text = L"radioButton5";
			this->r5->UseVisualStyleBackColor = true;
			// 
			// BDC5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 329);
			this->Controls->Add(this->r5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BDC5";
			this->Text = L"BDC5";
			this->Load += gcnew System::EventHandler(this, &BDC5::BDC5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

 Int16 counter = 0;
                        
						 array<System::String ^,2>^englishchinese=gcnew array<System::String ^,2>(110,6);
                         
                     String^path="D:\\Documents\\Visual Studio 2010\\Projects\\tiku.txt";
					
							FileStream^fs=gcnew FileStream(path,FileMode::Open);
					
				StreamReader^sr=gcnew StreamReader(fs);
					
					for(counter=0;sr->Peek() >=0;counter++)
                  { 
					englishchinese[counter,0]=sr->ReadLine();
				    englishchinese[counter,1]=sr->ReadLine();
					englishchinese[counter,2]=sr->ReadLine();
					englishchinese[counter,3]=sr->ReadLine();
					englishchinese[counter,4]=sr->ReadLine();
					englishchinese[counter,5]=sr->ReadLine();}
				sr->Close();	
				fs->Close();
					
				 
				  int tmp;
					srand(int(time(0)));
					
						do
					{
					  tmp=rand()%(englishchinese->GetLength(0));
					 }
					   while(tmp>4);
					       radioButton1->Text=englishchinese[tmp,2];
						   radioButton2->Text=englishchinese[tmp,3];
					       radioButton3->Text=englishchinese[tmp,4];
					       radioButton4->Text=englishchinese[tmp,5];
                     richTextBox1->Text= englishchinese [tmp,0];
					r5->Text=englishchinese [tmp,1];			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			   this->Close();	
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(radioButton1->Checked)
				 {if(radioButton1->Text==r5->Text)
				       MessageBox::Show("回答正确","继续加油",
				       MessageBoxButtons::OK,MessageBoxIcon::None); 
			      else MessageBox::Show("答案错误","输入答案错误",
				       MessageBoxButtons::OK,MessageBoxIcon::Exclamation);}
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(radioButton2->Checked)
				 {if(radioButton2->Text==r5->Text)
				       MessageBox::Show("回答正确","继续加油",
				       MessageBoxButtons::OK,MessageBoxIcon::None); 
			      else MessageBox::Show("答案错误","输入答案错误",
				       MessageBoxButtons::OK,MessageBoxIcon::Exclamation);}
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(radioButton3->Checked)
				 {if(radioButton3->Text==r5->Text)
				       MessageBox::Show("回答正确","继续加油",
				       MessageBoxButtons::OK,MessageBoxIcon::None); 
			      else MessageBox::Show("答案错误","输入答案错误",
				       MessageBoxButtons::OK,MessageBoxIcon::Exclamation);}
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			   if(radioButton4->Checked)
				 {if(radioButton4->Text==r5->Text)
				       MessageBox::Show("回答正确","继续加油",
				       MessageBoxButtons::OK,MessageBoxIcon::None); 
			      else MessageBox::Show("答案错误","输入答案错误",
				       MessageBoxButtons::OK,MessageBoxIcon::Exclamation);}
		 }
private: System::Void BDC5_Load(System::Object^  sender, System::EventArgs^  e) {
			 r5->Hide();
		 }
};
}