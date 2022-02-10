// 5_����������2 - 74 page

#include <string>
#include <iostream>

// struct : �⺻������ public (���������� ������)
// class : �⺻������ private (���������� ������)

// C++ : struct�� class ���̴� �� �Ѱ����� �ٸ��� ������ �����ϴ�.
// �ٸ� ���(C#, JAVA)������ ���̰� �� ū ���̴�.

//struct Person
class Person // ���� ������ ������ private
{
//private:				// �̷��� �Ǹ� public�̴�.
	std::string name;
	int age;

public:	
	void setAge(int value) {
		if (value > 0 && value < 150) {
			age = value;
		}
	}
};

int main() {

	Person p;
	p.setAge(-10);
}