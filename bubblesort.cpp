#include<iostream>
using namespace std;
    void print(int a[], int n) //function to print array elements
    {
    int i;
    for(i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    }
 void bubble(int a[], int n) // function to implement bubble sort
 {
 int i, j, temp;
   for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

 }
int main()
{
    int a[10],n,i;
    cout<<"Enter no of elements in the array";
    cin>>n;
    cout<<" Enter array elements";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Before sorting array elements are - \n";
    print(a, n);
    bubble(a, n);
    cout<<"\nAfter sorting array elements are - \n";
    print(a, n);
return 0;
}
