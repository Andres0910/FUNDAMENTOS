#include<iostream>
using namespace std;
int main()
 {
 	float x, l, tb, Pdesc=10%, Vdesc, tdd, Piva=12%, Viva, tf;
 	int i=0, a=0;
 	cin>>l;
 	do{
 		cin>>x;
 		i=i+1;
 		a=a+x;
	 }while(i<l)
	 tb=a;
	 Vdesc=tb*Pdesc;
	 tdd=tb-Vdesc;
	 Viva=tdd*Pivs;
	 tf=tdd+Viva;
	 cout<<tf<<endl;
	 return 0;
 }