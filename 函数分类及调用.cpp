#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	//��ͨ���캯��
	person()
	{
		cout << "person�޲ι��캯���ĵ���" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person�вι��캯���ĵ���" << endl;
	}
	//�������캯��
	person(const person &p)
	{
		age = p.age;
		cout << "person�������캯������" << endl;
	}
	~person()
	{
		cout << "person������������" << endl;
	}
	int age;
};
void test01()
{
	// 1.���ŷ�
	person p; //Ĭ�Ϲ��캯������
	person p2(10); //�вι��캯������
	person p3(p2); //�������캯������
	cout << p2.age << endl;
	cout << p3.age << endl;
}
int main()
{
	test01();

}