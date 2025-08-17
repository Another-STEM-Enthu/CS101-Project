#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for (int i = 0; i < 18; i++) {
        cout<<"size:"<<v.size()<<"\t";
        cout<<"capacity:"<<v.capacity()<<endl;
        v.push_back(i * 10);

    }



}