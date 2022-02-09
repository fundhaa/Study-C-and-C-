// 17_reference4.cpp

#include <iostream>
#include <string>
using namespace std;

struct User {
	string name;
	int age;
	string address;
};

// 1. int, double, char, float .. => primitive type / built-int type
// => call by value�� ����ص� �������.

// 2. struct ����� ���� Ÿ���� call by value�� ����� ��� ������ ����� �߻��Ѵ�. 
//	C:call by pointer
void printUser(const User* user) {
	cout << user.name << ", " << user.age << ", " << user.address << endl;
}

//	C++ : call by reference
// ����� ���� Ÿ���� ���ڷ� �����Ҷ�, call by value�� ����ϴ� ���
// const& �� ����Ѵ�.(�б⸦ �������� ���� ����ġ �ʰڴٴ� �ǹ�) => �߿�!
// ���ڸ� �����ϴ� ���(���� ���)�� ������ �� �ִ�.
void printUser(const User& user) {
	cout << user.name << ", " << user.age << ", " << user.address << endl;
}

/*
void printUser(User user) {
	cout << user.name << ", " << user.age << ", " << user.address << endl;
}
*/

int main() {
	User user{ "Tom", 28, "Seoul" };
	cout << sizeof(user) << endl;
	printUser(user);
	cout << sizeof(user) << endl;
}