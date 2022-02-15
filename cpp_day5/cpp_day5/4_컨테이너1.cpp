// 4_컨테이너1 - 216 page
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <unordered_set>

int main() {
	//배열의 특징 : 연속된 메모리
	//		 단점 : 크기를 변경할 수 없다.
	int x[5] = { 1, 2, 3, 4, 5 };

	// vector : 연속된 메모리, 크기변경이 가능하다.
	// 모든 요소의 순회는 빠르지만, 중간에 삽입, 삭제가 발생하면 느리다.
	// 성능이 좋지는 않음.
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	v.resize(10);

	// list : 모든 요소가 떨어진 메모리 (linked list)
	//		  삽입, 삭제가 빠르다.
	//        단, 순회 등은 vector 보다 느리다.
	std::list<int> s = { 1, 2, 3, 4, 5 };

	// set : 입력된 요소를 root부터 비교하며
	//       데이터를 저장한다.
	//		tree라고 불리는 자료구조, 검색이 빠르고 왼쪽 마지막 노드부터 열거하면 크기순으로 되어있다.
	// 단점 : 저장된(입력된) 순서를 알 수 없다.
	std::set<int> st = { 50, 20, 60, 40 ,80 ,20 }; // 트리구조, root node와 비교해서 작으면 왼쪽 크면 오른쪽에 배치

	// unirdered_set : hash라 불리는 자료구조
	std::unordered_set<int> us = { 50, 20, 60 ,40 , 80, 30, 10 };


	// 선택기준
	// 1.가장 빠른 검색이 필요하다 : hash( hash(undered_set )
	// 2. 빠른 검색 + 정렬된 데이터  : tree(set)
	// 3. 입력순서가 기록되어 있어야한다.
	//	vercotr : 연속된 메모리
	//  list : 떨어진 메모리
	// container : 여러개의 요소를 저장하는 타입(list, vector, set, unordered_set) - 216 페이지 참고
}