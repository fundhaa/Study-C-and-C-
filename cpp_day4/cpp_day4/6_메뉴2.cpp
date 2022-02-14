#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// 메뉴를 객체지향으로 설계
// 핵심 : 필요한 타입을 먼저 설계하라
//			메뉴라는 타입이 필요하다.

class MenuItem {
	std::string title;
	int id;
public :
	MenuItem(const std::string& s, int n) : title(s), id(n) {}
	std::string getTitle() cons {return title;}
	
	// 메뉴를 선택했을 때
	void command() {
		std::cout << getTitle() << "메뉴가 선택됨" << std::endl;
		-getch(); // pause, 키보드 입력 대기
	}
};

int main() {
	MenuItem m1("김밥", 11); // 11은 김밥의 ID 값
	MenuItem m2("라면", 12);
	MenuItem m3("국수", 13);

	m1.command();
}