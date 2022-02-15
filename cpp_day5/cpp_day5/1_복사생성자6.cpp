#include <iostream>
#include <cstring>
#include <string>

// ���� ����(shallow copy) vs ���� ����(deep copy)
// ==> Ŭ���� ���ο� ������ ����� �ִ� ��츸 ����ϸ� �ȴ�.
// ==> ������ ����� ���� Ŭ����(Point ��)�� " �����Ϸ��� ������ ���� ������ " ����ϸ� �ȴ�.

// ���ڿ��� �ʿ��ϸ�, char*, char[]�� �ƴ϶� std::string ���� �ȴ�.

// �����Ϸ��� ������ִ� ����Ʈ ��������ڴ� ��� ����� ���� ���� ���縦 �����Ѵ�(X)
//  ==> ���� ���縸 �����Ѵ�.
class People {
	//char* name;
	std::string name;
	int age;
public:
	People(const std::string& s, int a) : name(s), age(a)
	{
	}
	//~People() { delete[] name; } // ���� �ڿ��Ҵ� ������ ���� ������ �Ҹ��ڵ� �� �ʿ䰡 ����.
};
int main() {
	People p1("Ha", 28);
	People p2 = p1; 
}