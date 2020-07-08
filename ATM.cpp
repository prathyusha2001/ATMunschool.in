#include <iostream>
using namespace std;
int main()
{
int pin,choice,k;
double amount,withdraw,deposit;
double balance=1000;
    char transaction='1';

    cout<<"*****welcome to your bank*****\n";
    cout<<"enter your pin number please:\n";
    cin>>pin;
    if((pin>999)&&(pin<10000))
    {
        do
        {
        if(choice!=4)
        {
            if(transaction=='1')
            {
    cout<<"enter any option to be served!\n "
    <<"1.Balance enquiry\n"
    <<"2.cash withdraw\n"
    <<"3.deposit cash\n"
    <<"4.exit\n";

    cout<<"\n enter your choice:";
     cin>>choice;
     switch(choice)
     {
 case 1:
    cout<<"\n your bank balance is:"<<balance<<endl;
    cout<<"\n do you want to perform another transaction?";
    cout<<"\n press 1 to proceed and 2 to exit:";
    cin>>transaction;
    break;
    case 2:
    cout<<"please enter amount to withdraw:";
    cin>>withdraw;
    if(balance<withdraw)
    {

            cout<<"\n you dont have enough money to withdraw";
                cout<<"\n your available balance is: "<<balance<<endl;
                break;
    }
        else
        balance=balance-withdraw;
                cout<<"please collect your cash";
    cout<<"\n your available balance is: "<<balance<<endl;
    cout<<"\n do you want to perform another transaction?";
    cout<<"\n press 1 to proceed and 2 to exit:";
    cin>>transaction;
     break;

case 3:
    cout<<"please enter amount to deposit:";
    cin>>deposit;
    balance=balance+deposit;
    cout<<"Thankyou for depositing,your new balance is:"<<balance<<endl;
    cout<<"\n do you want to perform another transaction?";
    cout<<"\n press 1 to proceed and 2 to exit:";
    cin>>transaction;
     break;
case 4:
    cout<<"thank you for banking with us,have a nice day!";
    break;
     default:
       cout<<"\n invalid choice please try again...."<<endl;
       break;
        }
    }
    }
      if(transaction=='2')
        k=1;
        }
     while(!k);
     cout<<"thankyou";
    }
    else
    cout<<"enter only 4 digit pin number.......";
}



