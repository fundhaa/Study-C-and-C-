#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// PopupMenu 는 MenuItem 을 보관하지만
// PopupMenu 도 보관할수 있다.
// PopupMenu 와 MenuItem 의 공통의 기반 클래스가 필요하다.

class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}

	std::string getTitle() const { return title; }

	// 모든 메뉴의 공통의 특징은 BaseMenu에 있어야 한다.
	// 모든 메뉴는 "선택" 될수 있다.
	virtual void command() = 0; // 핵심!!!!
};

class MenuItem : public BaseMenu
{
	int  id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << getTitle() << "메뉴가 선택됨" << std::endl;
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
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택하세요 >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1)
				break;

			if (cmd < 1 || cmd > sz + 1)
				continue;


			// 선택된 메뉴 실행
			v[cmd - 1]->command();
		}
	}
};


int main()
{
	PopupMenu* menubar = new PopupMenu("메뉴바");
	PopupMenu* p1 = new PopupMenu("해상도변경");
	PopupMenu* p2 = new PopupMenu("색상변경");

	menubar->addMenu(p1);
	menubar->addMenu(p2); // ROOT 메뉴에 색상변경이 붙게 된다.
	//p1->addMenu(p2); // 색상변경이 해상도변경 아래에 붙게 된다.

	p1->addMenu(new MenuItem("HD", 11));
	p1->addMenu(new MenuItem("FHD", 12));
	p1->addMenu(new MenuItem("UHD", 13));

	p2->addMenu(new MenuItem("RED", 21));
	p2->addMenu(new MenuItem("GREEN", 22));
	p2->addMenu(new MenuItem("BLUE", 23));

	//시작
	menubar->command();

}

// 객체지향 프로그램이란?
// 1. 객체를 생성하고
// 2. 객체간의 관계를 설정하고
// 3. 객체간에 메세지를 주고 받는 것(멤버 함수를 호출한다는 의미)