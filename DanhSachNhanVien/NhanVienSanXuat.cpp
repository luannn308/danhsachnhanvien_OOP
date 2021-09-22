#include "NhanVienSanXuat.h"
NhanVienSanXuat::NhanVienSanXuat():NhanVien() {
	luongcb = 0;
	sosp = 0;
}
void NhanVienSanXuat::Nhap(){
	NhanVien::Nhap();
	cout << "Nhap so san phan: "; cin >> sosp;
	Luong();
	cin.ignore();
}
void NhanVienSanXuat::Luong(){
	luong = luongcb + sosp * 2000;
}