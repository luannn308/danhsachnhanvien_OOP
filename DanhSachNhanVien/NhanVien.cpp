#include "NhanVien.h"
NhanVien::NhanVien() {
	hoten = "";
	ngay = "";
	luong = 0;
	luongcb = 0;
}
void NhanVien::Nhap() {
	cout << "Nhap ten: "; getline(cin, hoten);
	cout << "Nhap ngay sinh: "; getline(cin, ngay);
	cout << "Nhap luong co ban: "; cin >> luongcb;
	cin.ignore();
}
void NhanVien::Xuat() const {
	cout << hoten << "\t" << ngay << "\t" << luong << endl;
}