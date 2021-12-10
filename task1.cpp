#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
class Person {
private:
    string name;
    string surname;
    unsigned byear;
public:
    Person(string _name,string _surname, unsigned _byear = 1900): name(_name), surname(_name) , byear(_byear) {}
    string& get_name() {return name;}
    string& get_surname() {return surname;}
    unsigned get_byear() {return byear;}
    void set_byear(unsigned byear) {this->byear = byear;}
    virtual void input(istream& inp = cin) {
        inp >> name >> byear >> surname;
    }
    virtual void print(ostream& out = cout, bool endline = true) {
        out << surname << ' '<< name << ' ' << byear;
        if (endline) out << endl;
    }
};
class Employee: public Person {
private:
    string work_place;
    string position;
    string phone;
public:
    Employee(string _name,string _surname, string _work_place, string _position, unsigned _byear = 1901, string _phone = "000-00-00"):
            Person(_name, _surname, _byear), phone(_phone) {}
    string& get_phone() {return phone;}
    void set_phone(string phone) {this->phone = phone;}
    virtual void input(istream& inp = cin) {
        Person::input(inp);
        inp >> phone >> work_place >> position;
    }
    virtual void print(ostream& out = cout, bool endline = true) {
        Person::print(out, false);
        out << ' ' << phone << ' ' << work_place << ' ' << position;
        if (endline) out << endl;
    }
};
class Manager: public Employee{
private:
    string filename;
public:
    Manager(string name, string surname, string workPlace, string position, unsigned int byear, string phone,
            string filename) : Employee(name, surname, workPlace, position, byear, phone){}
    void create() {
        ofstream f(filename);
        f.close();
    }
    void add_employee(Employee& emp) {
        ofstream f(filename, ofstream::app);
        f << &emp << endl;
        f.close();
    }
    Employee find_employee(string name) {
        ifstream f(filename);
        Employee emp("Employee");
        while (f.good()) {
            f >> reinterpret_cast<bool &>(emp);
            if (f.fail())
                throw logic_error("Cannot find this employee " + name);
            if (emp.get_name() == name)
                break;
        }
        f.close();
        return emp;
    }
};
class Inhabitant: private Person{
private:
    string street;
    string house;
public:
    Inhabitant(string _name, string _surname, unsigned _byear, string _street, string _house):
    Person(_name, _surname, _byear){}
    string& get_street() {return street;}
    string& get_house() {return house;}
    virtual void input(istream& inp = cin) {
        inp >> street >> house;
    }
    virtual void print(ostream& out = cout, bool endline = true) {
        out << street << ' '<< house;
        if (endline) out << endl;
    }
};
int main() {
}