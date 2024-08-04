#include <algorithm>
#include <cctype>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main(){
	ifstream fin;
	vector<string> v;
	vector<vector<string> > v1;
	vector<string>words;
	fin.open("story.txt");
	string line;
	while(getline(fin,line)){
		if(line=="\0") continue;
		v.push_back(line);
	}
	fin.close()	;
	fin.open("stop_words.txt");
	char c;
	string s="";
	while(fin.get(c)){
		if(c==' ' || c==',' || c=='.'){
			words.push_back(s);
			s="";
			continue;
		}
		s+=c;
	}

	cout << endl;
	fin.close();
	for(auto i:v){
		string s="";
		vector<string> temp;
		for(auto c:i){
			if(c==' '||c==','){
				temp.push_back(s);
				s="";
			}else{
				s+=c;
			}
		}
		v1.push_back(temp);
	}
	v.clear();
	for(auto i:v1){
		string s="";
			for(auto j:i){
			int flag=1;
				for(auto k:words){
					string s1 = k;
					string s2 = j;
					transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
					transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
					if(s1==s2){
						flag=0;
						break;
					}
			}
			if(flag){
				s+=j+" ";
			}
		}
		s+=" ";
			v.push_back(s);
			}
	ofstream fout;
	fout.open("story_without_stopwords.txt");
	for(auto i:v){
		fout << i << "\n";
		fout << "\n";
	}
	fout.close();
	return 0;

}
