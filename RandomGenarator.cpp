#include<bits/stdc++.h>

using namespace std;


int main(){

    freopen("a.txt","w",stdout);
    srand(static_cast<unsigned int>(time(0)));
    int n = rand() % 5000 + 1;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        long long x=rand()%1000000000000+1;
        cout<<x<<endl;
    }




}
