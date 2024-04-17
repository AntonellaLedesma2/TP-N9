#include<bits/stdc++.h>
using namespace std;

string InvertirPalabra(int inicio, int final, string frase);

int main(){
	int inicio;
    int final = -1;
    string frase;
    cout << "Ingrese una frase" << endl;
    getline(cin, frase);
	cout<<"ingrese el inicio: "<<endl;
    cin>>inicio;
    cout << "ingrese el fin: " << endl;
    cin>>final;
    
	cout<<InvertirPalabra(inicio, final, frase)<<endl;
	return 0;
}
string InvertirPalabra(int inicio, int final, string frase){
int i;
int aux;

for(i>inicio; i<final/2; i++ ){
	aux=frase[i];
	frase[i]=frase[final-i];
	frase[final-i]=aux;
}
return frase;
}