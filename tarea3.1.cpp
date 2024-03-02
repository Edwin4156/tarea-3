#include <iostream>
using namespace std;
main(){
	/*
	int i= 0;
	while(i>5){
		cout<<"while : "<<i<<endl;
		i++;
		
	}*/
    
	char respuesta;
	
	do{
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	}while (respuesta=='s');
		
	system ("pause");
}
