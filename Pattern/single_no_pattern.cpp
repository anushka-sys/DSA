#include<iostream>
using namespace std;
int main()
{
    int n=1;
    for(int i=1; i<=5; i++)
    {
        for(int j=1 ; j<=i; j++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
    }
 
}

/*
1 
1 1
1 1 1
1 1 1 1
1 1 1 1 1
*/