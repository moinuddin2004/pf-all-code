#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string lo;
    ifstream read("love.txt");
    getline(read,lo);
    cout<<lo;
return 0;
}