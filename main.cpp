#include<iostream>
using namespace std;
#include "BankAccount.h"
int main()
{
  BankAccount ShahbazAcc;
  ShahbazAcc.display();
  cout<<endl;
  BankAccount AliAcc("ALI" , 19912 ,98583.3);
  AliAcc.display();
  cout<<endl;
  BankAccount FaisalAcc(ShahbazAcc);
  FaisalAcc.display();
  system("pause");
}