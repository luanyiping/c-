#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	person()
	{
		cout << "person���캯���ĵ���" << endl;
	}
	~person()
	{
		cout << "person����������ʵ��" << endl;
	}
};
void test01()
{
	person p;
}
int main()
{
	test01();
	
}