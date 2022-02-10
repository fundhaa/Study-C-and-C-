#include <iostream>

int main() {
	// 4. 사용자가 -1을 입력할때까지 계속 입력받고싶다.
	// 단, 입력된 값은 나중에 사용하기 위해 반드시 보관되어야한다.

	//int score[5]; // 이렇게 하면 수명이 정해져 있다. == 메모리를 지우고싶을때 지울 수 없다.
	int size = 5; // 동적 할당된 배열 크기
	int* score = new int[size]; // 이렇게 하면 원할 때 지울 수 있다.

	int num = 0;
	int count = 0; // 입력한 갯수

	while (1) {
		std::cin >> num;

		if (num == -1)
			break;

		score[count] = num;
		++count;

		if (count == size) { // 버퍼(배열)이 가득 찬 상태
			int* temp = new int[size + 5];
			memcpy(temp, score, sizeof(int) * size);
			// memcpy(목적지주소(200), 원본주소(100), 크기(20byte))
			// temp가 가리키던 주소에 score가 가리키던 주소의 내용을 
			// sizeof(int) * size = 20 byte 만큼으로 복사해달라.

			delete[] score; // 기존 배열 제거,
			//score를 지우는게 아니고 score가 가르키던 주소에 와서 그 주소의 메모리를 제거

			score = temp;
			size = size + 5;
			// score가 원래 100번 주소를 가리키고 int[5]만큼의 공간을 할당받앗는데
			// 여기 들어있던 내용을 temp(200번 주소를 가리킴)로 옮겨놓고 score의 공간을 제거.
			// 그리고 score가 200번 주소를 가리키게 한다.
			// 그럼 score가 가리키는 주소에 가보면 사용자 입력이 쭉쭉 들어가있는 것이다.
		}
	}
		std::cout << " 입력한 갯수 : " << count << std::endl;
		std::cout << "현재 동적 할당된 배열 크기 : " << size << std::endl;

		for (int i = 0; i < count; i++) {
			std::cout << score[i] << ", ";
		}
		// 더이상 필요 없으면 꼭 메모리 제거
		delete[] score;
}

// 이 예제는 동적배열(vector)라는 자료구조이다.
// 자료구조 : 데이터를 메모리에 어떻게 보관할 것인가에 대해 배우는 과목