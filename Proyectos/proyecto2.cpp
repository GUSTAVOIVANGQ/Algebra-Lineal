#include<iostream>
#include <cstdlib>
using namespace std;
main(){
	int tam;
	cin>>tam;
	int num,x=tam,y=tam,k=0;
	char tri[tam][tam];
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){    
			tri[j][i]=' ';         
		}                        
	} 
	while(k<3500){
		k++;
		num=rand()%3;
		switch(num){
		case 0:
			tri[(x+tam-1)/2][(y+tam-1)/2]='.';
			x=(x+tam-1)/2;
			y=(y+tam-1)/2;
			break;
		case 1:
			tri[x/2][(y+tam-1)/2]='.';
			x=x/2;
			y=(y+tam-1)/2;
			break;
		case 2:	
			tri[(x+tam/2)/2][y/2]='.';
			x=(x+tam/2)/2;
			y=y/2;
			break;
		}
		system("cls");
		for(int i=0;i<tam;i++){
			for(int j=0;j<tam;j++){
				cout<<" ";
				cout<<tri[j][i];
			}
			cout<<"\n";
		}	
	}	
}
