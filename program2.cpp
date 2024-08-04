/*
Name: Surya Pratap Singh
Enrolment No.: 22UCS074
Sec: A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
char c;
cout<<"Enter a character\n";
cin>>c;
switch(c){
case 'a': cout<<"Vowel \n"; break;
case 'e': cout<<"Vowel \n"; break;
case 'i': cout<<"Vowel \n"; break;
case 'o': cout<<"Vowel \n"; break;
case 'u': cout<<"Vowel \n"; break;
case 'A': cout<<"Vowel \n"; break;
case 'E': cout<<"Vowel \n"; break;
case 'I': cout<<"Vowel \n"; break;
case 'O': cout<<"Vowel \n"; break;
case 'U': cout<<"Vowel \n"; break;
default: if(c>='a'&&c<='z' || c>='A' && c<='Z'){
       cout<<"Consonant \n";
       } else {
       cout<<"Invalid argument given \n";
       }

}

}
