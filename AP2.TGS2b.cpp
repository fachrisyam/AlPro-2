#include<iostream>
using namespace std;

int main(){
	int a,b,c=0;
	int dus[3][3]={{2,4,6},{8,10,12},{14,16,18}};
	cout<<"Jumlah dus= 9"<<endl;
	for(a=0;a<3;a++){
		for(int b=0;b<3;b++){
			cout<<dus[a][b]<<" ";
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++,c++){
			cout<<"\nNomor Dus "<<c+1<<"= "<<dus[a][b];
		}		
	}
	return 0;	
}
