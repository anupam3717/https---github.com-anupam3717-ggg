#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
vector<vector<int>> x(1001,vector<int>(1001,0));

int check(string a,int s,int e){
   
    if(s==e) //when we have single charecter
    return 0;
    //when we have 2 charecters
    if(s==e-1){
        if(a[s]==a[e]){
        return 0;}
        else {return 1;}
    }


if(x[s][e]){
   return x[s][e];
}

    if(a[s]==a[e]){
    return  x[s][e]=check(a,s+1,e-1);}//when first and last are same
    else{
        return  x[s][e]=min(check(a,s,e-1),check(a,s+1,e))+1;//first and last
                                                             //are differnt
    }
}



int main(){
    string g="justintumblera";
    int n=g.length();
    cout<<check(g,0,n-1);
    return 0;
}