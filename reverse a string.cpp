#include<iostream>
#include<string>
using namespace std;

// Do not print anything, just reverse the given string
void reverseString (string &str) {
// Write your code here
int s=0;
int l=str.length()-1;
while(s<l){
swap(str[s],str[l]);
s++;
l--;
}
}

int main(){
string str;
int test, num;

cin>>test;
while(test!=0){
cin>>str;
reverseString(str);
cout<<str<<endl;
test--;
}
return 0;
}