#include <bits/stdc++.h>
using namespace std;
int ContarValor (string f);
int main ()
{ 
string frase;
cout<<"ingrese una frase: "<<endl;
getline (cin, frase);

cout<<ContarValor (frase)<<endl;

return 0;
}

int ContarValor (string f){
int contador=0;
int i; 
for (i=0; i<f.size(); i++){
 	if (f[i]=='a'|| f[i]=='e') {
	contador+=1; 			
	}
	if (f[i]=='o'|| f[i]=='s') {
		contador+=2; 			
		}
	if (f[i]=='d'|| f[i]=='i'||f[i]=='n'|| f[i]=='r') {
		contador+=3; 			
		}	
	if (f[i]=='c'|| f[i]=='l'||f[i]=='t'|| f[i]=='u') {
		contador+=4; 				
		}
	if (f[i]=='m'|| f[i]=='p') {	
		contador+=5; 
		}
	if (f[i]=='b'|| f[i]=='f'||f[i]=='g'|| f[i]=='h'|| f[i]=='j'||f[i]=='q'|| f[i]=='v'|| f[i]=='x'||f[i]=='y'|| f[i]=='x'){
	contador+=6;
		}
	if (f[i]=='k'|| f[i]=='w') 
	{	
		contador+=7;
	}
}
return contador;
}
