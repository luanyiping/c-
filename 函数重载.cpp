#include<iostream>
using namespace std;
// ��������,������ͬһ��������,�����Ĳ���������ͬ ���� ���Ͳ�ͬ ���� ˳��ͬ
// ����ֵ������Ϊ�������ص�����
void func()
{
	cout << "�޲�����func()" << endl;
}
void func(int a)
{
	cout << "�в�����func(int a)" << endl;
}
void func(double a)
{
	cout << "�в�����func(double a)" << endl;
}
void func(double a, int b)
{
	cout << "�в�����func(double a,int b)" << endl;
}
void func(int a, double b)
{
	cout << "�в�����func(int a,double b)" << endl;
}

void test01()
{
	func();
	func(1);
	func(1.1);
	func(1.1, 1);
	func(1, 1.1);
}

int main()
{
	test01();
}