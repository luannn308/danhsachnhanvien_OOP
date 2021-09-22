#pragma once
#include"NhanVien.h"
class NhanVienQuanLy:public NhanVien
{
private:
	int heso;
	int thuong;
public:
	NhanVienQuanLy();
	void Nhap();
	void Luong();
};

