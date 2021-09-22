#include "CongTy.h"
#include "NhanVien.h"
#include"NhanVienQuanLy.h"
#include"NhanVienSanXuat.h"
#include"NhanVienVanPhong.h"
void CongTy::Nhap() {
	cout << "So Nhan Vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int loai;
		cout << "Chon nv: 1.NVSX, 2.NVVP, 3.NVQL" << endl;
		cin >> loai;
		cin.ignore();
		if (loai == 1) {
			DSNV[i] = new NhanVienSanXuat;
		}
		if (loai == 2)
		{
			DSNV[i] = new NhanVienVanPhong;
		}
		if (loai == 3)
		{
			DSNV[i] = new NhanVienQuanLy;
		}
		DSNV[i]->Nhap();
	}
}
void CongTy::Xuat() {
	for (int i = 0; i < n; i++)
	{
		DSNV[i]->Xuat();
	}
}