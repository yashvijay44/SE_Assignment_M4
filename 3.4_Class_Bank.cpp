#include<iostream>
using namespace std;

class bank
{
	private :
	int an,da,wa,cb;
	char nd[100],ta[100];
	float b;
	
	public :
		void getdata()
		{
			cout<<"\n\n\t Input Name of Depositor :== ";
			cin>>nd;
			cout<<"\n\n\t Input Account Number :== ";
			cin>>an;
			cout<<"\n\n\t Input Type of Account :== ";
			cin>>ta;
			cout<<"\n\n\t Balance in the Account :== ";
			cin>>b;
			cout<<"\n\n\t Deposited an Amount :== ";
			cin>>da;
			cout<<"\n\n\t Withdraw an Amount :== ";
			cin>>wa;
		}
		void putdata()
		{
			cout<<"\n\n\t==========================";
			cout<<"\n\n\t Name of Depositor ="<<nd;
			cout<<"\n\n\t Account Number ="<<an;
			cout<<"\n\n\t Type of Account ="<<ta;
			cout<<"\n\n\t Balance in the Account ="<<b;
			cout<<"\n\n\t Deposited an Amount ="<<da;
			
			
		}
		void chebal()
		{
			cout<<"\n\n\t Total balance ="<<b+da;
		}
		void vid()
		{
			if(b<wa)
			cout<<"\n\n\t Insufficiant Balance";
			else
			cout<<"\n\n\t Balance is :  "<<b+da-wa;
		}	
		
	
		
};
main()
{

bank obj;

obj.getdata();
obj.putdata();
obj.chebal();
obj.vid();


}
