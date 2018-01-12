#include <iostream>

using namespace std;

class numcheck{
	
	int n;
	bool result;

	public:

	numcheck(){
		n=0;
		result=false;
	}

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
	
	void oddCheck(int a){
	
		//Enter oddcheck code here

	}

	void primeCheck(int a){
	
		//Enter prime check code here

	}

	void perfectCheck(int a){
	
		//Enter perfect check code here

	}

	void compositeCheck(int a){
	
		//Enter composite check code here
	
	}

	bool getResults(){
		return result;
	}

	
};

int main ()
{
	int a, ch;
	bool result;

	cout<<"What do you want to do?"<<"\n";
	cout<<"Press 1 to check whether the number is a palindrome"<<"\n";
	cout<<"Press 2 to check whether the number is an odd number"<<"\n";
	cout<<"Press 3 to check whether the number is a prime number"<<"\n";
	cout<<"Press 4 to check whether the number is a perfect number"<<"\n";
	cout<<"Press 5 to check whether the number is a composite number"<<"\n";
	cin>>ch;
	cout<< "Enter a number:";
	cin>>a;
	
	numcheck ob;
	
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
		case 4: ob.perfectCheck(a);
			cout<<ob.getResults();
			break;
		case 5: ob.compositeCheck(a);
			cout<<ob.getResults();
			break;
		default: cout<< "Invalid entry :( ";
	}

	return 0;
}			

void func_perfect(a)
{ 
	int i=1,sum=0;
       	while(i<a)
   	{      if (a%i==0)
          	{
			sum=sum+i;
           		i++;
         	 }
	}
      	if(sum==a)
        	cout<<a<<"is a perfect no.";
	else 
		cout<<a<<"is not a perfect no";
}

int func_odd()
{
    int a;

    cout << "Enter an integer: ";
    cin >> a;

    if ( a % 2 == 0)
        cout << a << " is even.";
    else
        cout << a << " is odd.";

    return 0;
}


