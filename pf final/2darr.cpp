#include<iostream>
using namespace std;

int main(){
int ROW=2;
int COL=3; 
int ARR[ROW][COL]={{1,2,3},{4,5,6}};

for (int i = 0; i < ROW; i++)
{
    for (int j = 0; j < COL; j++)
    {
        cout<<ARR[i][j]<<" ";
    }
cout<<"\n";
}


int col1=0;
for (int i = 0; i < ROW; i++)
{
    col1+=ARR[i][0];
}
cout<<"col1 sum"<<col1<<endl;
int col2=0;
for (int i = 0; i < ROW; i++)
{
    col2+=ARR[i][1];
}
cout<<"col2 sum"<<col2<<endl;
int row1=0;
for (int i = 0; i < COL; i++)
{
    row1+=ARR[0][i];
}
cout<<"row1 sum"<<row1;
return 0;
}


