// #include <iostream>
// #include <cmath>

// // Function declaration
// int sum(int a, int b);
// double calculateAverage(double arr[], int size);
// void printSquare(int num);
// bool isPrime(int num);

// // Function definition to calculate the sum of two integers
// int sum(int a, int b) {
//     return a + b;
// }

// // Function definition to calculate the average of an array of doubles
// double calculateAverage(double arr[], int size) {
//     double sum = 0.0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum / size;
// }

// // Function definition to print the square of a number
// void printSquare(int num) {
//     int square = num * num;
//     std::cout << "The square of " << num << " is: " << square << std::endl;
// }

// // Function definition to check if a number is prime
// // bool isPrime(int num) {
// //     if (num <= 1) {
// //         return false;
// //     }
// //     for (int i = 2; i <= std::sqrt(num); i++) {
// //         if (num % i == 0) {
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// bool isPrime(int num) {
//      if (num <= 1) {
//         return false;
//     }
//     if(num%2==0){
//         return true;
//     }
//     }

// int main() {
//     int num1, num2;

//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     int result = sum(num1, num2);  // Function call
//     std::cout << "The sum is: " << result << std::endl;

//     const int arrSize = 5;
//     double numbers[arrSize];
//     std::cout << "Enter " << arrSize << " numbers: ";
//     for (int i = 0; i < arrSize; i++) {
//         std::cin >> numbers[i];
//     }

//     double average = calculateAverage(numbers, arrSize);  // Function call
//     std::cout << "The average is: " << average << std::endl;

//     printSquare(num1);  // Function call

//     std::cout << "Enter a number to check if it is prime: ";
//     int checkNum;
//     std::cin >> checkNum;

//     bool isNumPrime = isPrime(checkNum);  // Function call
//     if (isNumPrime) {
//         std::cout << checkNum << " is prime." << std::endl;
//     } else {
//         std::cout << checkNum << " is not prime." << std::endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int factorial(int n){
    int i=1;
    int fact=1;
    while(i<=n){
        fact=fact*n;
        n=n-1;
    }
    return fact;
}

bool isprime(int number) {
    
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cout<<"Enter num:"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    if(isprime(n)){
        cout<<"number is prime:"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
}
}

// #include <iostream>

// bool isPrime(int number) {
//     if (number <= 1) {
//         return false;
//     }
    
//     for (int i = 2; i < number; i++) {
//         if (number % i == 0) {
//             return false;
//         }
//     }
    
//     return true;
// }

// int main() {
//     int number;
//     std::cout << "Enter a number: ";
//     std::cin >> number;
    
//     if (isPrime(number)) {
//         std::cout << number << " is a prime number." << std::endl;
//     } else {
//         std::cout << number << " is not a prime number." << std::endl;
//     }
    
//     return 0;
// }
