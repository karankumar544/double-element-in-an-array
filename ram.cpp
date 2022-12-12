#include<iostream>
using namespace std;
void printarr(int arr[] , int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void uq(int arr[] , int size)
{
    
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size-1; j++)
        {
            if((arr[i]^arr[j+1])==0)
            {
                cout<<arr[i]<<endl;
            }
        }
    }

}
int main()
{
    int n;
    cout<<" Enter the size of an array ";
    cin>>n;
    int array[100];
    cout<< "Now enter the element of an array ";
    for(int i =0; i<n; i++)
    {
        cin>>array[i];
    }
    printarr(array,n);
    cout<<"\nThe unique element is "<<endl;
    uq(array,n);
    return 0;
}