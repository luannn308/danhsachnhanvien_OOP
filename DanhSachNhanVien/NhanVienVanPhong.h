#pragma once
#include"NhanVien.h"
class NhanVienVanPhong:public NhanVien
{
private:
	int songay;
	int trocap;
public:
	NhanVienVanPhong();
	void Nhap();
	void Luong();
};

