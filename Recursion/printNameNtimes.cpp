#include<iostream>
using namespace std;
void printName(int i,int n){
    if(i>n) return; //base case
    cout<<" Raj "<<endl;
    printName(i+1,n); //recursive call

}
int main(){
    int n;
    cin>>n;
    printName(1,n);
}