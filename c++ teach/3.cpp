#include<iostream>
using namespace std;

int main(){
    int m1[2][2]={{1,2},{3,4}};
    int m2[2][2]={{5,6},{7,8}};
    int result [2][2]={0};

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 2; k++)
        {
            result[i][j]+=m1[i][k]*m2[k][j];
        }
    } 
}

cout<<"1 matrix"<<endl;
for (int i = 0; i < 2; i++)
{
  for (int j = 0; j < 2; j++)
  {
    cout<<m1[i][j]<<" ";
  }
  cout<<endl;
}
cout<<"2 marix"<<endl;
for (int i = 0; i < 2; i++)
{
  for (int j = 0; j < 2; j++)
  {
    cout<<m2[i][j]<<" ";
  }
  cout<<endl;
}

cout<<"multiplcated matrix"<<endl;

for (int i = 0; i < 2; i++)
{
  for (int j = 0; j < 2; j++)
  {
    cout<<result[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row=1,column=1;
//     int i;
//     do{ 
//         column=1;
//         do{
//                 cout<<"*";
//                 cout<<" ";
//         column++;
//     }while(column<=row);
//             cout<<"\n";
//             row++;
//     }while(column<=8);
//   return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//   for (int i = 1; i <=5; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
  
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
    
// int row;
// cin >> row;
// int i;
// i=1;
// while (i<=row)
// {
//    int j=1;
//    while (j<=i)
//    {
//     cout<<i<<" ";
//     j++;

//    }
//    cout<<endl;
//    i++;
// }
// return 0;
// }

