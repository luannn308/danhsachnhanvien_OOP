#pragma once
#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
protected:
	string hoten;
	string ngay;
	int luong;
	int luongcb;
public:
	NhanVien();
	virtual void Nhap();
	void Xuat() const;
	virtual void Luong() = 0;
};

