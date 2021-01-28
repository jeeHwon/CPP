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
	//���� ������ '������ ���� ����'
	bool operator <(Student & student){
		return this->score < student.score;
	} 
};

int main(void){
	Student students[] = {
		Student("����ȣ", 47),
		Student("äġ��", 98),
		Student("���¿�", 66),
		Student("���¼�", 76),
		Student("���븸",55) 
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	} 
}


