// 5_����������3 - 74 page  ---->> ������1

#include <string>
#include <iostream>

// C++
class Person 
{
private:
	std::string name;
	int age;

public:
	void setAge(int value) {
		if (value > 0 && value < 150) {
			age = value;
		}
	}
};

// �ٸ� ��ü���� ���� ��� ����� ���� �����Ѵ�.(JAVA, C# ���� ��κ� ��ü������)
/*
class Person
{
	private std::string name;
	private int age;

	public void setAge(int value) {
		if (value > 0 && value < 150) {
			age = value;
		}
	}
};
*/
// ���̽㵵 Ŭ������ ���� �� ������ "���������� ������ ����."
// => �����ڰ� ������ ���� ���� ������ ���� ä�� �ȵ� ����