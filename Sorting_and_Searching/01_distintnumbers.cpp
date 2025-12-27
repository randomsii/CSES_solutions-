#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    int n ;
    cin >> n;
    map<long long , int > m;
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        long long values;
        cin >> values;
        if(m.find(values)== m.end()){
            count++;
            m[values] = 1;
        }
    }
    cout << count;
    return 0;
}
