using namespace std;

class Tenant
{
protected:
    string id;
    string firstName;
    string lastName;
    string phone;
    string email;
    string gender;

public:
    void setId(string id) {
        this->id = id;
    }

    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    void setPhone(string phone) {
        this->phone = phone;
    }

    void setEmail(string email) {
        this->email = email;
    }

    void setGender(string gender) {
        this->gender = gender;
    }

    void tenantInformation() {
        cout << Style::getGreenColor("\nTENANT INFORMATION") << endl;
        cout << Style::getGreenColor("------------------") << endl;
       
        cout << "LAST NAME      : " << this->lastName << endl;
        cout << "PHONE          : " << this->phone << endl;
        cout << "EMAIL          : " << this->email << endl;
        cout << "GENDER         : " << this->gender << endl;
    }
};