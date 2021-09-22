#pragma once
#include"NhanVien.h"
#define MAX 300
class CongTy
{
private:
	NhanVien* DSNV[MAX];
	int n;
public:
	void Nhap();
	void Xuat();
};

