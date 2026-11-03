#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout<< "element no. 2: "<< vec[1] << nl;
    cout <<"Vector size: " << vec.size() << nl;
    cout<< "Vector capacity: " << vec.capacity() << nl;
    cout<<"first element: " << vec.front() << nl;
    cout<< "last element: "<< vec.back()<< nl;
    vec.pop_back();

    vector<int> vec1{11,22,33};
    vector<int> vec2(vec1);
    vector<int> vec3(3,67);

    for(int val: vec1) cout<< val << sp;
    cout<<nl;
    for(int val: vec2) cout<< val << sp;
    cout<<nl;
    for(int val: vec3) cout<< val << sp;
    cout<<nl;
    
    vector<int> v{1,2,3,4,5};

    v.erase(v.begin()+1, v.begin()+3);
    for(int val: v) cout<<val <<sp;
    cout <<nl;

    v.insert(v.begin()+1, 100);
    for(int val: v) cout<<val <<sp;
    cout <<nl;

}
