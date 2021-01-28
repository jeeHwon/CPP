#include <iostream>
#include <algorithm>
#include <vector>
//STL sort()_pair

using namespace std;

int main(void){
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "채치수"));
	v.push_back(pair<int, string>(85, "강백호"));
	v.push_back(pair<int, string>(82, "정대만"));
	v.push_back(pair<int, string>(98, "서태웅"));
	v.push_back(pair<int, string>(79, "송태섭"));	
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i].second << ' ';
	}
	return 0;
}
