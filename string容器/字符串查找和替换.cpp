#include<iostream>
using namespace std;
#include<string>
void test01()
{
	string s1 = "abcdefde";
	int pos = s1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
		cout << "pos=" << pos << endl;
	// rfind����������ң�find�������Ҳ���
	pos = s1.rfind("de");
	cout << "pos=" << pos << endl;
}
void test02()
{
	string s1 = "abcdfg";
	s1.replace(1, 3, "1111");
	cout << "s1=" << s1 << endl;
}
int main()
{
	test01();
}