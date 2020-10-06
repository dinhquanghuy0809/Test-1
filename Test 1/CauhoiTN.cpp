#include "CauhoiTN.h"
#include <iostream>
#include <fstream>

using namespace std;

CauhoiTN::CauhoiTN()
{
}

CauhoiTN::~CauhoiTN()
{
}

void CauhoiTN::xuat()
{
	cout << endl << NoiDung << endl;
	cout << "A. " << CauHoiA << endl;
	cout << "B. " << CauHoiB << endl;
	cout << "*Dap an: " << CauDung << endl;
}

void CauhoiTN::nhap()
{
	cout << "Nhap noi dung cau hoi: ";
	getline(cin, NoiDung);
	cout << "Nhap lua chon A: ";
	getline(cin, CauHoiA);
	cout << "Nhap lua chon B: ";
	getline(cin, CauHoiB);
	cout << "Cho biet cau nao dung (A/B): ";
	cin >> CauDung;
	CauDung = toupper(CauDung);//Doi thanh chu hoa neu nguoi dung nhap chu thuong
}

bool CauhoiTN::kiemtra()
{
	cout << endl << NoiDung << endl;
	cout << "A. " << CauHoiA << endl;
	cout << "B. " << CauHoiB << endl;
	cout << " Chon A/B? ";
	char chon;
	cin >> chon;
	//Kiem tra dung sai
	if (chon == CauDung)
	{
		cout << "Ban da tra loi dung!" << endl;
		return true;
	}
	else
	{
		cout << "Ban da tra loi sai!" << endl;
		return false;
	}
	return false;
}

void CauhoiTN::ghifile(ofstream& os)
{
	os << NoiDung << endl;
	os << CauHoiA << endl;
	os << CauHoiB << endl;
	os << CauDung << endl;
}

bool CauhoiTN::docfile(istream& is)
{
	if (is.eof()) return false;
	getline(is, NoiDung);
	getline(is, CauHoiA);
	getline(is, CauHoiB);
	is >> CauDung;
	return true;
}

bool giongnhau(CauhoiTN cau1, CauhoiTN cau2)
{
	return false;
}