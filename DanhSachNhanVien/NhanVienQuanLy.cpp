#include "NhanVienQuanLy.h"
NhanVienQuanLy::NhanVienQuanLy():NhanVien() {
	heso = 0;
	thuong = 0;
}
void NhanVienQuanLy::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap he so: "; cin >> heso;
	cout << "Nhap tien thuong: "; cin >> thuong;
	Luong();
	cin.ignore();
}
void NhanVienQuanLy::Luong() {
	luong = luongcb * heso + thuong;
}