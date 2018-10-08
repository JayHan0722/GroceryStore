//Author: Jaehyun Han
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list; //array of 5 strings
  string item;
  int numItems = 0;
  char input;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if(input == 'a' || input == 'A')
    {
            cout<<"What is the item?"<<endl;
            cin>>item;
            list.push_back(item);
            numItems++;
    }
    else if((input == 'q' || input == 'Q') && numItems == 0)
    {
            cout<<"No items to buy!"<<endl;
    }
  }
  while(!(input == 'q' || input == 'Q'));

  if(numItems != 0)
  {
          for(int index = 0; index < numItems; index++)
          {
                  cout<<"==ITEMS TO BUY=="<<endl;
                  cout<<index+1<<" "<<list[index]<<endl;
          }
  }


  return 0;
}
