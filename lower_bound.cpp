#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

 int n,q,m;
 cin>> n;
 vector <int> v;
    for (int i=0;i<n;i++){
    cin >>m;
    v.push_back(m);
    }
cin>>q;
int val;
for(int i=0;i<q;i++){
    cin >> val;
    vector<int>::iterator low = lower_bound(v.begin(),v.end(),val);

        if(v[low-v.begin()]==val){
            cout << "Yes"<<" "<<low-v.begin()+1<<endl;
        }
        else{
           cout << "No"<<" "<<low-v.begin()+1<<endl;
        }


}
    return 0;
}
