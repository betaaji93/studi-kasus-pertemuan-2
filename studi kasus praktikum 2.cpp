#include <iostream>
#include<conio.h>
using namespace std;

void top(int TA1,int total,int TA,int ongkir){
	cout<<"total biaya belanja : "<<total<<endl;
	cout<<"total biaya ongkir  : "<<ongkir<<endl;
	cout<<"total tagihan setelah terkena diskon : "<<TA1<<endl;
	

};

void hitung1(int TA,int total,int ongkir)
{
	int TA1;
	if(total>=25000 && total<50000)
	{
		TA1=(TA-3000);
		top(TA1,total,TA,ongkir);
	
		
	}
	else if(total>=50000 && total<150000)
	{
		TA1=(TA-5000)*0.85;

		top(TA1,total,TA,ongkir);

	}
	else if (total>=150000){
		TA1=(TA-8000)*0.65;
		top(TA1,total,TA,ongkir);
	}
	else 
	{
		TA1=TA;
	
	}
	
};
void hitung(int total,int jarak)
{
	int TA;
	int ongkir;
	if(jarak<=3)
	{
		ongkir=15000;
		TA=total + ongkir;	
		hitung1(TA,total,ongkir); 
	}
	else if(jarak>3)
	{
		ongkir=25000;
		TA=total + ongkir;
		hitung1(TA,total,ongkir);
	}
	else{
		TA=total;
		hitung1(TA,total,ongkir);
	}
};

int main ()
{
	float total;
	int beli1,beli2,beli3,beli4,beli5,antar,jarak;
	cout<<"silahkan pilih menu : "<<endl;
		cout<<"1. Ayam geprek : 21.000 :";cin>>beli1;
		cout<<"2. Ayam goreng : 17.000 :";cin>>beli2;
		cout<<"3. Udang goreng : 19.000 :";cin>>beli3;
		cout<<"4. Cumi goreng : 20000 :";cin>>beli4;
		cout<<"5. Ayam bakar : 25000 :";cin>>beli5;
		total=(beli1*21000)+(beli2*17000)+(beli3*19000)+(beli4*20000)+(beli5*25000);
		cout<<"masukkan jarak rumah anda : (dalam km)\n";
		cin>>jarak;
		hitung(total,jarak);
		getch();
		}
