// #include<iostream>
// using namespace std;

// int main(){
//    int s,sum=0;

//         cout<<"enter array size"<<endl;
//         cin>>s;
//     int arr[s]={};
   
//     for (int i = 0; i < s; i++)
//     {
//         cin>>arr[i];
//     }
    
//     for (int i = 0; i < s; i++)
//     {
//         cout<<arr[i]<<endl;
//         sum+=arr[i];
//     }
    
//           cout<<"value of sum is"<<sum;
    

// return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
// 	cout << "enter no\n";
	
// 	int x[3];//3 denote size
// 	cin >> x[0];//indexing \\subscript
// 	cin >> x[1];
// 	cin >> x[2];
// 	cout << "value of array of x[0] is ===>" << x[0] << endl;
// 	cout << "value of array of x[1] is ===>" << x[1] << endl;
// 	cout << "value of array of x[2] is ===>" << x[2] << endl;
	
// 	cout << "address of array of x[0] is ===>" << &x[0] << endl;
// 	cout << "address of array of x[1] is ===>" << &x[1] << endl;
// 	cout << "adddress of array of x[2] is ===>" << &x[2] << endl;

// 	return 0;
// }


 

// #include <iostream>
// #include<string.h>
// using namespace std;

// void display(int arr[3][3])
// {
	
// 	}
// 	
// }

// int main()
// {		
// 	int arr[3][3] =
// 	{ //c0 c1 c2
// 		23,43,67,//r0
// 		34,65,76,//r1
// 		12,15,15//r2
// 	};
	
// 	int temp=arr[0][0];
// 	for (int r = 0; r < 3; r++)
// 	{
// 		for (int c= 0; c < 3; c++) {
// 			if (temp>arr[r][c]) 
// 			{
// 				temp = arr[r][c];
// 			}
// 		}
// 	}
// 		cout<<"Smallest Value :" <<temp<< endl;
// 	return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
// 	const int ROW = 2;
//     const int COLUMN = 3;
// 	int klm[ROW][COLUMN] = {};
// 	for (int r = 0; r < ROW ; ++r)
// 	{


// 		c0 c1 c2
// 		23,43,67,//r0
// 		34,65,76,//r1
// 		for (int c = 0; c < COLUMN ; ++c) {
// 			cin>> klm[r][c];	
// 		}
// 	}
// 	for (int r = 0; r < ROW ; ++r)
// 	{
// 		for (int c = 0; c < COLUMN ; ++c) {
// 			cout << klm[r][c] << "  ";	
// 		}
// 		cout << "\n\n";
// 	}
    
// 	int column_sum1 = 0;
// 	for (int r = 0; r < ROW; ++r)
// 	{
// 		column_sum1 += klm[r][0];
// 	}
// 	cout << "\n\n the addition of the first column is ==>"<<column_sum1 << endl;
    
// 	int column_sum2 = 0;
// 	for (int r = 0; r < ROW; ++r)
// 	{
// 		column_sum2 += klm[r][1];
// 	}
// 	cout << "\n\n the addition of the second column is ==>" << column_sum2 << endl;

// 	int column_sum3 = 0;
// 	for (int r = 0; r < ROW; ++r)
// 	{
// 		column_sum3 += klm[r][2];
// 	}
// 	cout << "\n\n the addition of the third column is ==>" << column_sum3 << endl;

// 	int row_sum1 = 0;
// 	for (int c = 0; c < COLUMN; ++c)
// 	{
// 		row_sum1 += klm[0][c];

// 	}
// 	cout << "\n\n the addition of the first row is ==>" << row_sum1 << endl;

// 	int row_sum2 = 0;
// 	for (int c = 0; c < COLUMN; ++c)
// 	{
// 		row_sum2 += klm[1][c];

// 	}
// 	cout << "\n\n the addition of the second row is ==>" << row_sum2 << endl;

// 	return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
// 	char name[25];
// 	cin>>name;
// 	cout<<"name=>"<<name;
// return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//    int arr[] = {1, 2, 3, 4, 2, 5, 6, 4, 7};
//    int n ;

//    cout << "Repeated elements are: ";
//    for(int i = 0; i < n; i++) {
//       for(int j = i + 1; j < n; j++) {
//          if(arr[i] == arr[j]) {
//             cout << arr[j] << " ";
//             break;
//          }
//       }
//    }

//  return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//    cout << "Original matrix:" << endl;
//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 3; j++) {
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }

//    cout << "Transposed matrix:" << endl;
//    for(int i = 0; i < 3; i++) {
//       for(int j = i; j < 3; j++) {
//          swap(arr[i][j],arr[j][i]);
//       }
//    }

//    for(int i = 0; i < 3; i++) {
//       for(int j = 0; j < 3; j++) {
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }

//  return 0;
// }
