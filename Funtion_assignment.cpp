#include<iostream>
using namespace std;
void eveodd(){
	int n;
	cout<<"Input number : ";
	cin>>n;
	if(n%2==0){
	cout<<"Even "<<endl;
	}else{
	cout<<"Odd "<<endl;
	} 
	}
int eveodd1(){
	int n;
	cout<<"Input number : ";
	cin>>n;
	if(n%2==0){
	cout<<"Even "<<endl;
	}else{
	cout<<"Odd "<<endl;
	} 
	return n;
	}
void eveodd2(int n){
	if(n%2==0){
	cout<<"Even "<<endl;
	}else{
	cout<<"Odd "<<endl;
	} 
	}
int eveodd3(int n){
	if(n%2==0){
	cout<<"Even "<<endl;
	}else{
	cout<<"Odd "<<endl;
	} 
	return n;
		}
int main(){
	int n;
	cout<<"EVEN ODD CHECK"<<endl;
	cout<<"1st Function"<<endl;
	eveodd();
	cout<<"2nd Function"<<endl;
	eveodd1();
	cout<<"3rd Function"<<endl;
	cout<<"Input number :";
	cin>>n;
	eveodd2(n);
	cout<<"4th Function"<<endl;
	cout<<"Input number :";
	cin>>n;
	eveodd3(n);
	return 0;
}