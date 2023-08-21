#include<iostream>
using namespace std;
int main(){
    int i=0;//2
    int k;
        //0   //0   //1   //1
    k= i++ - --i + ++i - i++;
    cout<<i<<" "<<k<<endl;
}