#include<iostream>
using namespace std;
// ��������ע������,�����һ��λ������Ĭ�ϲ����������λ�����󣬱��붼��Ĭ�ϲ���
void func(int a, int b = 10, int c = 20)
{
	cout << "a + b + c = " << a + b + c << endl;
}
// �������������������Ĭ�ϲ�������ô����ʵ��ʱ����û��
void fun2(int a = 10, int b = 20);
void fun2(int a, int b){}
// ����ռλ����
// �������ռλ���������ú���ʱ�����ṩ�������(������Ĭ��ֵ)�������ò�������
void fun3(int a, int = 1)
{

}
int main2()
{
	func(1,2,3);
	fun3(10);
	return 0;
}