#include"hinhchunhat.h"
void main()
{
	hinhchunhat hcn;
	hcn.nhap();
	hcn.xuat();

	float chuvi = hcn.tinhchuvi();
	float dientich = hcn.tinhdientich();
	
	cout << "Chu vi la " <<chuvi<< endl;
	cout << "Dien tich la " <<dientich<< endl;

	system("pause");
}