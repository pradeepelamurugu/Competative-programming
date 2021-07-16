#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string q;
    cin>>q;
    long long n;
    cin>>n;
    long long time = n/q.length();
    long long ans = 0;
    int frequence_a = 0;
    for(auto c:q){
        if(c=='a'){
            frequence_a++;
        }
    }
    ans = time * frequence_a;
    int remaining = 0;
    remaining = n%q.length();
    if(remaining!=0){
    for(int i=0;i<remaining;i++){
        if(q[i]=='a'){
            ans++;
        }
    }
    }
    
    
    cout<<ans;
    return 0;
    
    
    
}