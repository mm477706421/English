


//BDC3
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
	/// BDC3 摘要
	/// </summary>
	public ref class BDC3 : public System::Windows::Forms::Form
	{
	public:
		BDC3(void)
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
		~BDC3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  t1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(353, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"提示";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &BDC3::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(487, 275);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"确定";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BDC3::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(217, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"返回主界面";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BDC3::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BDC3::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(27, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(626, 41);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"请根据左边的中文释义在右边方框中将单词拼写出来,点击确认查看结果";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->richTextBox2->Location = System::Drawing::Point(376, 119);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(199, 96);
			this->richTextBox2->TabIndex = 8;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(37, 124);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(255, 96);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// t1
			// 
			this->t1->Location = System::Drawing::Point(415, 92);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(100, 21);
			this->t1->TabIndex = 14;
			// 
			// BDC3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 329);
			this->Controls->Add(this->t1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"BDC3";
			this->Text = L"BDC3";
			this->Load += gcnew System::EventHandler(this, &BDC3::BDC3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			int tmp;
			
			 
		     Int16 counter = 0;
                        
					array<System::String ^,2>^englishchinese=gcnew array<System::String ^,2>(110,2);
	
							FileStream^fs=gcnew FileStream("D:\\Documents\\Visual Studio 2010\\Projects\\ciku.txt.txt",FileMode::Open);
					
				StreamReader^sr=gcnew StreamReader(fs);
						 
						
					for(counter=0;sr->Peek() >=0;counter++)
                  { 
					
					englishchinese[counter,0]=sr->ReadLine();
				   
				englishchinese[counter,1]=sr->ReadLine();}
				sr->Close();	
				fs->Close();
					
			  srand(int(time(0)));

						do
					{
					  tmp=rand()%(englishchinese->GetLength(0));
					 }
					   while(tmp>52);
					  
			   richTextBox1->Text=englishchinese [tmp,1];
			t1->Text=englishchinese [tmp,0];
			 richTextBox2->Clear();
			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			   
			 if(richTextBox2->Text==t1->Text)
			 {
				MessageBox::Show("回答正确","继续加油",
					MessageBoxButtons::OK,MessageBoxIcon::None);
				}
			 else {MessageBox::Show("答案错误","输入答案错误",
				 MessageBoxButtons::OK,MessageBoxIcon::Exclamation);}
				
				
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			
				    MessageBox::Show(t1->Text,"提示",
					MessageBoxButtons::OK,MessageBoxIcon::None);}
				
			 

		 private: System::Void BDC3_Load(System::Object^  sender, System::EventArgs^  e) {
					  t1->Hide();
				  }

};
}
