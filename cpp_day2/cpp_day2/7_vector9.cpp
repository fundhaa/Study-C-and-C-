#include <vector>
#include <iostream>

int main() {
	std::vector<int> v; //초기 크기 0
	int num;

	while (1)
	{
		std::cin >> num;
		if (num == -1)
			break;
		v.push_back(num); // 입력된 것 보관. vector가 알아서 메모리 관리해준다.
	}
	std::cout << "입력된 갯수 : " << v.size() << std::endl;

	for (auto e : v) //새로운 for문 사용 가능
		std::cout << e << ", ";
	//v 가 사용하던 메모리는 vector 소멸자가 알아서 파괴해줌.
	// 사용자가 신경쓸 필요 없다.
}
// 끝에 한개 제거 : v.pop_back()