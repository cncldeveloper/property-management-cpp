using namespace std;

class Property
{
protected:
    string propertyName;
    string startDate;
    string rent;
    string deposit;
    string duration;

public:
    void setPropertyName(string propertyName) {
        this->propertyName = propertyName;
    }

    void setStartDate(string startDate) {
        this->startDate = startDate;
    }

    void setRent(string rent) {
        this->rent = rent;
    }

    void setDeposit(string deposit) {
        this->deposit = deposit;
    }

    void setDuration(string duration) {
        this->duration = duration;
    }

    void propertyInformation() {
        cout << Style::getGreenColor("\nPROPERTY INFORMATION") << endl;
        cout << Style::getGreenColor("------------------") << endl;

        cout << "PROPERTY NAME  : " << this->propertyName << endl;
        cout << "START DATE     : " << this->startDate << endl;
        cout << "RENT           : " << this->rent << " Tk" << endl;
        cout << "DEPOSIT        : " << this->deposit << " Tk" << endl;
        cout << "DURATION       : " << this->duration << " Month" << endl;
    }
};