/*
Name: Surya Pratap Singh
Enrolment No.: 22UCS074
Sec: A
*/
#include<iostream>
#include<string>
using namespace std;

int main(){

string s;
cout<<"Enter your string \n";
getline(cin,s);
int vow=0, whitespace=0, digits=0, cons=0;
for(int i=0; i<s.length();i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
vow++;
}
else if(s[i]==' '){
whitespace++;
}
else if(s[i]>='0'&& s[i]<='9'){
digits++;
}
else {
cons++;
}
}

cout<<"No. of vowels is: "<<vow<<endl;
cout<<"No. of consonants: "<<cons<<endl;
cout<<"No. of digits: "<<digits<<endl;
cout<<"No. of whitespaces: "<<whitespace<<endl;
}

