#include <iostream>
#include "Integer.h"

using namespace std;


int main()
{
   



 char choice;
    
do 
{
     cout<<"Hello! Please enter the first letter of the functionality you would like to use: "<<endl;
     cout<<"                                                               "<<endl;
    cout<<"A for Addition, M for Multiplying, D for Division, and S for Subtraction. Enter E to Exit"<<endl;
    cout<<"                                                               "<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 'A' :
        {
         cout<<"You Chose Addition!"<<endl;
         cout<<"Enter Your First Integer"<<endl;
         int choice1;
         cin>>choice1;
         Integer a(choice1);
         cout<<"Enter Your Second Integer"<<endl;
         int choice2;
         cin>>choice2;
         Integer b(choice2);
         cout<<"These Two Integers Added Is: ";
         Integer c(a.add(b));
         cout<<c.getValue()<<endl;
         cout<<"                                                               "<<endl;
         break;
         
        }
        case 'M' :
        {
         cout<<"You Chose Multiplying!"<<endl;
         cout<<"Enter Your First Integer"<<endl;
         int choice1;
         cin>>choice1;
         Integer a(choice1);
         cout<<"Enter Your Second Integer"<<endl;
         int choice2;
         cin>>choice2;
         Integer b(choice2);
         cout<<"These Two Integers Multiplied Is: ";
         Integer c(a.multiply(b));
         cout<<c.getValue()<<endl;
         cout<<"                                                               "<<endl;
         break;
         
        }
        case 'D' :
        {
         cout<<"You Chose Division!"<<endl;
         cout<<"Enter Your First Integer"<<endl;
         int choice1;
         cin>>choice1;
         Integer a(choice1);
         cout<<"Enter Your Second Integer"<<endl;
         int choice2;
         cin>>choice2;
         Integer b(choice2);
         cout<<"These Two Integers Divided Is: ";
         Integer c(a.divide(b));
         cout<<c.getValue()<<endl;
         cout<<"                                                               "<<endl;
         break;
         
        }
        case 'S' :
        {
         cout<<"You Chose Subtraction!"<<endl;
          cout<<"Enter Your First Integer"<<endl;
         int choice1;
         cin>>choice1;
         Integer a(choice1);
         cout<<"Enter Your Second Integer"<<endl;
         int choice2;
         cin>>choice2;
         Integer b(choice2);
         cout<<"These Two Integers Subtracted Is: ";
         Integer c(a.subtract(b));
         cout<<c.getValue()<<endl;
         cout<<"                                                               "<<endl;
        }
         
     
        case 'E':
        {
            cout<<"Exiting..."<<endl;
         break;
        }

 } 
}while(choice !='E');
    
}

 

    
 
 
 




