#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// �޴��� ��ü�������� ����
// �ٽ� : �ʿ��� Ÿ���� ���� �����϶�
//			�޴���� Ÿ���� �ʿ��ϴ�.

class MenuItem {
	std::string title;
	int id;
public :
	MenuItem(const std::string& s, int n) : title(s), id(n) {}
	std::string getTitle() cons {return title;}
	
	// �޴��� �������� ��
	void command() {
		std::cout << getTitle() << "�޴��� ���õ�" << std::endl;
		-getch(); // pause, Ű���� �Է� ���
	}
};

int main() {
	MenuItem m1("���", 11); // 11�� ����� ID ��
	MenuItem m2("���", 12);
	MenuItem m3("����", 13);

	m1.command();
}