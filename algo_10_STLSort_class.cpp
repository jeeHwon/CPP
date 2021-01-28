#include <iostream>
#include <algorithm>
//STL sort()_class

using namespace std;

class Student {
public:	
	string name;
	int score;
	Student(string name, int score){
		this->name = name;
		this->score = score;
	}
	//정렬 기준은 '점수가 작은 순서'
	bool operator <(Student & student){
		return this->score < student.score;
	} 
};

int main(void){
	Student students[] = {
		Student("강백호", 47),
		Student("채치수", 98),
		Student("서태웅", 66),
		Student("송태섭", 76),
		Student("정대만",55) 
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	} 
}


