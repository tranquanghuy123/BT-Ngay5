/*Viết chương trình sử dụng vòng lặp while 
để tính tổng các số từ 1 đến 100.*/
// Khai báo thư viện
#include <iostream>;
// Khai báo tên
using namespace std;

int main() {
	// Gán giá trị n = 1 có kiểu dữ liệu là số nguyên
	int n = 0; 
	// Gán giá trị S = 1 có kiểu dữ liệu là số nguyên
	int S = 0;
	// Khởi tạo điều kiện kết thúc với cú pháp vòng lặp whilie
	while (n < 10) {
		// Tăng n lên thêm 1 đơn vị
		++n;
		/*Tổng từ 1 dến 100 là 1 + 2 +3 + ... + 100
		Tổng (S) = S (1) + n(tăng lên 1 đơn vị n =2)*/
		S = S + n;
		// Xuất giá trị tổng
		cout << S << endl;
	}
	return 0;
}