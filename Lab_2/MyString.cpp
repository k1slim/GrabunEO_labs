#include "MyString.h"
#include <iostream>

using namespace std;

//		Constructors

MyString::MyString():n(0),str(nullptr){

};

MyString::MyString(int n):n(n),str(new char[n]){
	cout<<"Enter a text.Max count of letters= "<<n-1<<endl;
	cin.getline(str,n);
};

MyString::MyString(int n,char *initStr):n(n),str(new char[n]){
	for(int i=0;i<=n;i++){
		str[i]=initStr[i];
	}
};

MyString::MyString(const MyString &rhs){
	n=rhs.n;
	str=new char[n];
	for(int i=0;i<=n;i++){
		str[i]=rhs.str[i];
	}
};

MyString::~MyString(){
	delete[] str;
	n=0;
	str=nullptr;
};

//		Methods

void MyString::getString() const{
	cout<<str<<endl;	
};

void MyString::setString(){
	delete[] str;
	str=nullptr;
	str=new char[n];
	cout<<"Enter a new text.Max count of letters= "<<n-1<<endl;
	cin.getline(str,n);
};

void MyString::addToString(){
	int oldN=this->getFactSize();
	cout<<"Enter additional text.Max count of letters= "<<n-oldN<<endl;
	char *addStr=new char[n-oldN];
	cin.getline(addStr,n-oldN);
	for(int i=0;i<n;i++){
		str[oldN+i]=addStr[i];
	}
};

int MyString::getFactSize() const{
	for(int i=0;i<n;i++){
		if(str[i]=='\0'){
			return i;
		}
	}
};

int MyString::getMaxSize() const{
	return n;
};

//		Operators

MyString & MyString::operator=(const MyString &rhs){
    if(this!=&rhs){
		delete [] str;
		str=nullptr;
		n=rhs.n;
		str=new char[n];
		for(int i=0;i<=n;i++){
			str[i]=rhs[i];
		}
	}
	return *this;
};

const MyString operator+(const MyString &first, const MyString &second){
	int oldN=first.getFactSize();
	char *newStr=new char[first.n+second.n];
	for(int i=0;i<=oldN-1;i++){
		newStr[i]=first[i];
	}
	for(int i=0;i<=second.getFactSize();i++){
		newStr[i+oldN]=second[i];
	}
	MyString nString(first.n+second.n,newStr);
	return nString;
};

MyString & MyString::operator+=(const MyString &rhs){
	return *this=*this+rhs;
};

char & MyString::operator[](int i) const{
	return str[i];
};

bool operator>(const MyString &first, const MyString &second) {
	int minN=(first.getFactSize()<second.getFactSize())?first.getFactSize():second.getFactSize();
	for(int i=0;i<minN;i++){
		if(first[i]!=second[i]){
			if(first[i]>second[i]){
				return true;
			}
			else{
				return false;
			}
		}
	}
	return (first.getFactSize()>second.getFactSize());
};

bool operator<(const MyString &first, const MyString &second){
	return (!(first>second) && !(first==second));
};

bool operator==(const MyString &first, const MyString &second){
	int count=0;
	if(first.getFactSize()==second.getFactSize()){
		for(int i=0;i<=first.getFactSize();i++){
			if(first[i]==second[i]){
				count++;
			}
		}
		return count-1==first.getFactSize();
	}
	return false;
};

bool operator!=(const MyString &first, const MyString &second){
	return !(first==second);
};

bool operator>=(const MyString &first, const MyString &second){
	return !(first<second);
};

bool operator<=(const MyString &first, const MyString &second){
	return !(first>second);
};

void MyString::sort(int k,MyString *strArray){
	for(int i=1;i<k;++i){
		for(int j=i+1;j<k;++j){
			if(strArray[i]>strArray[j]){
				MyString timed=strArray[j];
				strArray[j]=strArray[i];
				strArray[i]=timed;
			}
		}
	}
};
