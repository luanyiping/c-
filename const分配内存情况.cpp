#include<iostream>
#include<string>
using namespace std;
// 1.ȡ��ַ�������ʱ�ڴ�(���ܸ�)
void test01()
{
	const int a = 10;
	int* p = (int*)&a;
	// int tmp = a;
	// int* p = &tmp;
}
// 2.extern ������Ҳ���const���������ڴ�
// 3.����ͨ����ȥ��ʼ��const����,������ڴ�
void test03()
{
	int a = 10;
	const int b = a;
	int* p = (int*)&b;
	*p = 20;
	cout << "*p = " << *p << endl;
}
// 4.�Զ����������ͻ�����ڴ�
struct Person
{
	string Name;
	int age;
};
void test04()
{
	const Person P1;
	Person* p = (Person*)&P1;
	p->Name = "lsp";
	p->age = 18;
	cout << "����Ϊ : " << p->Name << endl;
	cout << "����Ϊ : " << p->age << endl;
}
int main()
{
	//test03();
	test04();
}