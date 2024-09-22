#include <iostream>
#include <clocale>


using namespace std;

class Student 
{
    public:
        string name;
        string surname;
        string university;
        int year;
    Student(std::string p_name, string p_surname, string p_university, int p_year)
    {
        name = p_name;
        surname = p_surname;
        year = p_year;
        university = p_university;
    }
    void Hello()
    {
        cout << "Hello! I'm a " << name << " " << surname << ", " << year << "th year student at " << university << endl;
    }

};

class GroupLead : public Student 
{
    public:
        string email;
        string phone;
        GroupLead(std::string p_name, string p_surname, string p_university, int p_year, string p_email, string p_phone) : Student(p_name, p_surname, p_university, p_year)
        {
            email = p_email;
            phone = p_phone;
        }
        void Hello()
        {
            cout << "Hello! I'm a " << name << " " << surname << ", " << year << "th year student at " << university << ". I'm a leader of my group." << endl;
        }
        void SayAboutContacts()
        {
            cout << "I'm a " << name << " " << surname << ". My contacts: " << endl << "email: " << email << endl << "phone: " << phone << endl;
        }
};

int main() {
    setlocale(LC_CTYPE, "rus");
    Student student("Tom", "Waits", "Oxford", 3);
    student.Hello();
    //student.SayAboutContacts();

    GroupLead leader("Anne", "Hathaway", "Oxford", 3, "ann@rambler.com", "315 75 23");
    leader.Hello();
    leader.SayAboutContacts();

    return 0;
}
