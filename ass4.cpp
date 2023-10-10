#include<iostream>
using namespace std;
class matrices
{
public:
int a[3][3],b[3][3],i,j,k,r,c,addn=0;
void inp();
void disp();
void diagonal();
void uptr();
void trans();
};
void matrices::inp()
{
 cout<<"Enter number of rows:";
 cin>>r;
 cout<<"Enter number of columns:";
 cin>>c;
       cout<<"Enter values of element in first matrix:"<<"\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
}
void matrices::disp()
{
cout<<"First matrix is:"<<"\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
}
void matrices::diagonal()
{
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 if(i==j)
 addn+=a[i][j];

 }

 }
 cout<<"Addition of diagonal matrix is :"<<addn<<"\n";
}
void matrices::uptr()
{
 int flag=0;
 for(i=1;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 if(j<i && a[i][j]==0)
 {
 flag=1;
 }

 }
 }
 {
 if(flag==1)
 {
 cout<<"It is upper triangular matrix\n";
 }
 else
 {
 cout<<"It is not upper triangular matrix\n";
 }
 }




}
void matrices::trans()
{
cout<<"Transpose of Matrices is :"<<"\n";
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 b[i][j]=a[j][i];
 cout<<b[i][j]<<"\t";
 }
 cout<<"\n";
}
}
int main()
{

 matrices m;
 m.inp();
 m.disp();
 m.diagonal();
 m.uptr();
 m.trans();
}
