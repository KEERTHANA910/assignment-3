#include<iostream>
using namespace std;
int main(){
char a;
cout<<"Enter a character= ";
cin>>a;
if(a>='a' && a<='z' ||a>='A' && a<='Z') {
cout<<"alphabet"<<endl;
}else{
cout<<"not an alphabet"<<endl;
}
return 0;
}
