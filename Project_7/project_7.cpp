#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Student
{
	public:
		T ID;
		string name;
		
		Student(T ID, string name) : ID(ID), name(name){}
		void display() const
		{
			cout << "Student ID: " << ID << endl;
			cout << "Student name: " << name << endl;
		}
};


template<typename T>
class StudentManager
{
	private:
		vector<Student<T>> students;
		
	public:
		void addStudent(T ID, string name)
		{
			students.push_back(Student<T>(ID, name));
			cout << "Students added successfully" << endl;
		}
		
		void displayAllStudent() const
		{
			if(students.empty())
			{
				cout << "No students available" << endl;
				return;
			}
			for(const auto & student : students)
			{
				student.display();
			}
		}
		void removeStudent(T ID)
		{
			auto it = remove_if(students.begin(), students.end(), [ID](const Student<T>&s){return s.ID == ID;});
			if(it != students.end())
			{
				students.erase(it, students.end());
				cout << "Student with ID " << ID << "removed" << endl;
			}
			else
			{
				cout << "Student with ID " << ID << "not found" << endl;
			}
		}
		void searchStudent(T ID) const
		{
			for(const auto& student : studenys)
			{
				if(student.ID ==ID)
				{
					cout << "Student found" << endl;
					student.display();
					return;
				}
				cout << "Student with ID" << ID << "not found" << endl;
			}
		}
};

int main()
{
	StudentManager<int> sm;
	
	
	return 0;
}