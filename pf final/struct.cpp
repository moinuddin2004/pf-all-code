
// #include <iostream>
// using namespace std;

// struct Student //Decl
// {
//     int id;
//     double cgpa;
//     char name[25];
// };

//  void HighCGPA(Student s_check[5]) 
// {
//     cout<<"==Students with High CGPA==" <<endl<< endl;
//     for (int i=0; i<5; i++) 
//     {
//         if (s_check[i].cgpa>=3.0)
//         {
//             cout<<"Name :" <<s_check[i].name<< endl;
//             cout << "ID :" << s_check[i].id << endl;
//         }
//     }


// }


// int main() 
// {
//     Student s[5];
    
//     for(int i=0; i<5; i++) 
//     {
//         cout<<"Student No." <<i+1<< endl;
//         cout<<"-----------------------" << endl;
//         cout<<"Enter Name: " << endl;
//         cin >> s[i].name;
//         cout<<"Enter id: " << endl;
//         cin >> s[i].id;
//         cout << "Enter cgpa: " << endl;
//         cin >> s[i].cgpa;
//     }
//     HighCGPA(s);
    
//     return 0;
// }


// // #include<iostream>
// // using namespace std;

// // struct employee 
// // {
// //     char name[25];
// //     int id;
// //     int sal;
// // };

// // void highsal(employee sal_check[2])
// // {
// //     for (int i = 0; i<2; i++)
// //     {
// //         if(sal_check[i].sal>=10)
// //         {
// //             cout<<sal_check[i].id<<endl;
// //             cout<<sal_check[i].name<<endl;
// //         }
// //     }
    
// // }


// int main()
// {
    
//     employee e[2];
//     for (int i = 0; i<2; i++)
//     {
//         cout<<"enter name\n";
//         cin>>e[i].name;
//         cout<<"enter your id\n";
//         cin>>e[i].id;
//         cout<<"enter your sal\n";
//         cin>>e[i].sal;
//     }
//     highsal(e);

// return 0;
// }
#include<iostream>
using namespace std;
struct student {
    char name [25];
    int id;
};
void id(student s_check[2])
{
    for (int i = 0; i < 2; i++)
    {
        if (s_check[i].id<5)
        {
            cout<<s_check[i].name;
        }
        
        
        
    }
    
    
}

int main(){
    student s[2];
    for (int i = 0; i < 2; i++)
    {
        cout<<"enter name\n";
        cin>>s[i].name;
        cout<<"enter id\n";
        cin>>s[i].id;
    }
    id(s);
return 0;
}

