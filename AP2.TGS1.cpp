#include <iostream>
using namespace std;

int main(){
	int i,sum,n;
	cout<<"Jumlah bilangan:";
	cin>>n;
	for(int a=0;a<n;a++){
		cin>>i;
		sum+=i;
	}
	cout<<"Hasil Penjumlahan:"<<sum;
	return 0;
}
