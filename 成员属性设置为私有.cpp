#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	//��������
	void setname(string name)
	{
		name = name;
	}
	//��ȡ����
	string getname()
	{
		return name;
	}
	//��ȡ����
	int getage()
	{
		return age;
	}
	//��������
	void setage(int age)
	{
		if (age < 0 || age>150)
			return;
		else
			age = age;
	}
	//��������
	void setlover(string lover)
	{
		lover = lover;
	}
private:
	string name;//�ɶ���д
	int age;//�ɶ���д  ������޸�(����ķ�Χ������0~150֮��)
	string lover;//ֻд

};
int main()
{
	person p;
	p.setname("����");
	cout << p.getname() << endl;
	cout << p.getage() << endl;
	p.setlover("�Ծ�");
	p.setage(120);
	cout << p.getage() << endl;

}
