using namespace std;

class PropertyManagementSystem: public Tenant, public Property, public File
{
public:
    string getRecord() {
        return  this->id + "," +
                this->firstName + "," +
                this->lastName + "," +
                this->phone + "," +
                this->email + "," +
                this->gender + "," +
                this->propertyName + "," +
                this->startDate + "," +
                this->rent + "," +
                this->deposit + "," +
                this->duration;  
    }

    string getNextId() {
        vector< vector<string> > matrix = this->getRecords();
        return to_string(matrix.size() + 1);
    }

    void saveRecord() {
        this->setRecord(this->getRecord());
    }

    void viewRecords() {   
        vector< vector<string> > matrix = this->getRecords();
        int columWidth[] = {8, 15, 15, 15, 25, 10, 20, 15, 8, 10, 8};
        string heading[] = {"SL", "FIRST NAME", "LAST NAME", "PHONE", "EMAIL", "GENDER", "PROPERTY", "START DATE", "RENT", "DEPOSIT", "DURATION"};

        Table table;
        table.setColumnWidth(columWidth);
        table.setColumnSize(11);
        table.setHeading(heading);
        table.setData(matrix);
        table.show();

    }
};