int main()
{
int origNum,num,rem,sum=0;
cout<<"enter a positive integer:";
cin>>origNum;
num=origNum;

while(num!=0)
{
digit=num%10;
sum+=digit*digit*digit;
num/=10;
}
if(sum==origNum)
cout<<origNum<<"is an armstrong number";
else<<origNum<<"is not an armstrong number";
return 0;
}
