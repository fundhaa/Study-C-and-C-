//9_�⺻�Ķ����.cpp

#include <iostream>
using namespace std;

// Default Parameter
// : �Լ����� ���޵� ���ڰ� ���� ���, �⺻���� ����� �� �ִ�.
// 1) �ݵ�� �ڿ� �ִ� �Ķ���ͺ��� �⺻���� �����ؾ��Ѵ�.
//    �Ʒ��� ��� a=0, c=0 �̷������δ� ���� �Ұ���
//    void add(int a =0, int b)  :   ERROR!!
// 
// 2) �⺻ �Ķ���� ���� �Լ��� ����� ������ �и��� ���. "�����"�� �ۼ��ؾ��Ѵ�.
int add(int a, int b, int c /*= 0*/, int d/* = 0*/) {
	return a + b + c + d;
}

int add(int a, int b, int c = 0, int d = 0)

int main()
{
	cout << add(10, 20) << endl;
	int result = add(10, 20); // add(10, 20, 0, 0)
	cout << result << endl;

	result = add(10, 20, 30); // add (10, 20, 30, 0)
	cout << result << endl;
}