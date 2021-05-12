#include"hinhchunhat.h"
void hinhchunhat::nhap()
{
	cout << "nhap chieu dai: " << endl;
	cin >> this->chieudai;
	cout << "nhap chieu rong: " << endl;
	cin >> this->chieurong;

}
void hinhchunhat::xuat()
{
	cout << "Chieu Dai " << chieudai << endl;
	cout << "Chieu Rong " << this->chieurong << endl;
}
float hinhchunhat::tinhchuvi()
{
	return(this->chieudai + this->chieurong) * 2;
}
float hinhchunhat::tinhdientich()
{
	return this->chieudai*this->chieurong;
}