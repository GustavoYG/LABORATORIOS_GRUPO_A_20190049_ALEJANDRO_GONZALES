#include <iostream>
using namespace std;
bool primo(int y){
	int x;
	bool condicion;
	if(y != 1 && y != 0){
		for(int i = 2; i <= y ; i++){
			if(y % i == 0){
				if(y == i){
					condicion = true;
				}
				else {
					condicion = false;
					return condicion;
				}
			}
		}
	}
	else condicion = false;
	return condicion;
}
int main(){
		int x,y;
		cout<<"Ingrese el primer valor: "<<endl;
		cin>>x;
		cout<<"Ingrese el segundo valor: "<<endl;
		cin>>y;
		if (x<y){
		for(int i = x ; i <=y ; i++){
			if(primo(i))cout<<i<<endl;
			
		}
		}
		else{
			cout<<"El primer valor es mayor al segundo, no procede";
		}
		return 0;
	}
		
