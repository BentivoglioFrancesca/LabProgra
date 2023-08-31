#include <bits/stdc++.h>
using  namespace std;
string InsertarPunto (string frase);
int main(){
	string frase;
	cout<<"ingrese una cadena"<<endl;
	getline (cin,frase);
	
	cout<<InsertarPunto(frase)<<endl;
return 0;
}

string InsertarPunto (string frase) {
int i;
int contador=0;
string nfrase;
for(int i=0; i<frase.size();i++){
if (contador==3){
nfrase += '.';
contador=0;	
}
if (contador!=3) {
nfrase += frase[i];

contador ++;	
}

	
}
	
	
return nfrase;	
}



