#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);

    vector<int> vec{1,2,3,4,5};

    vector<int>:: iterator it;
    
    for(it= vec.begin(); it != vec.end(); it++){
        cout << *(it) << sp ;
    }

    cout<< nl;

    for(auto i= vec.rbegin(); i!= vec.rend(); i++){
        cout << *(i) << sp;
    }

}
