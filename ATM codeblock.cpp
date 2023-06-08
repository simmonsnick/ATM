//Building a ATM Management System
//Enter Name, Card Number, Card Type, Password
//Shows the Balance on the DebitCard
//Management System

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class ATM {

     //Private variables used inside class
  private:
      string name;
      long long card_number;
      char type[10];
      long long amount = 0;
      long long tot = 0;

    // Public variables
  public:
    // Function to string in the person's data
    void setvalue()
    {
        cout << "Enter Name\n";
        cin.ignore();

        // To use space in string
        getline(cin, name);

        cout << "Enter Debit card number\n";
        cin >> card_number;
        cout << "Enter Debit card type\n";
        cin >> type;
        cout << "Enter Balance\n";
        cin >> tot;
    }

    //Function to display the required data
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Debit card No:" << card_number << endl;
        cout << "Debit card type:" << type << endl;
        cout << "Balance:" << tot << endl;
    }

    //Function to show the balance amount
    void showbal()
    {
        tot = tot + amount;
        cout << "\nTotal balance is: " << tot;
    }

    //Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        tot = tot - a;
        cout << "Available Debit Card Balance is " << tot;
    }

    bool pwd()
    {
        cin.ignore();
        bool ap = 0;
        string pc ="";
        string code = "ZZZ";
        cout<< "Type your passcode\n:";
        //cin.ignore();
        getline(cin, pc);
        if (pc.compare(code)==0)
            ap = 1;
        return ap;
}
};

//Driver code
int main()
{
    //Object class
    //Screen
    ATM b;

    int choice;

    //Infinite while loop select
    //Options
    while (1){
        cout << "\n" << "" << "WELCOME TO ATM" << "" << "\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter Name, Debit card " << "number, Debit card type\n";
        cout << "\t2. Balance Request\n";
        cout << "\t3. Show Total Balance\n";
        cout << "\t4. Withdrawal Money\n";
        cout << "\t5. Cancel\n";
        cin >> choice;

        //Choices to select from
        switch (choice) {
    case 1:
         b.setvalue();
         break;
    case 2:

        {
            bool p = b.pwd();

            while(!p)
            {
                cout << "Incorrect passcode, Press Enter to Continue";
                p = b.pwd();
            }
              b.showdata();
            }
            break;
    case 3:
        {
            bool p = b.pwd();

            while(!p)
            {
                cout << "Incorrect passcode, Press Enter to Continue";
                p = b.pwd();
            }
            b.showbal();
            }
            break;
    case 4:
        {
            bool p = b.pwd();

            while(!p)
            {
                cout << "Incorrect passcode, Press Enter to Continue";
                p = b.pwd();
            }
            b.withdrawl();
            }
            break;
    case 5:
          {
          exit(1);
          cout << "CANCEL, Press Enter to Continue";
          break;
          }

        }
    }
}
