#include<iostream>
#include<string>

using namespace std;

int main(){
string s;
cout<<"Enter a string \n";
getline(cin,s);
int surya=1;
for(int i=0;i<s.length()/2;i++){
if(s[i]!=s[s.length()-1-i]){
surya=0; 
break;
}
}
if(surya){
cout<<"YES, It is a palindrme \n";
}
else{
cout<<"NO, Not a palindrome \n";
}
}
