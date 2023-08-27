#include <bits/stdc++.h>
using namespace std;
void BuscarPoscion (string frase, string letra);
int main () {
string frase, letra;
cout<<"ingrese una frase"<<endl;
getline(cin,frase);
cout<<"ingrese una letra"<<endl;
cin>>letra;

BuscarPoscion (frase, letra) ;

return 0;
}




void BuscarPoscion (string frase, string letra){
string f, l;
int contador=0;
int posicion=0;
for(int i=0; i<frase.size();i++){
	 	if (frase[i]==letra[0]){
		posicion= i+1;
		cout<<posicion<<" ";
		posicion=0;
		}
	}
}
