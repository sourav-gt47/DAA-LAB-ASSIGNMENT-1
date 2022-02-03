#include<bits/stdc++.h>
using namespace std;
#define max 5
int s1[max],s2[max],top1=-1,top2=-1;
//making insertion operation costly.

void enqueue(int x){

while(top1!=-1)
{
//shifting from s1 to s2
top2++;
s2[top2]=s1[top1];
top1--;


}
//push element to s1
s1[++top1]=x;

while(top2!=-1)
{
//shifting from s2 to s1
top1++;
s1[top1]=s2[top2];
top2--;

}


}

void dequeue()
{

if(top1==-1)
{
    cout<<"QUEUE IS EMPTY!!\n";
}

else{

int x;
x=s1[top1];
top1--;
cout<<x<<"\nData Deleted!!"<<endl;

}



}
int main()
{
 int ch=1;
   while(ch){

  cout<<"Enter the operation you want to perform::"<<endl;
  cout<<"1.Enqueue\n2.Dequeue\n3.exit\n";
  cin>>ch;

switch(ch){

case 1:

int x;
cout<<"Enter Data::";
cin>>x;
if(top1==max-1)
{cout<<"Queue is full!!"<<endl;
break;}
else{
enqueue(x);
cout<<"Data added!!\n";}
break;

case 2:

dequeue();
break;

case 3:
exit(0); 
break;
default:cout<<"Wrong case selected!!\n"<<endl; 
break;
}

  }

    return 0;
}