#include<iostream>
using namespace std;

// namespace��Ҫ��; : �������������ͻ������
namespace LOL
{
	void goAtk()
	{
		cout << "LOL ����" << endl;
	}
}
namespace KingGlory
{
	void goAtk()
	{
		cout << "KingGlory ����" << endl;
	}
}
// 1.�����ռ��¿��Էź������������ṹ�壬��
namespace A
{
	void func();
	int m_A = 10;
	struct Person
	{

	};
	class Animal
	{

	};
	namespace B
	{
		int m_A = 20;
	}
}
// 2.�����ռ����Ҫ������ȫ����������
// 3.�����ռ����Ƕ�������ռ�
// 4.�����ռ��ǿ��ŵģ�����ʱ�������ռ����������
namespace A
{
	int m_B = 30;
	// �������ռ�������������ռ���кϲ�
}
// 5.���������ռ�
namespace
{
	int m_C = 0;
	int m_D = 0;
	// �൱�� static int m_C = 0; static int m_D = 0; 
}
// 6.�����ռ���������
namespace VeryLongName
{
	int E = 0;
}
namespace VeryShortName = VeryLongName;
int main()
{
	LOL::goAtk();
	KingGlory::goAtk();
	cout << "������ B �µ� m_A Ϊ" << A::B::m_A << endl;
	cout << "A::�µ�m_AΪ" << A::m_A << ",m_BΪ" << A::m_B << endl;
	cout << VeryLongName::E << ' ' << VeryShortName::E << endl;

}
