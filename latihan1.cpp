#include <conio.h>
#include <iostream>

using namespace std;

int main()

{

	char nama_brg[20];
	int jmlh_beli=0,tot_beli=0, x,y;
	long int harga=0,hrg_brg=0,total=0,bayar=0,diskon;

	cout << "masukan jumlah macam barang yang sudah dibeli :";
	cin>>y;
	x=1;

while (x<=y){
	cout << "\nMasukan nama barang ke "<<x<<":";
	cin>>nama_brg;
	cout << "Masukan harga barang :";
	cin>>harga;
	cout << "Masukan jumlah beli :";
	cin>>jmlh_beli;

	hrg_brg=harga*jmlh_beli;
	total=total+hrg_brg;
	tot_beli+=jmlh_beli;
	x++;
}
if(total>=1000000){
	diskon=0.1*total;
}
if(total>=501000 && total<=1000000){
	diskon=0.05*total;
}
else if(total<=501000){
	diskon=0+total;
}

bayar = total - diskon;
cout << "\nTotal beli :"<<tot_beli<<endl;
cout << "Total pembelian :"<<total<<endl;
cout << "Mendapat diskon sebesar :"<<diskon<<endl;
cout << "\nTotal yang harus dibayar :"<<total-diskon<<endl;
getch();

}