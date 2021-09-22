#pragma once
#include"NhanVien.h"
class NhanVienSanXuat:public NhanVien
{
private:
	int sosp;
public:
	NhanVienSanXuat();
	void Nhap();
	void Luong();
};

