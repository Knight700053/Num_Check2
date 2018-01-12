#include<stdio.h>
#include<conio.h>
void main ()
{
	clrscr();
	int a, ch, re;
	cout<< "Enter a number:";
	cin>>a;
	cout<<"\n"<<"What do you want to do?"<<"\n";
	cout<<"Press 1 to check whether the number is a palindrome"<<"\n";
	cout<<"Press 2 to check whether the number is an odd number"<<"\n";
	cout<<"Press 3 to check whether the number is a prime number"<<"\n";
	cout<<"Press 4 to check whether the number is a perfect number"<<"\n";
	cout<<"Press 5 to check whether the number is a composite number"<<"\n";
	cin>>ch;
	switch (ch)
	{
		case 1: func_palindrome(a);
			break;
		case 2: func_odd(a);
			break;
		case 3: func_prime(a);
			break;
		case 4: func_perfect(a);
			break;
		case 5: func_composite(a);
			break;
		default: cout<< "Invalid entry :( "
	}
	getch();

}			
             void func_perfect(a)
         { int i=1,sum=0;
            while(i<a)
   {       if (a%i==0)
          {sum=sum+i;
           i++;
          }
      if(sum==a)
     {cout<<a<<"is a perfetc no.";
else cout<<i<<"is not a perfect no";
}
