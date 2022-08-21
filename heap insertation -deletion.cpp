
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class heap
{
    public :

    int size=0;
    int arr[250];
    heap()
    {
       
        
    }
   void  insertheap(int val)
{   
    
    size=size+1;
    int index=size;

    arr[index]=val;

    while(index>1)
    {
        int parentindex=index/2;
        if(arr[parentindex]<arr[index])
        {
            swap(arr[parentindex],arr[index]);
            index=parentindex;
        }
        else
        {
            break;
        }
    }
}

   void print()
   {
       
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
   }
   
   void heapdelete()
   {
      int i=1;
       
       if(size==0)
       {
           cout<<"Heap is empty";
           
       }
       swap(arr[1],arr[size]);
       size--;
       
       while(i<=size)
       {    int large=i;
           int left=2*i;
           int right=2*i+1;
           
           if(left<=size&&arr[left]>arr[large])
           {
               large=left;
           }
            if(right<=size&&arr[right]>arr[large])
           {
               large=right;
           }
           
           if(large!=i)
           {
               swap(arr[large],arr[i]);
               i=large;
           }
           
           else
           {
               break;
           }
       }
       
   }
};

int main()
{
    heap hoe;
    hoe.insertheap(2);
    hoe.insertheap(6);
    hoe.insertheap(8);
    hoe.insertheap(3);
    hoe.insertheap(7);
    hoe.print();
    hoe.heapdelete();
    hoe.print();
     hoe.heapdelete();
    hoe.print();
     hoe.heapdelete();
    hoe.print();
    hoe.heapdelete();
    hoe.print();
    hoe.heapdelete();
    hoe.print();
    hoe.heapdelete();
    hoe.print();
    hoe.heapdelete();
    hoe.print();
    hoe.heapdelete();
    hoe.print();
    
    
   
    
}

