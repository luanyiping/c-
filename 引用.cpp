#include<iostream>
using namespace std;
void test01()
{
	int a = 10;
	int& b = a;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
// �����齨������
void test02()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	// �����������
	int(&Arr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

	typedef int(Arr2)[10];
	Arr2& Arr3 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << Arr3[i] << " ";
	}
	cout << endl;
}
// ���õı���
void test03()
{
	int a = 10;
	int& p = a; // int* const p = &a;
	p = 20;     // *p = 20;
}
// ָ�������
struct Person
{
	int age;
};
void allocatMemoryByRef(Person* &p)
{
	p = (Person*)malloc(sizeof(Person));
	p->age = 100;
}
void test04()
{
	Person* P1 = NULL;
	allocatMemoryByRef(P1);
	cout << P1->age << endl;
}

// ��������
void test05()
{
	// int& ref = 10; ʹ���˲��Ϸ����ڴ�ռ�
	const int& ref = 10; 
	// ����const��,����������ʽ����
	// int tmp = 10;
	// const int& ref = tmp;
	int* p = (int*)&ref;
	*p = 20;
	cout << ref << endl;
}

// ��������ʹ�õĳ��� : ���������β�
void showval(const int& val)
{
	// ���ֻ����չʾ��������ģ����� const ����
	cout << "a = " << val << endl;
}
void test06()
{
	int a = 10;
	showval(a);
}
int main()
{
	// test02();
	//test04();
	//test05();
	test06();
}
