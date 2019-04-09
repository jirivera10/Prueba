#include<iostream>
using namespace std;

int diametro(int n){
  int a= n*2;
  return a;
}
int area(int n){
  int a=3.14159265358979*n*n;
  return a;
}
int perimetro(int n){
  int a=2*3.14159265358979*n;
  return a;
}
int main(){
  int entrada;
  cout<<"Entre el radio: ";
  cin>>entrada;
  cout<<"El resultado del perimetro es: "<<perimetro(entrada)<<""<<endl;
  cout<<"El resultado del area es: "<<area(entrada)<<""<<endl;
  cout<<"El resultado del diametro es: "<<diametro(entrada)<<""<<endl;
  return 0;
}
