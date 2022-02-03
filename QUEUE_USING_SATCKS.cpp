#include<bits/stdc++.h>
using namespace std;

  //implementation of queue using insertion operation costly.

stack< int > s1, s2; //two stacks s1 , s2

void enqueue(int x)
{
//shifting from s1 to s2.
 while(!s1.empty())
{
    s2.push(s1.top());
    s1.pop();

}
s1.push(x); //adding new element to s1

while(!s2.empty()){

s1.push(s2.top());
s2.pop();
//shifting from s2 to s1

}
}

int dequeue()
{
if(s1.empty())  //if queue is empty!!
  {   
      return -1 ;
  }

else{

int x=s1.top();
s1.pop();
return x;


}


}

int main()
{  int ch=1;
   while(ch){

  cout<<"Enter the operation you want to perform::"<<endl;
  cout<<"1.Enqueue\n2.Dequeue\n3.exit\n";
  cin>>ch;

switch(ch){

case 1:
int x;
cout<<"Enter data::";
cin>>x;
enqueue(x);
cout<<"Data added!!\n";             
break;

case 2:
if(!s1.empty())
{
cout<<dequeue()<<endl;
cout<<"Data deleted\n";}
else{
    cout<<"Queue is empty!!"<<endl;
}
break;

case 3:
exit(0); 
break;
default:cout<<"Wrong case selected!!"<<endl; 
break;
}

  }


    return 0;
}