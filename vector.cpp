#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void myprint(int val)
{
	cout << val << endl;
}
void test01()
{
	//����һ��vector����������
	vector<int>v;
	// �������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	////ͨ�����������������е�����
	//vector<int>::iterator itbegin = v.begin();//��ʼ������  ָ�������еĵ�һ��Ԫ��
	//vector<int>::iterator itend = v.end();    //����������  ָ�������е����һ��Ԫ�ص���һ��λ��
	//
	////��һ�ֱ�����ʽ
	//while (itbegin != itend)
	//{
	//	cout << *itbegin << endl;
	//	itbegin++;
	//}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//�����ֱ�����ʽ  ����STL�ṩ�����㷨
	for_each(v.begin(), v.end(), myprint);

}
int main()
{
	test01();
}