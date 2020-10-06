#include <iostream>
#include <vector>
#include <fstream>
#include "CauhoiTN.h"

using namespace std;

int main()
{
	cout << "----- CHUONG TRINH QUAN LY DE THI TN -----\n";
	char chon;
	vector<CauhoiTN> dsCauhoi;
	ofstream os;
	ifstream is;
	do
	{
		//Menu
		cout << "-------Menu--------\n";
		cout << "0. Thoat\n";
		cout << "1. Tao de thi moi\n";
		cout << "2. Them cau hoi vao de thi\n";
		cout << "3. In danh sach cau hoi\n";
		cout << "4. Ghi cac cau hoi ra file\n";
		cout << "5. Doc danh sach cac cau hoi tu file\n";
		cout << "6. Loc cac cau hoi trung nhau\n";
		cout << "Moi chon: ";
		cin >> chon;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');//Xoa bo dem nhap
		switch (chon)
		{
		case '1': //Tao de thi 
			dsCauhoi.clear();
			cout << "So cau hoi hien tai: " << dsCauhoi.size() << endl;
			break;
		case '2': //Them cau hoi
			CauhoiTN * cauhoimoi;
			cauhoimoi = new CauhoiTN();//Khoi tao cau hoi moi
			cauhoimoi->nhap(); //Nhap noi dung tu ban phim
			dsCauhoi.push_back(*cauhoimoi); //chen vao danh sach
			cout << "So cau hoi hien tai: " << dsCauhoi.size() << endl;
			break;
		case '3': //In danh sach
			cout << "Danh sach cau hoi gom " << dsCauhoi.size() << " cau:" << endl;
			for (int i = 0; i < dsCauhoi.size(); i++)
			{
				cout << "Cau hoi " << (i + 1) << ". ";
				dsCauhoi[i].xuat();
			}
			break;
		case '4': //Ghi ra file
			os.open("TracNghiem.TTN");
			for (int i = 0; i < dsCauhoi.size(); i++)
			{
				dsCauhoi[i].ghifile(os);
			}
			os.close();//Dung quen dong file sau khi ghi
			cout << "Da ghi " << dsCauhoi.size() << " cau hoi vao file!" << endl;
			break;
		case '5': //Doc tu file
			is.open("TracNghiem.TTN");
			while (!is.eof())
			{
				CauhoiTN* cauhoimoi = new CauhoiTN();
				cauhoimoi->docfile(is);
				dsCauhoi.push_back(*cauhoimoi);
			}
			is.close();
			break;
		case '6': //Loc cac cau hoi trung
			break;
		}

	} while (chon != '0');
	cout << "Ket thuc thanh cong";
}