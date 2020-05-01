#include <iostream>
using namespace std;
int main()
{
	int jam1,menit1,detik1,jam2,menit2,detik2,durasi1,durasi2,hasil1,hasil2,hasil3,jam3,menit3,detik3,sisa1,sisa2;
	//bagian1
	cout << "masukan jam1" << std::endl;
	std::cin >>jam1;
	
	cout <<"masukan menit1" << std::endl;
	std::cin >>menit1;
	
	cout <<"masukan detik1" << std::endl;
	std::cin >>detik1;
	
	//bagian2
	cout <<"masukan jam2" << std::endl;
	std::cin >>jam2;
	
	cout <<"masukan menit2" << std::endl;
	std::cin >>menit2;
	
	cout <<"masukan detik2" << std::endl;
	std::cin >>detik2;
	
	//proses hitung
	jam1= jam1*3600;
	menit1=menit1*60;
	durasi1=jam1+menit1+detik1;
	
	jam2= jam2*3600;
	menit2=menit2*60;
	durasi2=jam2+menit2+detik2;
	
	hasil1=durasi1-durasi2;
	cout<<"hasil :"<<hasil1<< std::endl;
	
	//detik ke jam
	jam3=hasil1/3600;
	sisa1=hasil1%3600;
	menit3=sisa1/60;
	detik3=sisa1%60;
	
	cout<<"jam : "<<jam3<<std::endl;
	cout<<"menit: "<<menit3<< std::endl;
	cout<<"detik: "<<detik3<< std::endl;
	
	//perhitungan biaya
	hasil3=hasil1*5;
	cout<<"biaya :"<<hasil3<< std::endl;
	return 0;
	 
	
}