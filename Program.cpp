#include <stdio.h>
#include <conio.h>

class numcheck{
	
	int n;
	bool result = false;

	public:

	void palindromeCheck(int a){
		int sum=0;
		n = a;
		do{
		  int r = n%10;
		  n = n/10;
		  sum = sum*10+r;
		}while(n==sum);

		if(n==sum) result=true;
	}
	
	//Add the next numcheck function above this line after palindromecheck

	bool getResults(){
		return result;
	}

	
}

int main ()
{
	int a, ch, re;
	bool result;

	cout<<"\n"<<"What do you want to do?"<<"\n";
	cout<<"Press 1 to check whether the number is a palindrome"<<"\n";
	cout<<"Press 2 to check whether the number is an odd number"<<"\n";
	cout<<"Press 3 to check whether the number is a prime number"<<"\n";
	cout<<"Press 4 to check whether the number is a perfect number"<<"\n";
	cout<<"Press 5 to check whether the number is a composite number"<<"\n";
	cin>>ch;
	cout<< "Enter a number:";
	cin>>a;
	switch (ch)
	{
		case 1: ob.palindromeCheck(a);
			cout<<ob.getResults();
			break;
		case 2: ob.oddCheck(a);
			cout<<ob.getResults();
			break;
		case 3: ob.primeCheck(a);
			cout<<ob.getResults();
			break;
		case 4: perfectCheck(a);
			cout<<ob.getResults();
			break;
		case 5: compositeCheck(a);
			cout<<ob.getResults();
			break;
		default: cout<< "Invalid entry :( "
	}

	return 0;
}			
