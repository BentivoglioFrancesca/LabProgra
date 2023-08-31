#include <bits/stdc++.h>
using  namespace std;
string SepararCadena (string frase);
int main(){
	string frase;
	cout<<"ingrese una cadena"<<endl;
	getline (cin,frase);
	
	cout<<SepararCadena (frase)<<endl;
return 0;
}

string SepararCadena (string frase) {
int i;
int contador=0;
string nfrase;
for(int i=0; i<frase.size();i++){
if (contador==1){
nfrase += ',';
contador=0;	
}
if (contador!=1) {
nfrase += frase[i];

contador ++;	
}

	
}
	
	
return nfrase;	
}



