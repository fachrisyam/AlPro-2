#include<iostream>
using namespace std;

int main(){
	int a,array['a'];
	
	cout<<"Jumlah Dus:";
	cin>>a;

	cout<<"Nomor Dus:";
	for(int p=0;p<a;p++){
		array[p]=(p+1)*2;
		cout<<array[p]<<" ";
	}
	for(int p=0;p<a;p++){
			cout<<"\nNomor Dus "<<p+1<<":"<<array[p];		
	}
	return 0;
}
