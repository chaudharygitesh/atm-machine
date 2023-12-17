#include <bits/stdc++.h>

using namespace  std;
class ATM{
    private:
    int balance;
    public:
    ATM(int bal){
        balance=bal;
    }
    int getbalance(){
        return balance;
    }
    int withdraw(int amount){
        if(amount>balance){
            return false;
        }
        balance=balance -amount;
        return true;
    }
    void deposit(int amount){
        balance=balance+amount;
    }
};
int main(){
    ATM atm(1000);
    int choice,amount,success;
    char op;
    do{
        system("cls");
    cout<<"1. view Balance"<<endl;
    cout<<"2. Cash Balance"<<endl;
    cout<<"3. Cash Deposit"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter Your Choice :";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Your Balance is :"<<atm.getbalance();
        break;
        case 2:
        cout<<"Your Available Balance is :"<<atm.getbalance()<<endl;
        cout<<"Enter  the amount to Withdraw";
        cin>>amount;
        success=atm.withdraw(amount);
        if(success){
            cout<<"Withdraw Successful..."<<endl;
        }
        else{
            cout<<"Insufficient Balance..."<<endl;
        }
        break;
        case 3:
            cout<<"Enter the amount to deposit :";
            cin>>amount;
            atm.deposit(amount);
            cout<<"Deposit Succesfull...."<<endl;
        case 4:
            cout<<"Thanks for using ATM"<<endl;
            break;
        default:
        cout<<"Invalid Choice"<<endl;
    }
    cout<<"\nDo you Want to try Another Trasaction[YES/NO] :";
    cin>>op;
    }
    while(op=='y'|| op=='Y');


    }
