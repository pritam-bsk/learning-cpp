#include <iostream>
using namespace std;


void patern1(int n){
  for (int i = 0; i < n; i++)               // * * * * * *
{                                           // * * * * * *    
    for (int j = 0; j < n; j++)             // * * * * * *
    {                                       // * * * * * *         
        std::cout << "* ";                  // * * * * * *
    }
    std::cout<<std::endl;
  }
}
void patern2(int n){
  for (int i = 0; i < n; i++)            //*
  {                                      //* *
    for (int j = 0; j <= i; j++)         //* * *
    {                                    //* * * *
      cout << "* ";                      //* * * * *
    }
    cout<<endl;
  }
  
}
void patern3(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j+1 << " ";
    }
    cout<<endl;
  }
  
}
void patern4(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j <= i; j++)
    {
      cout << i+1 << " ";
    }
    cout<<endl;
  }
}
void patern5(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < n-i; j++)
    {
      cout << "* ";
    }
    cout<<endl;
  }
}
void patern6(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < n-i; j++)
    {
      cout << j+1;
    }
    cout<<endl;
  }
}
void patern7(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < (2*n)-1; j++)
    {
      if((j>=n-i-1)&&(j<=n+i-1)){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}
void patern8(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < (2*n)-1; j++)
    {
      if((j>=i)&&(j<=2*(n-1)-i)){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}
void patern9(int n){
  patern7(n);
  patern8(n);
}
void patern10(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < (2*n)-1; j++)
    {
      if((j>=n-i-1)&&(j<=n+i-1)){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}

int main(){
  patern9(5);

  return 0;
}
