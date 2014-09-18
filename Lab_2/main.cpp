#include "MyString.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int k;
	cout<<"Enter count of object: ";
	cin>>k;

	MyString *stringArray=new MyString[k];

	for(int j=0;j<k;j++){
		MyString obj(200);
		stringArray[j]=obj;
	}
	cout<<"Original Array:";
	for(int i=0;i<k;i++){
		stringArray[i].getString();
	}

	MyString::sort(k,stringArray);

	cout<<"Sort array: ";
	for(int i=0;i<k;i++){
		stringArray[i].getString();
	}

//	Other test
	MyString zzz(200);
	zzz.getString();
	cout<<"1-st letter= "<<zzz[1]<<endl;
	cout<<"Fact size of string= "<<zzz.getFactSize()<<endl;

	MyString qwerty(15);
	cout<<"a>b= "<<(zzz>qwerty)<<endl;
	cout<<"a<b= "<<(zzz<qwerty)<<endl;
	cout<<"a!=b= "<<(zzz!=qwerty)<<endl;
	cout<<"a==b= "<<(zzz==qwerty)<<endl;
	cout<<"a>=b= "<<(zzz>=qwerty)<<endl;
	cout<<"a<=b= "<<(zzz<=qwerty)<<endl;
	zzz+=qwerty;
	cout<<"concat= ";
	zzz.getString();

	getch();
	return 0;
}