// 8_string.cpp
#include <iostream>

using namespace std;

// C ���ڿ�
// => '\0'���� ������ char �迭
/*
int main()
{
	char str1[6] = "hello";
	const char* str2 = "hello";

	//���ڿ� ��
	if (strcmp(str1, str2) == 0) {
		cout << "������ ���ڿ�" << endl;
	}

	//���ڿ� ����
	strcpy(str1, "world");
	cout << str1 << endl;

	//���ڿ� �ձ�
	char temp[32] = "hello";
	strcat(temp, str1);
	
	cout << temp << endl;

	//���ڿ� ����
	cout << strlen(temp) << endl;
}
*/

// C++ ���ڿ��� � �Լ� ������ ���� �ʾƵ� ���������� ��, ����, ���� ���� �� �� �ִ�.
#include <string> // std::string

int main()
{
	string s1 = "hello";
	string s2 = "hello";
	if (s1 == s2) {
		cout << "������ ���ڿ�" << endl;
	}

	s1 = "world";
	cout << s1 << endl;

	string s3 = s1 + s2;
	cout << s3 << endl;

	cout << s3.size() << endl;
}
