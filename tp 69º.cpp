#include <bits/stdc++.h>
using namespace std;
string DividirPalabra(string frase, string caracter);
int main (){
string frase;
string caracter;
cout<<"ingrese frase"<<endl;
getline (cin,frase);
cout<<"ingrese un carcter"<<endl;
cin>>caracter;

cout<<DividirPalabra(frase,caracter)<<endl;

return 0;
} 

string DividirPalabra(string frase, string caracter){
int i;

for (i=0; i<frase.size();i++){
if (frase[i]==' ' ){
frase[i]=caracter[0];	
}	

}


return frase;
}
