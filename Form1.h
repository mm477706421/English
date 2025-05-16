#pragma once

#include "SCB2.h"
#include "registerFram.h"
#include "passwordChange.h"
#include "stdafx.h" 

#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#define N 100

using namespace std;

namespace Login_Window 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			this->StartPosition=FormStartPosition::CenterScreen;
		
			
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  usernameText;
	private: System::Windows::Forms::TextBox^  passwordText;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;








	private:
		/// <summary>
		/// 必需的设计器变量
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法- 不要
		/// 使用代码编括器修改此方法的内容
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->usernameText = (gcnew System::Windows::Forms::TextBox());
			this->passwordText = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(158, 266);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"登陆";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(301, 266);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"注册";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// usernameText
			// 
			this->usernameText->Font = (gcnew System::Drawing::Font(L"宋?体?", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->usernameText->Location = System::Drawing::Point(205, 123);
			this->usernameText->Margin = System::Windows::Forms::Padding(2);
			this->usernameText->Name = L"usernameText";
			this->usernameText->Size = System::Drawing::Size(193, 26);
			this->usernameText->TabIndex = 3;
			this->usernameText->TextChanged += gcnew System::EventHandler(this, &Form1::usernameText_TextChanged);
			// 
			// passwordText
			// 
			this->passwordText->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->passwordText->Location = System::Drawing::Point(205, 196);
			this->passwordText->Margin = System::Windows::Forms::Padding(2);
			this->passwordText->Name = L"passwordText";
			this->passwordText->PasswordChar = '*';
			this->passwordText->Size = System::Drawing::Size(193, 26);
			this->passwordText->TabIndex = 4;
			this->passwordText->TextChanged += gcnew System::EventHandler(this, &Form1::passwordText_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋?体?", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(97, 123);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(76, 26);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"账号";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Click += gcnew System::EventHandler(this, &Form1::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋?体?", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(97, 196);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(76, 26);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"密码";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋?体?", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(92, 58);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 30);
			this->label1->TabIndex = 7;
			this->label1->Text = L"欢迎使用本英语学习软件！";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(461, -12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 386);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 373);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->passwordText);
			this->Controls->Add(this->usernameText);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				String^ usernameC = usernameText->Text;				
				String^ passwordC = passwordText->Text;	
				string username = marshal_as<std::string>(usernameC);
				string password = marshal_as<std::string>(passwordC);
				string usernameStr = read("E://ProgrammeDesign/username.txt");
				vector<string> usernameArray = split(usernameStr, ",");

				for (unsigned int i = 0; i < usernameArray.size(); )
				{
					if (decode(usernameArray[i]) == username)
					{
						if (decode(usernameArray[i + 1]) == password)
						{
							MessageBox::Show("登陆成功!","",MessageBoxButtons::OK,MessageBoxIcon::None);
							SCB2^ rf = gcnew SCB2();
			                rf->StartPosition = FormStartPosition::CenterScreen;
			                rf->TopMost = true;
			                rf->Show();
							write("E://ProgrammeDesign/passwordChange.txt",username);
							Hide();
							return;
                        }
					}
					i += 2;
                }
				MessageBox::Show("账号密码不存在!","",MessageBoxButtons::OK,MessageBoxIcon::None);
			 }

private: System::Void passwordText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 registerFram^ rf = gcnew registerFram();
			 rf->StartPosition = FormStartPosition::CenterScreen;
			 rf->TopMost = true;
			 rf->Show();
		 }
private: System::Void usernameText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

public: string read(string url)
		{
			char buf[1024];
			string message = "";
			ifstream infile;
			infile.open(url);
			if(infile.is_open())
			{
				while(infile.good()&&!infile.eof())
				{
					memset(buf,0,1024);
					infile.getline(buf,1024);
					message += buf;
				}
				infile.close();
			}
			return message;
		}

		//根据n，将m拆成数组（拆分txt内文件成数组）
public: vector<string> split(const string &m , const string &n)
		 {
			vector<string> elems;
			size_t pos = 0;
			size_t len = m.length();
			size_t n_len = n.length();
			if (n_len == 0) 
				return elems;
			while (pos < len)
			{
				int find_pos = m.find(n , pos);
				if (find_pos < 0)
				{
					elems.push_back(m.substr(pos , len - pos));
					break;
				}
				elems.push_back(m.substr(pos , find_pos - pos));
				pos = find_pos + n_len;
			}
			return elems;
		}
public: void write(string url,string str)
		{
			char* c;
			const int len = str.length();
			c = new char[len+1];
			strcpy(c,str.c_str());
			ofstream f;
			f.open(url,ios::out);
			f.write(c,strlen(c));
			f.close();
		}
public: string decode(string s)
		{
			char message[N];
	        unsigned int i;
	        for (i = 0; i < s.length(); i++)
				message[i] = s[i];
			message[i] = '\0';
			int key[10] = { 1,2,3,4,5,6,7,8,9,0 };
			for (unsigned int i = 0; i<s.size(); i++)
				message[i] -= key[i % 10];
			string code(message);
			return code;
		}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}