#include<iostream>
using namespace std;
// c++ ������ôд(�����ض���)��ȫ�ֱ��������ǿ
int a;
int a = 10;
// 2.���������ǿ,����������ǿ������ֵ������ǿ������������ǿ
int getS(int w, int h)
{
	return w * h;
}
void test02()
{
	getS(10, 10);
}
// 3.����ת�������ǿ
void test03()
{
	int* p = (int*)malloc(sizeof(int));
}
// 4.struct��ǿ
struct Person
{
	int age;
	void PlusAge() // c++�п�����Ӻ���
	{
		age++;
	}
};
void test04()
{
	Person p1; // �ɲ��ӹؼ���
	p1.age;
	p1.PlusAge();
	cout << p1.age << endl;
}
// 5.bool����
bool flag = true; // ֻ������
void test05()
{
	cout << sizeof(flag) << endl;
}

// 6.��Ŀ�������ǿ
void test06()
{
	int a = 10;
	int b = 20;
	cout << "ret = " << (a > b ? a : b) << endl;

	(a < b ? a : b) = 100; // c++�з��ص��Ǳ���  a = 100
	cout << "a = " << a << endl;
}

// 7. const��ǿ

// c �����У�const���κ�ı�����α���������Ա��޸ģ���Ϊ��������Ϊ���������ڴ�
// c++�У��������ĳ���������������Ϊ���������ڴ�,�ŵ����ű���
const int m_A = 10;  // const����ȫ�ֱ������ܵ�����������c����c++�������޸�
void test07()
{
	const int m_B = 10;
	int* p = (int*)&m_B;
	*p = 200;
	cout << "*p = " << *p << endl;
	cout << "m_B = " << m_B << endl;
	// c++�б���������ʱ����һ���ڴ�ռ�
	// int tmp = m_B;
	// int* p = &tmp;
	// *p�޸ĵ��������ʱ�ռ��ֵ��m_B���ᱻ�޸�

	int arr[m_B];
}
int main()
{
	// test05();
	//test06();
	test07();
}