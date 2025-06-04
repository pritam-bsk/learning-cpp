#include <iostream>
using namespace std;


void pattern1(int n){
  for (int i = 0; i < n; i++)               
  {                                           
    for (int j = 0; j < n; j++)             
    {                                         
        std::cout << "* ";                  
    }
    std::cout<<std::endl;
  }
}
void pattern2(int n){
  for (int i = 0; i < n; i++)            
  {                                      
    for (int j = 0; j <= i; j++)         
    {                                    
      cout << "* ";                      
    }
    cout<<endl;
  }
}
void pattern3(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j+1 << " ";
    }
    cout<<endl;
  }
}
void pattern4(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j <= i; j++)
    {
      cout << i+1 << " ";
    }
    cout<<endl;
  }
}
void pattern5(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < n-i; j++)
    {
      cout << "* ";
    }
    cout<<endl;
  }
}
void pattern6(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < n-i; j++)
    {
      cout << j+1;
    }
    cout<<endl;
  }
}
void pattern7(int n){
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
void pattern8(int n){
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
void pattern9(int n){
  pattern7(n);
  pattern8(n);
}
void pattern10(int n){
  for (int i = 0; i < (2*n)-1; i++)            
  {
    if (i<n)
    {
      for (int j = 0; j <= i; j++)
      {
        cout<<"* ";
      }
    }else{
      for (int j = 0; j < ((2*n)-1)-i; j++)
      {
        cout<<"* ";
      }
    }
    cout<<endl;
  }
}
void pattern11(int n){
  for (int i = 0; i < n; i++)            
  {                                      
    for (int j = 0; j <= i; j++)         
    {                                    
      if (((i%2 == 0) && (j%2==1))||((i%2 == 1) && (j%2==0)))
      {
        cout<<"0 ";
      }else
      {
        cout<<"1 ";
      }             
    }
    cout<<endl;
  }
}
void pattern12(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j <= (2*n)-1; j++)
    {
      if(j>i&&j<2*n-i-1){
        cout<<"  ";
      }else{
        if (j<n)
        {
          cout<<j+1<<" ";
        }else
        {
          cout<<((2*n)-j)<<" ";
        }
      }
    }
    cout<<endl;
  }
}
void pattern13(int n){
  int num{1};
  for (int i = 0; i < n; i++)            
  {                                      
    for (int j = 0; j <= i; j++,num++)         
    {                                    
      cout << num<<" ";                      
    }
    cout<<endl;
  }
}
void pattern14(int n){
  for (int i = 0; i < n; i++)            
  {                                      
    for (char j = 'A'; j <= 'A'+i; j++)         
    {                                    
      cout << j<<" ";                      
    }
    cout<<endl;
  }
}
void pattern15(int n){
  for (int i = 0; i < n; i++)            
  {
    for (char j = 'A'; j < 'A'+n-i; j++)
    {
      cout << j<< " ";
    }
    cout<<endl;
  }
}
void pattern16(int n){
  for (char  i = 0; i < n; i++)            
  {
    for (int j = 0; j <= i; j++)
    {
      char ch='A'+i;
      cout << ch << " ";
    }
    cout<<endl;
  }
}
void pattern17(int n){
  for (int i = 0; i < n; i++)            
  {
    for (int j = 0; j < (2*n)-1; j++)
    {
      if((j>=n-i-1)&&(j<=n+i-1)){
        char ch = (j<=n-1)? 'A'+j-(n-i-1) : 'A'+(n-j)+i-1;
        cout<<ch<<" ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}
void pattern18(int n){
  for (int i = 0; i < n; i++)            
  {                                      
    for (int j = 0; j <= i; j++)         
    { 
      char ch = 'A'+(n-i+j-1);                                 
      cout << ch <<" ";                      
    }
    cout<<endl;
  }
}
int main(){
  pattern18(5);
  return 0;
}
