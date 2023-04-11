// 고급C++ 06_2주차.cpp
//Q.17
#include<iostream>
using namespace std;

int& func_ref(int s[], int idx) {
	return s[idx];
}
int main() {
	int arr[3] = { 1, 2, 3 };
	func_ref(arr, 1) = 5;
	int& ref = func_ref(arr, 2);
	ref = 9;
	return 0;
}
//디버깅 결과: arr[2]=ref=9로 같음