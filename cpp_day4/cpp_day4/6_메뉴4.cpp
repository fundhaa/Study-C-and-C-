p#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// PopupMenu는 MenuItem을 보관하지만
// PopupMenu 도 보관할 수 있다.
// PopupMenu와 MenuItem의 공통의 기반 클래스가 필요하다.

class BaseMenu {
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}

	std::string getTitle() const { return title; }
	virtual void command() = 0; // 핵심!
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

class PopupMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {} // basemenu로 부터 상속

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
			std::cout << sz + 1 << ". 종료" << std::endl;
			std::cout << "메뉴를 선택하세요 >> ";

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
	MenuItem m1("참치김밥", 11); // 11은 김밥의 ID 값
	MenuItem m2("소고기김밥", 12);

	PopupMenu pmKim("김밥류");
	pmKim.addMenu(&m1);
	pmKim.addMenu(&m2);


	MenuItem m3("국수", 13);
	MenuItem m4("라면", 14);

	PopupMenu pm("오늘의 메뉴");
	pm.addMenu(&pmKim); // 가능한가? 이 예제의 핵심은 이 코드이다.
	pm.addMenu(&m3);
	pm.addMenu(&m4);

	pm.command(); 
}