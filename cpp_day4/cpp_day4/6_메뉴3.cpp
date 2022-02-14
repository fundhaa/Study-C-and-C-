#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// 메뉴를 객체지향으로 설계
// 핵심 : 필요한 타입을 먼저 설계하라
//			메뉴라는 타입이 필요하다.

class MenuItem
{
	std::string title;
	int  id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	void command()
	{
		std::cout << getTitle() << "메뉴가 선택됨" << std::endl;
		_getch();
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	// 핵심!. 팝업메뉴를 선택할때 할일을 생각해 보세요.
	void command()
	{
		while (1) {
			system("cls");		// 화면 지우기
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

			if (cmd<1 || cmd>sz + 1) { //잘못된 입력
				continue;
			}
			// 선택된 메뉴 실행
			v[cmd - 1]->command();
		}
	}
};


int main() {
	MenuItem m1("김밥", 11); // 11은 김밥의 ID 값
	MenuItem m2("라면", 12);
	MenuItem m3("국수", 13);

	PopupMenu pm("오늘의 메뉴");
	pm.addMenu(&m1);
	pm.addMenu(&m2);
	pm.addMenu(&m3);

	pm.command(); // 팝업메뉴선택, // 자신에게 부착된 하위 메뉴를 보여준다.

}