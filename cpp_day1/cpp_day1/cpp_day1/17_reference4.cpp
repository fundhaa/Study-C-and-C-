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
// => call by value로 사용해도 상관없다.

// 2. struct 사용자 정의 타입은 call by value로 사용할 경우 복사의 비용이 발생한다. 
//	C:call by pointer
void printUser(const User* user) {
	cout << user.name << ", " << user.age << ", " << user.address << endl;
}

//	C++ : call by reference
// 사용자 정의 타입을 인자로 전달할때, call by value를 사용하는 대신
// const& 를 사용한다.(읽기를 목적으로 값을 변경치 않겠다는 의미) => 중요!
// 인자를 전달하는 비용(복사 비용)을 제거할 수 있다.
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