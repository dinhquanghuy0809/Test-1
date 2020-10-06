#pragma once
#include <string>
using namespace std;
class CauhoiTN
{
private:
	string NoiDung;
	string CauHoiA;
	string CauHoiB;
	char CauDung;//'A' hoac 'B'
public:
	CauhoiTN();
	~CauhoiTN();
	void xuat();//Xuat cau hoi ra man hinh
	void nhap();//Nhap cau hoi tu ban phim
	bool kiemtra();//Xuat noi dung cau hoi, cho nguoi dung nhap cau tra loi va kiem tra
	void ghifile(ofstream&);//ghi noi dung cau hoi vao file
	bool docfile(istream&);//doc noi dung cau hoi tu file
	friend bool giongnhau(CauhoiTN cau1, CauhoiTN cau2);
};
