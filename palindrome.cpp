    #include <iostream>  
    using namespace std;  
    int main()  
    {  
      int no,rem,sum=0,temp;    
      cout<<"Enter the Number=";    
      cin>>no; 
   
     temp=no;    
     while(no>0)    
    {    
     rem=no%10;    
     sum=(sum*10)+rem;    
     no=no/10;    
    }  
  
    if(temp==sum) 
     {   
    cout<<"Number is Palindrome."; 
     }   
    else
     {    
    cout<<"Number is not Palindrome."; 
     }  
   }  
