#include<iostream>
using namespace std;


int power(int base , int exp){
    int res = 1;
    while(exp>0){
        if(exp%2!=0){
            res = res*base; 
        }
        base = base*base;
        exp= exp/2;
    }
    return res;
}

int toh(int n){
    return  power(2,n) -1;
}
 
int outcome (int n , int left = 1 , int middle = 2 , int right = 3){
    if(n==1){
        cout << left << " " << right << endl ;
        return 0;
        
    }
    outcome(n-1 , left , right , middle);
    cout << left << " " << right << endl;
    outcome(n-1 , middle , left , right );
    return 0;
    
    
}

int main(){
    int n;
    cin >> n;
    int value = toh(n);
    cout << value<<endl;
    int r = outcome(n);
    return 0;
 }