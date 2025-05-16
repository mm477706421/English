//Form1.h
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

//passwordChange.h

#pragma once

#include "stdafx.h" 
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#define N 100

using namespace std;

namespace Login_Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// passwordChange 摘要
	/// </summary>
	public ref class passwordChange : public System::Windows::Forms::Form
	{
	public:
		passwordChange(void)
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
		~passwordChange()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  usernameText;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  passwordText1;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  passwordText2;

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  passwordText3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected: 

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->usernameText = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->passwordText1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->passwordText2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->passwordText3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(126, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(96, 28);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"账号";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// usernameText
			// 
			this->usernameText->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->usernameText->Location = System::Drawing::Point(241, 72);
			this->usernameText->Name = L"usernameText";
			this->usernameText->ReadOnly = true;
			this->usernameText->Size = System::Drawing::Size(218, 28);
			this->usernameText->TabIndex = 1;
			this->usernameText->TextChanged += gcnew System::EventHandler(this, &passwordChange::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(126, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(95, 28);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"原密码";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passwordText1
			// 
			this->passwordText1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->passwordText1->Location = System::Drawing::Point(242, 130);
			this->passwordText1->Name = L"passwordText1";
			this->passwordText1->PasswordChar = '*';
			this->passwordText1->Size = System::Drawing::Size(217, 28);
			this->passwordText1->TabIndex = 3;
			this->passwordText1->TextChanged += gcnew System::EventHandler(this, &passwordChange::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(127, 185);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(93, 28);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"修改密码";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passwordText2
			// 
			this->passwordText2->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->passwordText2->Location = System::Drawing::Point(242, 187);
			this->passwordText2->Name = L"passwordText2";
			this->passwordText2->PasswordChar = '*';
			this->passwordText2->Size = System::Drawing::Size(217, 28);
			this->passwordText2->TabIndex = 5;
			this->passwordText2->TextChanged += gcnew System::EventHandler(this, &passwordChange::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(126, 237);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(95, 28);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"确认密码";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passwordText3
			// 
			this->passwordText3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->passwordText3->Location = System::Drawing::Point(242, 237);
			this->passwordText3->Name = L"passwordText3";
			this->passwordText3->PasswordChar = '*';
			this->passwordText3->Size = System::Drawing::Size(216, 28);
			this->passwordText3->TabIndex = 7;
			this->passwordText3->TextChanged += gcnew System::EventHandler(this, &passwordChange::textBox8_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"确认";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &passwordChange::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(329, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 33);
			this->button2->TabIndex = 9;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &passwordChange::button2_Click);
			// 
			// passwordChange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 377);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->passwordText3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->passwordText2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->passwordText1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->usernameText);
			this->Controls->Add(this->textBox1);
			this->Name = L"passwordChange";
			this->Text = L"passwordChange";
			this->Load += gcnew System::EventHandler(this, &passwordChange::passwordChange_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 string usernameStr = read("E://ProgrammeDesign/username.txt");
			 vector<string> usernameArray = split(usernameStr, ",");
			 string username = read("E://ProgrammeDesign/passwordChange.txt");
			 String^ passwordC = passwordText1->Text;
			 string password = marshal_as<std::string>(passwordC);

			 for (unsigned int i = 0; i < usernameArray.size(); )
				{
					if (decode(usernameArray[i]) == username)
					{
						if (decode(usernameArray[i + 1]) != password)
						{
							MessageBox::Show("原密码错误!","",MessageBoxButtons::OK,MessageBoxIcon::None);
                        }
						else
						{
							String^ passwordC1 = passwordText2->Text;
							String^ passwordC2 = passwordText3->Text;
							string password1 = marshal_as<std::string>(passwordC1);
							string password2 = marshal_as<std::string>(passwordC2);
							if (password1 != password2)
							{
								MessageBox::Show("两次密码不同!","",MessageBoxButtons::OK,MessageBoxIcon::None);
							}
							if (password1 == password2)
							{
								string newusername;
								for (unsigned int j = 0; j < i+1; j++)
								{
									if (newusername != "")
									{
										newusername += "," + usernameArray[j];
									}
									else
									{
										newusername += usernameArray[j];
									}
								}
								newusername +="," + encode(password1);
								for (unsigned int j = i+2; j < usernameArray.size(); j++)
								{
									if (newusername != "")
									{
										newusername += "," + usernameArray[j];
									}
									else
									{
										newusername += usernameArray[j];
									}
								}
								//所以修改密码成功了吗？String^ code = marshal_as<String^>(newusername);
								//成功了喵喵喵！MessageBox::Show(code,"",MessageBoxButtons::OK,MessageBoxIcon::None);
								MessageBox::Show("密码修改成功!","",MessageBoxButtons::OK,MessageBoxIcon::None);
								write("E://ProgrammeDesign/username.txt", newusername);
								this->Close();
							}
						}
					}
					i += 2;
                }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
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
public: string encode(string s)
		{
			char message[N];
	        unsigned int i;
	        for (i = 0; i < s.length(); i++)
				message[i] = s[i];
			message[i] = '\0';
			int key[10] = { 1,2,3,4,5,6,7,8,9,0 };
			for (unsigned int i = 0; i<s.size(); i++)
				message[i] += key[i % 10];
			string code(message);
			return code;
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
private: System::Void passwordChange_Load(System::Object^  sender, System::EventArgs^  e) {
			 string usernameStr = read("E://ProgrammeDesign/passwordChange.txt");
			 String^ username = marshal_as<String^>(usernameStr);
			 usernameText->Text = username;
		 }
};
}

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

//BDC1.h
#include <iostream>
#include <ctime>
#include<cstdlib>
#include"BDC2.h"
#include"BDC3.h"
#include"BDC4.h"
#include"BDC5.h"
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
	/// BDC1 摘要
	/// </summary>
	public ref class BDC1 : public System::Windows::Forms::Form
	{
	public:
		BDC1(void)
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
		~BDC1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button5;
	protected: 
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BDC1::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(562, 186);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"选词填空";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &BDC1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(390, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"中文选词";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &BDC1::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 203);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(583, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BDC1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(562, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"全拼练习";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BDC1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(390, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"英文选意";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BDC1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(401, 77);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(213, 45);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"您可选择四种方法测试";
			// 
			// BDC1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 329);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BDC1";
			this->Text = L"BDC1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 BDC2^f2=gcnew BDC2();
			 f2->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f2->TopMost=true;
			 f2->Opacity=100;
			 f2->Show();
			 
			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			BDC3^f3=gcnew BDC3();
			 f3->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f3->TopMost=true;
			 f3->Opacity=100;
			 f3->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
             BDC4^f4=gcnew BDC4();
			 f4->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f4->TopMost=true;
			 f4->Opacity=100;
			 f4->Show();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  BDC5^f5=gcnew BDC5();
			 f5->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f5->TopMost=true;
			 f5->Opacity=100;
			 f5->Show();
		 }
};
}

//BDC2
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
	/// BDC2 摘要
	/// </summary>
	public ref class BDC2 : public System::Windows::Forms::Form
	{
	public:
		BDC2(void)
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
		~BDC2()
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
			this->button2->Location = System::Drawing::Point(235, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"返回主界面";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BDC2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BDC2::button1_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(235, 191);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &BDC2::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(235, 158);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &BDC2::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(235, 121);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &BDC2::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(235, 84);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &BDC2::radioButton1_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(30, 77);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(152, 130);
			this->richTextBox1->TabIndex = 17;
			this->richTextBox1->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(30, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(597, 45);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"本测试全部为选择题，在右边选项中选择左边方框里单词的中文释义";
			// 
			// r5
			// 
			this->r5->AutoSize = true;
			this->r5->Location = System::Drawing::Point(124, 260);
			this->r5->Name = L"r5";
			this->r5->Size = System::Drawing::Size(14, 13);
			this->r5->TabIndex = 24;
			this->r5->TabStop = true;
			this->r5->UseVisualStyleBackColor = true;
			// 
			// BDC2
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
			this->Name = L"BDC2";
			this->Text = L"BDC2";
			this->Load += gcnew System::EventHandler(this, &BDC2::BDC2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				       Int16 counter = 0;
					   array<System::String ^,2>^englishchinese=gcnew array<System::String ^,2>(110,2);
                     String^path="D:\\Documents\\Visual Studio 2010\\Projects\\ciku.txt.txt";
					FileStream^fs=gcnew FileStream(path,FileMode::Open);
				    StreamReader^sr=gcnew StreamReader(fs);
					for(counter=0;sr->Peek() >=0;counter++)
                  { 
					englishchinese[counter,0]=sr->ReadLine();
				    englishchinese[counter,1]=sr->ReadLine();}
				    sr->Close();	
				    fs->Close();
				  int number[4];
				  int tmp;
					srand(int(time(0)));
					//随机选取4个解释
					for(int i=0;i<4;i++)
					{ 
						do
					{
					  tmp=rand()%(englishchinese->GetLength(0));
					 }
					   while(tmp>54);
					
					bool repeat=false;
					//检查随机生成的解释是否重复
					for(int j=0;j<i;j++)
					{
						if(number[j]==tmp)
					 repeat=true;
					}
					if(repeat==true)
						i--;
					else
						number[i]=tmp;
					}
					int snum=rand()%(englishchinese->GetLength(0));
					int s=snum%4;
					switch(s)
					{
					case 0:radioButton1->Text=englishchinese[number[0],1];
						   radioButton2->Text=englishchinese[number[1],1];
					       radioButton3->Text=englishchinese[number[2],1];
					       radioButton4->Text=englishchinese[number[3],1];

					case 1:radioButton2->Text=englishchinese[number[0],1];
						   radioButton3->Text=englishchinese[number[1],1];
					       radioButton4->Text=englishchinese[number[2],1];
					       radioButton1->Text=englishchinese[number[3],1];

					case 2:radioButton3->Text=englishchinese[number[0],1];
						   radioButton4->Text=englishchinese[number[1],1];
					       radioButton1->Text=englishchinese[number[2],1];
					       radioButton2->Text=englishchinese[number[3],1];

					case 3:radioButton4->Text=englishchinese[number[0],1];
						   radioButton1->Text=englishchinese[number[1],1];
					       radioButton2->Text=englishchinese[number[2],1];
					       radioButton3->Text=englishchinese[number[3],1];

					}
					bool flag=1;
					while(flag)
					{
					if(radioButton1->Text!=""&&radioButton2->Text!=""&&radioButton3->Text!=""&&radioButton4->Text!="")
					{flag=0;}
					else{for(int i=0;i<4;i++)
					{ 
						do
					{
					  tmp=rand()%(englishchinese->GetLength(0));
					 }
					   while(tmp>54);
					
					bool repeat=false;
					//检查随机生成的解释是否重复
					for(int j=0;j<i;j++)
					{
						if(number[j]==tmp)
					 repeat=true;
					}
					if(repeat==true)
						i--;
					else
						number[i]=tmp;
					}
					int snum=rand()%(englishchinese->GetLength(0));
					int s=snum%4;
					switch(s)
					{
					case 0:radioButton1->Text=englishchinese[number[0],1];
						   radioButton2->Text=englishchinese[number[1],1];
					       radioButton3->Text=englishchinese[number[2],1];
					       radioButton4->Text=englishchinese[number[3],1];

					case 1:radioButton2->Text=englishchinese[number[0],1];
						   radioButton3->Text=englishchinese[number[1],1];
					       radioButton4->Text=englishchinese[number[2],1];
					       radioButton1->Text=englishchinese[number[3],1];

					case 2:radioButton3->Text=englishchinese[number[0],1];
						   radioButton4->Text=englishchinese[number[1],1];
					       radioButton1->Text=englishchinese[number[2],1];
					       radioButton2->Text=englishchinese[number[3],1];

					case 3:radioButton4->Text=englishchinese[number[0],1];
						   radioButton1->Text=englishchinese[number[1],1];
					       radioButton2->Text=englishchinese[number[2],1];
					       radioButton3->Text=englishchinese[number[3],1];

					}}}
					 richTextBox1->Text= englishchinese [number[1],0];
					r5->Text=englishchinese [number[1],1];
					
					

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

           this->Close();	 }


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
private: System::Void BDC2_Load(System::Object^  sender, System::EventArgs^  e) {
			 r5->Hide();

		 }
};
}

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

//BDC4
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
	/// BDC4 摘要
	/// </summary>
	public ref class BDC4 : public System::Windows::Forms::Form
	{
	public:
		BDC4(void)
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
		~BDC4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->r5 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(290, 268);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"返回主界面";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BDC4::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BDC4::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(24, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(633, 45);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"本测试全部为选择题，在右边选项中选择左边方框里中文释义对应的单词";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton4->Location = System::Drawing::Point(433, 199);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 25;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &BDC4::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton3->Location = System::Drawing::Point(433, 166);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 24;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &BDC4::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(433, 129);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &BDC4::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(433, 92);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &BDC4::radioButton1_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(39, 89);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(362, 130);
			this->richTextBox1->TabIndex = 21;
			this->richTextBox1->Text = L"";
			// 
			// r5
			// 
			this->r5->AutoSize = true;
			this->r5->Location = System::Drawing::Point(433, 237);
			this->r5->Name = L"r5";
			this->r5->Size = System::Drawing::Size(95, 16);
			this->r5->TabIndex = 29;
			this->r5->TabStop = true;
			this->r5->Text = L"radioButton5";
			this->r5->UseVisualStyleBackColor = true;
			// 
			// BDC4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 329);
			this->Controls->Add(this->r5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"BDC4";
			this->Text = L"BDC4";
			this->Load += gcnew System::EventHandler(this, &BDC4::BDC4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				  Int16 counter = 0;
                        
						 array<System::String ^,2>^englishchinese=gcnew array<System::String ^,2>(110,2);
                         
                     String^path="D:\\Documents\\Visual Studio 2010\\Projects\\ciku.txt.txt";
					
							FileStream^fs=gcnew FileStream(path,FileMode::Open);
					
				StreamReader^sr=gcnew StreamReader(fs);
						 
						
					for(counter=0;sr->Peek() >=0;counter++)
                  { 
					
					englishchinese[counter,0]=sr->ReadLine();
				   
				englishchinese[counter,1]=sr->ReadLine();}
				sr->Close();	
				fs->Close();
					
				  int number[4];
				  int tmp;
					srand(int(time(0)));
					//随机选取4个单词
					for(int i=0;i<4;i++)
					{ 
						do
					{
					  tmp=rand()%(englishchinese->GetLength(0));
					 }
					   while(tmp>54);
					
					bool repeat=false;
					//检查随机生成的解释是否重复
					for(int j=0;j<i;j++)
					{
						if(number[j]==tmp)
					 repeat=true;
					}
					if(repeat==true)
						i--;
					else
						number[i]=tmp;
					}
					
					int snum=rand()%(englishchinese->GetLength(0));
					int s=snum%4;
					switch(s)
					{
					case 0:radioButton1->Text=englishchinese[number[0],0];
						   radioButton2->Text=englishchinese[number[1],0];
					       radioButton3->Text=englishchinese[number[2],0];
					       radioButton4->Text=englishchinese[number[3],0];

					case 1:radioButton2->Text=englishchinese[number[0],0];
						   radioButton3->Text=englishchinese[number[1],0];
					       radioButton4->Text=englishchinese[number[2],0];
					       radioButton1->Text=englishchinese[number[3],0];

					case 2:radioButton3->Text=englishchinese[number[0],0];
						   radioButton4->Text=englishchinese[number[1],0];
					       radioButton1->Text=englishchinese[number[2],0];
					       radioButton2->Text=englishchinese[number[3],0];

					case 3:radioButton4->Text=englishchinese[number[0],0];
						   radioButton1->Text=englishchinese[number[1],0];
					       radioButton2->Text=englishchinese[number[2],0];
					       radioButton3->Text=englishchinese[number[3],0];

					}
					bool flag=1;
					while(flag)
					{
					if(radioButton1->Text!=""&&radioButton2->Text!=""&&radioButton3->Text!=""&&radioButton4->Text!="")
					{flag=0;}
					else{for(int i=0;i<4;i++)
					{ 
						do
					{
					  tmp=rand()%(englishchinese->GetLength(0));
					 }
					   while(tmp>54);
					
					bool repeat=false;
					//检查随机生成的解释是否重复
					for(int j=0;j<i;j++)
					{
						if(number[j]==tmp)
					 repeat=true;
					}
					if(repeat==true)
						i--;
					else
						number[i]=tmp;
					}
					int snum=rand()%(englishchinese->GetLength(0));
					int s=snum%4;
					switch(s)
					{
					case 0:radioButton1->Text=englishchinese[number[0],0];
						   radioButton2->Text=englishchinese[number[1],0];
					       radioButton3->Text=englishchinese[number[2],0];
					       radioButton4->Text=englishchinese[number[3],0];

					case 1:radioButton2->Text=englishchinese[number[0],0];
						   radioButton3->Text=englishchinese[number[1],0];
					       radioButton4->Text=englishchinese[number[2],0];
					       radioButton1->Text=englishchinese[number[3],0];

					case 2:radioButton3->Text=englishchinese[number[0],0];
						   radioButton4->Text=englishchinese[number[1],0];
					       radioButton1->Text=englishchinese[number[2],0];
					       radioButton2->Text=englishchinese[number[3],0];

					case 3:radioButton4->Text=englishchinese[number[0],0];
						   radioButton1->Text=englishchinese[number[1],0];
					       radioButton2->Text=englishchinese[number[2],0];
					       radioButton3->Text=englishchinese[number[3],0];

					}}}
					 richTextBox1->Text= englishchinese [number[1],1];
					r5->Text=englishchinese [number[1],0];
				}




private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
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
private: System::Void BDC4_Load(System::Object^  sender, System::EventArgs^  e) {
			 r5->Hide();
		 }
};
}

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
//单词翻译与查询
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<ctype.h>
#define NULL 0
using namespace std;
int n;
struct word
{
	char yw[20];
	char zw[80];
	word *next;
};
class words
{
public:
	char english[20];
	char chinese[40];
	void words_get(char en[], char ch[]);
	void words_add();
	void words_translate();
	friend int words_long(long, char a);
	friend long words_seek(char ch[]);
	friend struct word*creat();

};
class user
{
public:

	void server1();
};
void user::server1()
{
	
	
	cout << "\n                                          \n"
		<< "\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		<< "\t\t$                                       $\n"
		<< "\t\t$             单词功能                  $\n"
		<< "\t\t$          1.中英文的增加               $\n"
		<< "\t\t$          2.中英文的翻译               $\n"
		<< "\t\t$          0.退出                       $\n"
		<< "\t\t$                                       $\n"
		<< "\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n" << endl;
	
	}
	


long words_seek(char aa[])//对单词查找定位
{
	long z = 0;
	int i = 0;
	char str[40], hh;
	fstream cs("D:\\ciku.txt");
	if (!cs)
	{
		cout << "cannot open" << endl;

	}
	cs.seekg(z, ios::beg);
	while (cs.get(hh))
	{
		cs.seekg(z, ios::beg);
		i = words_long(z, '\n');
		cs.read(str, i);
		str[i] = '\0';
		if (strcmp(str, aa) == 0)
		{
			return z;
		}
		else
		{
			z = z + i + 1;
			z++;
		}
		cs.seekg(z, ios::beg);
	}
	cs.close();
	return -1;
}

void words::words_get(char en[], char ch[])
{
	strcpy_s(english, en);
	strcpy_s(chinese, ch);
}

void words::words_add()//添加单词
{
	char en[20], ch[40];
	cout << "请输入要添加单词的英文和中文" << endl;
	cin >> en >> ch;
	words_get(en, ch);
	ofstream llw;
	if (words_seek(english) == -1)
	{
		llw.open("D:\\ciku.txt", ios::app);
		llw.write(english, strlen(english));
		llw.put(' ');
		llw.write(chinese, strlen(chinese));
		llw.put('\n');
		llw.close();
		cout << "单词添加成功" << endl;
	}
	else
		cout << "要添加的英文单词已存在，单词添加失败！" << endl;
}


struct word*creat()//创建链表把单词放入链表中
{
	int i = 0;
	long z = 0;
	char ch;
	n = 0;
	struct word *head;
	word *p1 = new struct word;
	head = NULL;
	p1->next = NULL;
	struct word *p2;
	p2 = p1;
	fstream llw;
	llw.open("D:\\ciku.txt", ios::in | ios::out);
	if (!llw)
		cout << "cannot open output";
	i = words_long(z, ' ');
	llw.read(p1->yw, i);
	p1->yw[i] = '\0';
	z = z + i + 1;
	i = words_long(z, '\n');
	llw.seekg(z, ios::beg);
	llw.read(p1->zw, i);
	p1->zw[i] = '\0';
	z = z + i + 1;
	z++;
	while (llw.get(ch))
	{
		n++;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		word *p1 = new struct word;
		p1->next = NULL;
		p2->next = p1;
		p2 = p1;
		i = words_long(z, ' ');
		llw.seekg(z, ios::beg);
		llw.read(p1->yw, i);
		p1->yw[i] = '\0';
		z = z + i + 1;
		i = words_long(z, '\n ');
		llw.seekg(z, ios::beg);
		llw.read(p1->zw, i);
		p1->zw[i] = '\0';
		z = z + i + 1;
		z++;
		llw.seekg(z, ios::beg);
	}
	p2->next = NULL;
	return head;

}





void words::words_translate()
{
	long z = 0;
	int j = 0;
	char bb, aa;
	char strch[40], stren[20];
	char en[20], ch[40];
	cout << "\n                               \n"
		<< "\t\t    0.中英文单词一并翻译     \n"
		<< "\t\t    1.单独翻译中文单词       \n"
		<< "\t\t    2.单独翻译英文单词       \n" << endl;
tran:cin >> aa;//goto
	if (aa == '0')
	{
		system("cls");//清屏
		cout << "请输入要翻译的英文和中文单词" << endl;
		cin >> en >> ch;
		words_get(en, ch);
	}
	else if (aa == '1')
	{
		system("cls");
		cout << "请输入要翻译的中文" << endl;
		cin >> ch;
		words_get("1", ch);
	}
	else if (aa == '2')
	{
		system("cls");
		cout << "请输入要翻译的英文单词" << endl;
		cin >> en;
		words_get(en, "2");
	}
	else
	{
		cout << "\t\t输入错误！请重新输入" << endl;
		goto tran;
	}
	fstream llw("D:\\ciku.txt", ios::in | ios::out);
	if (english[0] != '1'&&chinese[0] != '2')
	{
		z = words_seek(english);
		if (z != -1)
		{
			j = words_long(z, ' ');
			z = z + j + 1;
			j = words_long(z, '\n');
			llw.seekg(z, ios::beg);
			llw.read(strch, j);
			strch[j] = '\0';
			cout << english << ":" << strch << endl;
			cout << "英语单词翻译成功" << endl;
		}
		else cout << "英语单词找不到，翻译失败" << endl;
		z = words_seek(chinese);
		if (z != -1)
		{
			z = z - 2;
			do
			{
				llw.seekg(z - j, ios::beg);
				llw.get(bb);
				j++;
			} while (bb != '\n');
			j = j - 1;
			llw.seekg(z + 1 - j, ios::beg);
			llw.read(stren, j);
			stren[j] = '\0';
			cout << chinese << ":" << stren << endl;
		}
		else cout << "找不到该中文单词，翻译失败" << endl;
	}
	else if (english[0] == '1'&&chinese[0] == '2')
		exit(-1);
	else
		cout << "输入错误" << endl;

}
int words_long(long z, char aa)
{
	int i = 0;
	char bb;
	ifstream llw("D:\\ciku.txt");
	llw.seekg(z, ios::beg);
	do {
		llw.seekg(z + i, ios::beg);
		llw.get(bb);
		i++;
	} while (bb != aa);
	llw.close();
	return i - 1;
}


int main()
{
	char cc;
	words pro;
	user x;
	x.server1();
	while (cin >> cc)
	{

		switch (cc)
		{
		case '1':
		{
			pro.words_add(); break;

		}

		case '2':
		{
			pro.words_translate(); break;

		}
		case '0':
			exit(-1);
		}
	}
}



