#include <iostream>

using namespace::std;

int pangkat(int angka ,int pangkatt){
if(pangkatt==0)
    return 1;
    else
        return angka*pangkat( angka, pangkatt -1);

}
main(){
   int a,b,bil;
    int c,d,mod;
 cout<<"\t\tPANGKAT"<<endl;
 cout<<"\tmasukkan bilangan pertama :";cin>>a;
 cout<<"\tmasukkan bilangan kedua :";cin>>b;
 cout<<"\thasilk ="<<pangkat(a,b)<<endl;
 cout<<"\t\tSISA HASIL BAGI (%) "<<endl;
 //cout<<"\tmasukkan bilangan :";cin>>bil;
 cout<<"\tmasukkan bilangan pertama :";cin>>c;
 cout<<"\tmasukkan bilangan kedua :";cin>>d;
 mod= c % d   ;
 cout<<"\t\tTotal hasil Bagi :"<<mod<<endl;
 return 0;
}
