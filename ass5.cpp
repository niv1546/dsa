#include <stdio.h>
#include <iostream>
using namespace std;
class ace
{
    public:
        int i,ct=0,x,y,j=0;
        char fq;
        string a,b,rev;
    ace()
    {
        cout<<"Enter the String :";
        cin>>a;
    }
    void frequency();
    void dele();
    void pel();
    void delch();
};
void ace::delch()
{
    char c;
    cout<<"\n enter the element you want to delete:";
    cin>>c;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=c)
        {
            cout<<a[i];
        }
    }

}
void ace::frequency()
{
    cout<<"Enter the character of which you want to find Frequency:";
    cin>>fq;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==fq)
        {
            ct+=1;
        }
    }
    cout<<"Frequency of given charcter:"<<ct<<"\n";
}
void ace::dele()
{
    cout<<"Enter the first position:";
    cin>>x;
    cout<<"Enter the Second position:";
    cin>>y;
    for(i=0;a[i]!=NULL;i++)
    {
        if(i!=x)
        {
            if(i!=y)
            {
             cout<<a[i];
            }
        }

    }
  // cout<<b;

}
void ace::pel()
{
    int x=a.length(),flag=0,j=0;

    for (i=x-1;i>=0;i--)
    {
        rev[j]=a[i];
        j+=1;
    }
    for(i=0;i<x;i++)
    {
        if(a[i]!=rev[i])
        {
            flag+=1;
        }
    }

    if(flag==0)
    {
        cout<<"\nSting is pelindrom";
    }
    else
    {
        cout<<"\nSting is Not pelindrom";
    }

}
int main()
{
    ace a1;
    a1.frequency();
    a1.dele();
    a1.delch();
    a1.pel();
    return 0;
}

