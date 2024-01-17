// // #include <iostream>
// // using namespace std;

// // void withdraw(int * Totalamount) 
// // {
// //     int withdraw_amount = 0;
// //     cout<<" Enter Amount to Withdraw :"<< endl;
// //     cin >> withdraw_amount;
// //     if (withdraw_amount<*Totalamount) 
// //     {
// //         *Totalamount = *Totalamount - withdraw_amount;
// //         cout<<"processed..." << endl;
// //     }
// //     else 
// //     {
// //         cout<<"Insufficient Amount" << endl;
// //     }
// // }


// // int main() 
// // {
// //     int Current_Amount = 1000;
// //     cout<<"Amount before TRANSECTION:" <<Current_Amount<< endl;
// //     withdraw(&Current_Amount);
// //     cout << "Amount After TRANSECTION:" << Current_Amount << endl;
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// void withdraw(int * totalamt )
// {
//     int withdraw=0;
//     cout<<"enter amt\n";
//     cin>>withdraw;
//     if (withdraw<*totalamt)
//     {
//         *totalamt-=withdraw;
//     }
    
// }

// int main(){
//     int amt=100;
//     cout<<amt;
// cout<<"amt after with\n";
// withdraw(&amt);
// cout<<amt;
// return 0;
// }



// #include <iostream>  
// using namespace std;  

// void change(int data)  
// {  
// data = 5;  
// } 
  
// int main()  
// {  
// int data = 3;  
// change(data);  
// cout << "Value of the data is: " << data<< endl;  
// return 0;  
// }  
 

// Call by reference in C++

// #include <iostream>  
// using namespace std;  

// void change(int * data)  
// {  
// *data = 5;  
// } 

// int main()  
// {  
// int data = 3;  
// change(&data);  
// cout << "Value of the data is: " << data<< endl;  
// return 0;  
// }  
 

//  #include<iostream>
//  using namespace std;
 
//  int main(){
//     int a[]={1,2,3,4,5};
//     int *ptr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i]=&a[i];
//     }
    
// cout<<*ptr[4];


//  return 0;
//  }

 #include<iostream>
 using namespace std;
 void display(int *b)
 {
    cout<<b;
 }
 int main(){
    int a=10;
    cout<<&a;
    display(&a);
 return 0;
 }