#include<iostream>
using namespace std;
namespace KingGlory
{
	int sunwukong = 10;
}
void test1()
{
	int sunwukong = 20;
	cout << KingGlory::sunwukong << endl; // 10
	cout << sunwukong << endl;  //  20
	using  KingGlory::sunwukong;
	cout << sunwukong << endl;    // ����
	// д��using������˵�����µ�sunwukong�� KingGlory�µģ������������оͽ�ԭ����˲���������
}

// using����ָ��
void test2()
{
	int sumwukong = 20;
	using namespace KingGlory;
	cout << sunwukong << endl; // 10
}

int main()
{
	test1();
	test2();
}