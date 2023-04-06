/*Viết chương trình sử dụng vòng lặp do-while 
để yêu cầu người dùng nhập một số
từ 1 đến 10 và kiểm tra xem số đó có hợp lệ không*/

//Khai báo thư viện
#include <iostream>;
// Khai báo tên
using namespace std;

int main() {

	// Khai báo biến n có kiểu dữ liệu là số nguyên
	int n;

	do {
		cout << " Nhap so tu 1 den 10 : " << endl;
		cin >> n;
		if ( n < 1 || n > 10)
			cout << " So khong hop le " << endl;

	} while ( n >= 1 && n <= 10);
	cout << " So hop le " << endl;
	return 0;
}