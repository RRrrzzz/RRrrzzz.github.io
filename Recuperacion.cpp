#include <iostream>
using namespace std;
main(){
	char es[40];
	int n1, n2, n3, n4, prom;
	int res;
	cout<<"Ingrese primera nota: ";
	cin>>n1;
	cout<<"Ingrese segunda nota: ";
	cin>>n2;
	cout<<"Ingrese tercera nota :";
	cin>>n3;
	cout<<"Ingrese cuarta nota :";
	cin>>n4;
	prom = (n1+n2+n3+n4)/4;
	cout<<"el promedio del estudiante es de: "<<prom<<endl;
	cout<<"ingrese el nombre del estudiante, carne y materia separadas por comas"<<endl;
	cin>>es; 
	if (prom <=59){
		cout<<"el alumno perdio el curso";
	}else{
		cout<<"el alumno aprobo el curso";
	}
	cout<<"Desea agregar otro alumno s/n"<<endl;
	cin>>res;
	
	//----------------------------------------------------------------------------------------------
	if (res='s'){
	
	char es[40];
	int n1, n2, n3, n4, prom;
	cout<<"Ingrese primera nota: ";
	cin>>n1;
	cout<<"Ingrese segunda nota: ";
	cin>>n2;
	cout<<"Ingrese tercera nota :";
	cin>>n3;
	cout<<"Ingrese cuarta nota :";
	cin>>n4;
	prom = (n1+n2+n3+n4)/4;
	cout<<"el promedio del estudiante es de: "<<prom<<endl;
	cout<<"ingrese el nombre del estudiante, carne y materia separadas por comas"<<endl;
	cin>>es; 
	if (prom <=59){
		cout<<"el alumno perdio el curso";
	}else{
		cout<<"el alumno aprobo el curso";
	}
	}
	
	
	
	
	return 0;
}