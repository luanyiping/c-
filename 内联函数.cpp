#include<iostream>
using namespace std;
inline void mycompare(int a, int b)
{
	int ret = a < b ? a : b;
	cout << "ret = " << ret << endl;
}
void test01()
{
	int a = 10, b = 20;
	mycompare(++a, b);
}
// ��������ע������
//1.���ڲ��ĳ�Ա����,Ĭ�ϻ�� inline �ؼ���
//2.��������������,���ʵ��ʱ,û�м� inline �ؼ���,��ô���������Ȼ������������

int main()
{
	test01();
}
