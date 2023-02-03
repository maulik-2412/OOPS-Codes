#include <iostream> 
#include <string>

class Student { private:
std::string m_name; int m_rollno;
int m_marks;

public:
const std::string& getName() { return m_name; } int getRollno() { return m_rollno; }
int getMarks() { return m_marks; }

void setName(const std::string& name) { m_name = name; } void setRollno(int rollno) { m_rollno = rollno; }
void setMarks(int marks) { m_marks = marks; }
};

int main()
{
Student s; s.setName("Maulik"); s.setRollno(35); s.setMarks(100);

std::cout << "Student is " << s.getName() << "\nRollno is " << s.getRollno()
<< "\nMarks are " << s.getMarks() << '\n';
 
return 0;
}

