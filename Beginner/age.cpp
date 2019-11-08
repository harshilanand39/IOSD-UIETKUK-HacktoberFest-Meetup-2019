#include<stdio.h>
#include<conio.h>
void main()
{
int age 
clrscr();
cout<<"Enter your age";
cin>>age;
if(age>=18)
{
    cout<<"Adult";
}
else if(age>10 && age<18)
    cout<<"Teenager";
}
else{
    cout<<"Child";
}
getch();
}