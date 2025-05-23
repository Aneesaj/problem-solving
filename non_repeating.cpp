#include<iostream>
#include<unordered_map>
using namespace std;
int non_repeating(int arr[],int n)
{
     unordered_map<int,int>map;
    
     for(int i=0;i<n;i++)
     {
        map[arr[i]]++;
     }
     for(int i=0;i<n;i++)
     {
        if(map[arr[i]]==1)
          {
              
              return arr[i] ;
          }
    }
    return -1;
}
