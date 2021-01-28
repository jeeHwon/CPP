#include <iostream>
#include <algorithm>
#include <vector>
//STL sort()_doublePair

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b){
	if(a.second.first == b.second.first){
		return a.second.second > b.second.second;
	} else{
		return a.second.first > b.second.first;
	}
}

int main(void){
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string , pair<int, int> > ("äġ��", pair<int, int>(90,4)));
	v.push_back(pair<string , pair<int, int> > ("����ȣ", pair<int, int>(88,10)));
	v.push_back(pair<string , pair<int, int> > ("���븸", pair<int, int>(77,15)));
	v.push_back(pair<string , pair<int, int> > ("���¿�", pair<int, int>(88,11)));
	v.push_back(pair<string , pair<int, int> > ("���¼�", pair<int, int>(77,7)));

	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << ' ';
	}
}
