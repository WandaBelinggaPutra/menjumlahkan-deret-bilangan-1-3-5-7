#include<iostream>
#include<conio.h>

using namespace std;
int main(){
int a=1,b=19,n;
cout<<"PROGRAM MENJUMLAHKAN DERET BILANGAN 1+3+5+7+"<<endl;

for(a=a;a<=b;a+=2)
{
cout<<a;
if(a<b);
{
cout<<"+";
}
}

cout<<"=";
n=(b+1)/2;
n=n*n;
cout<<n;

getch();
}
