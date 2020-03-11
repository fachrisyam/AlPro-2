#include <iostream>
using namespace std;

int main(){
	int n,sum,i;
	cout<<"Jumlah Bilangan:";
	cin>>n;
	int array[n];
	for(i=0;i<n;i++){
		cin>>array[i];
		sum+=array[i];
	}
	cout<<"Hasil Penjumlahan:"<<sum;
	return 0;
}
