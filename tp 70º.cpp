#include <bits/stdc++.h>
using  namespace std;
bool NombreElegante (string f);
int main () {
string f;
cout<<"ingrese nombre"<<endl;
getline (cin,f);
if(NombreElegante(f)==true){
	cout<<"true"<<endl;
}
if (NombreElegante(f)==false){
	cout<<"false"<<endl;
}
	
	return 0;
}
bool NombreElegante (string f){
bool flag=false;
string inicio;
inicio = f[0];
string final;
final= f [f.size()-1];
if (inicio =="A" && final == "a"){
flag=true;
}

return flag;
}
