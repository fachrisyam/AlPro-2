#include<iostream>
using namespace std;

int main(){
	int a,b,c=0,in;
	int dus[3][3]={{2,4,6},{8,10,12},{14,16,18}};
	cout<<"Jumlah dus= ";
	cin>>in;
	for(a=0;a<3;a++){
		for(int b=0;b<3;b++,c++){
			if(c<in){
			cout<<dus[a][b]<<" ";
			}
		}
	}
	c=0;
	for(a=0;a<3;a++){
		for(b=0;b<3;b++,c++){
			if (c<in){
			cout<<"\nNomor Dus "<<c+1<<"= "<<dus[a][b];
			}
		}		
	}
	return 0;	
}
