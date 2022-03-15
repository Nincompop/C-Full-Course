/*#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch='y';
    int sum=0;
    while(ch=='y' || ch=='Y'){
        int n;
        cout<<"Enter a number"<<endl;
        cin>>n;
        cout<<"Enter y or n"<<endl;
        cin>>ch;
        if(ch=='n' || ch=='N'){
            exit;
        }
            sum +=n;
    }
        cout<<"The sum of all numbers is"<<sum<<endl;
    return 0;
}*/

#include<stdio.h>  
#include<stdlib.h>  
int main(){  
  int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);     
return 0;  
}    