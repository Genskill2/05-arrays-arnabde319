/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int len) {
  int max=arr[0];
  for(int i = 1; i<len ; i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  return max;
}

int min(int arr[], int len) {
  int min=arr[0];
  for(int i = 1; i<len ; i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  return min;
}

float average(int arr[], int len){
  int sum=0;
  for(int i=0;i<len; i++){
    sum+=arr[i];
  }
  return ((float)sum)/len;
}

int mode(int arr[], int len){
  const int max_num=max(arr,len)+1;
  int h[max_num];
  for(int i=0;i<max_num;i++){
      h[i]=0;
  }
  for(int i=0;i<len;i++){
    h[arr[i]]++;
  }
  int f=h[0],l=0;
  for(int i=0;i<max_num;i++){
    if(h[i]>f){
      f=h[i];
      l=i;
    }
  }
  return l;
}

int isPrime(int a){
    int n=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            n++;
        }
    }
    if(n==2){
        return 1;
    }
    else{
        return 0;
    }
}

int prime(int n, int ar[]){
    int a=2,c=0;
    while(!isPrime(n)){
        if(n%a==0 && isPrime(a)){
            n=n/a;
            ar[c]=a;
            c++;
        }
        else{
            a++;
        }
        
    }
    ar[c]=n;
    return c+1;
}

      
