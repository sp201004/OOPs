#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
string s1, r,s2;

cout<<"Enter the string \n";
getline(cin,s1);
//getline(cin,r);
cout<<"Enter the other string \n";
getline(cin,s2);
int hasht[26]={0};
for(int i=0;i<s2.length();i++){
if(s2[i]>='a'&& s2[i]<='z'){
hasht[s2[i]-'a']++;
}
else if(s2[i]-'A' && s2[i]-'Z'){
hasht[s2[i]-'A']++;
}
}
cout<<"The output after removal is:";
for(int i=0;i<s1.length();i++){
if(s1[i]>='A'&& s1[i]<='Z'){
if(hasht[s1[i]-'A']){
hasht[s1[i]-'A']--;
} else {
cout<<s1[i];
}
}
else if(s1[i]>='a' && s1[i]<='z'){
if(hasht[s1[i]-'a']){
hasht[s1[i]-'a']--;
} else{
cout<<s1[i];
}
}
}
cout<<endl;
}

