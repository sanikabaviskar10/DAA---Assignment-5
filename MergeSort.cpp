#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void merge(int arr1 [],int arr2[], int n, int m ,int arr3[])
{ 
     int i=0, j=0, k=0;
     while(i<n && j<m){
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
      }
     else 
     {
        arr3[k]=arr2[j];
        j++;
        k++;     
     }
     }
     while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;      
     }
      while(j<m)
      {
        arr3[k]=arr2[j];
        j++;
        k++;
      } 
 }
 void input(int arr[], int k)
 {
    for(int i=0; i<k ; i++){
        int n;
        cin>>n;
        arr[i]=n;
    }
    
 }
 void print(int arr[], int k)
 {
    for(int i =0; i<k; i++)
    {
        cout<<arr[i]<<" ";

    }
 }

int main(){
    int n;
    cout<<" print the length of first araay"<<endl;
    cin>>n;
    cout<<endl;
    int m;
    cout<<"print the size of second array"<<endl;
    cin>>m;
    
    int arr1[n]={0};
    int arr2[m]={0};

    cout<<" enter the elents in first araay"<<endl;
    input(arr1,n);
    cout<<" enter the elents in second araay"<<endl;
    input(arr2,m);
    int arr3[n+m]={0};

      
    cout<<"printing the elements of third array before merge"<<endl;
    print(arr3, m+n);
    cout<<endl;
    print(arr1, n);
    cout<<endl;
    print(arr2, m);
    cout<<endl;

    merge(arr1,arr2,n,m,arr3);

    cout<<"printing the elements of third array after merge"<<endl;
    print(arr3, m+n);

 }

 
 
 
 
 
 
