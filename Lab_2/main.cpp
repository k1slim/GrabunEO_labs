#include "MyString.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int k;

	cout<<"Enter count of object"<<endl;
	cin>>k;

	MyString *stringArray=new MyString[k+1];

	for(int j=0;j<k;++j){
		MyString obj(200);
		stringArray[j]=obj;
	}
	for(int i=0;i<k;i++){
		stringArray[i].getString();
	}


//	Test
	/*MyString zzz(200);
	zzz.setString();
	zzz.getString();
	cout<<"1-st letter= "<<zzz[1]<<endl;
	cout<<"Fact size of string= "<<zzz.getFactSize()<<endl;

	MyString qwerty(15);
	qwerty.setString();
	cout<<"a>b= "<<(zzz>qwerty)<<endl;
	cout<<"a<b= "<<(zzz<qwerty)<<endl;
	cout<<"a!=b= "<<(zzz!=qwerty)<<endl;
	cout<<"a==b= "<<(zzz==qwerty)<<endl;
	cout<<"a>=b= "<<(zzz>=qwerty)<<endl;
	cout<<"a<=b= "<<(zzz<=qwerty)<<endl;
	zzz+=qwerty;
	cout<<"concat= ";
	zzz.getString();*/

	getch();
	return 0;
}