#include "NhanVienVanPhong.h"
NhanVienVanPhong::NhanVienVanPhong():NhanVien(){
	songay = 0;
	trocap = 0;
}
void NhanVienVanPhong::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: "; cin >> songay;
	cout << "Nhap tro cap: "; cin >> trocap;
	Luong();
	cin.ignore();
}
void NhanVienVanPhong::Luong() {
	luong = luongcb + songay * 200000 + trocap;
}