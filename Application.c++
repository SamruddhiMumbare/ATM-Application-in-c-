#include <iostream>
using namespace std;
void showMenu(){
    cout<<" ---------MENU---------"<<endl;
    cout<<" ***** 1. Check Balance *****"<<endl;
    cout<<" ***** 2. Deposit *****"<<endl;
    cout<<" ***** 3. Withdraw *****"<<endl;
    cout<<" ***** 4. Exit *****"<<endl;
    cout<<" -----------------"<<endl;
}

int main()
{
    int ch;
    double balance=500;
    double depositeAmt;
    do{
    showMenu();
    cout<<" Choose an option"<<endl;
    cin>>ch;
    switch(ch){
        case 1:cout<<"Balance is: "<<balance<<endl;break
        case 2:
        cout<<"Enter amount to be deposited"<<endl;
        cin>>depositeAmt;
        balance += depositeAmt;
        cout<<"Total Amount: "<<balance<<endl;
        break;
        case 3:
        double WithdrawAmt;
        cout<<"Enter amount to Withdraw"<<endl;
        cin>>WithdrawAmt;
        if (WithdrawAmt<=balance){
             balance -= WithdrawAmt;
        }
        else{
            cout<<"Not enough Cash!!"<<endl;
        }
        cout<<"Total amount is: "<<balance<<endl; 
        break;
    }
    }while(ch!=4);

    return 0;
}
