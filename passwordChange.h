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