p#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// PopupMenu�� MenuItem�� ����������
// PopupMenu �� ������ �� �ִ�.
// PopupMenu�� MenuItem�� ������ ��� Ŭ������ �ʿ��ϴ�.

class BaseMenu {
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}

	std::string getTitle() const { return title; }
	virtual void command() = 0; // �ٽ�!
};

class MenuItem : public BaseMenu
{
	int  id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << getTitle() << "�޴��� ���õ�" << std::endl;
		_getch();
	}
};

class PopupMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {} // basemenu�� ���� ���

	void addMenu(BaseMenu* p) { v.push_back(p); }
	void command()
	{
		while (1) {
			system("cls");
			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
			}
			std::cout << sz + 1 << ". ����" << std::endl;
			std::cout << "�޴��� �����ϼ��� >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) {
				break;
			}

			if (cmd<1 || cmd>sz + 1) { 
				continue;
			}
			
			v[cmd - 1]->command();
		}
	}
};


int main() {
	MenuItem m1("��ġ���", 11); // 11�� ����� ID ��
	MenuItem m2("�Ұ����", 12);

	PopupMenu pmKim("����");
	pmKim.addMenu(&m1);
	pmKim.addMenu(&m2);


	MenuItem m3("����", 13);
	MenuItem m4("���", 14);

	PopupMenu pm("������ �޴�");
	pm.addMenu(&pmKim); // �����Ѱ�? �� ������ �ٽ��� �� �ڵ��̴�.
	pm.addMenu(&m3);
	pm.addMenu(&m4);

	pm.command(); 
}