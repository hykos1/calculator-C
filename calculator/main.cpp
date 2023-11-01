#include <iostream>
using namespace std;
int a,b;
void getdata(){
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
}
void cal(){
  char op;
  cout<<"Enter Operator(+,-,*,/):";
  cin>>op;

  switch(op){
      case '+':cout<<"Result:"<<a+b;break;
      case '-':cout<<"Result:"<<a-b;break;
      case '*':cout<<"Result:"<<a*b;break;
      case '/':cout<<"Result:"<<a/b;break;
      default:cout<<"Invalid choice";break;
  }
}

int main()
{
    getdata();
    cal();
    return 0;
}
