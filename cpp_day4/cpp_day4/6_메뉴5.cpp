#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// PopupMenu �� MenuItem �� ����������
// PopupMenu �� �����Ҽ� �ִ�.
// PopupMenu �� MenuItem �� ������ ��� Ŭ������ �ʿ��ϴ�.

class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}

	std::string getTitle() const { return title; }

	// ��� �޴��� ������ Ư¡�� BaseMenu�� �־�� �Ѵ�.
	// ��� �޴��� "����" �ɼ� �ִ�.
	virtual void command() = 0; // �ٽ�!!!!
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
class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void addMenu(BaseMenu* p) { v.push_back(p); }

	void command()
	{
		while (1)
		{
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

			if (cmd == sz + 1)
				break;

			if (cmd < 1 || cmd > sz + 1)
				continue;


			// ���õ� �޴� ����
			v[cmd - 1]->command();
		}
	}
};


int main()
{
	PopupMenu* menubar = new PopupMenu("�޴���");
	PopupMenu* p1 = new PopupMenu("�ػ󵵺���");
	PopupMenu* p2 = new PopupMenu("���󺯰�");

	menubar->addMenu(p1);
	menubar->addMenu(p2); // ROOT �޴��� ���󺯰��� �ٰ� �ȴ�.
	//p1->addMenu(p2); // ���󺯰��� �ػ󵵺��� �Ʒ��� �ٰ� �ȴ�.

	p1->addMenu(new MenuItem("HD", 11));
	p1->addMenu(new MenuItem("FHD", 12));
	p1->addMenu(new MenuItem("UHD", 13));

	p2->addMenu(new MenuItem("RED", 21));
	p2->addMenu(new MenuItem("GREEN", 22));
	p2->addMenu(new MenuItem("BLUE", 23));

	//����
	menubar->command();

}

// ��ü���� ���α׷��̶�?
// 1. ��ü�� �����ϰ�
// 2. ��ü���� ���踦 �����ϰ�
// 3. ��ü���� �޼����� �ְ� �޴� ��(��� �Լ��� ȣ���Ѵٴ� �ǹ�)