
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



