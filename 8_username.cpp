#include<iostream> 
using namespace std;
int main()
{
	string username; 
	string password; 
	cout<<"Masukan username :";
	cin>>username; 
	cout<<"Masukan Password :";
	cin>>password; 
	
	if(username == "admin" && password == "admin") 
	
		cout<<"Anda adalah admin"<<endl;
	
	else
		cout<<"Anda bukan admin"<<endl;
	

	return 0;
}
