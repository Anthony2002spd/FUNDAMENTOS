#include<iostream>
using namespace std;

int main()
{
	int AJTE_i=0,AJTE_l;
	float AJTE_x,AJTE_s=0;
	cout<<"ingrese el limite AJTE_l="; cin>>AJTE_l;
	do{
		
	cout<<"ingrese el numero AJTE_x="; cin>>AJTE_x;
	AJTE_i=AJTE_i+1;
	AJTE_s=AJTE_s+AJTE_x;



	}while(AJTE_i<AJTE_l);
	cout<<"Se ingresaron "<<AJTE_l<<" numeros "<< "que sumaron "<<AJTE_s<<endl;
	return 0;



}
