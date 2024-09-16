#include <iostream>
#include <string>
using namespace std;

class DataType{

    private:
        int m_NumberOfBytes;
        string m_Name;
        string m_Description;
        string m_Range;
    
    public:
        DataType(const string& name, const string& desc, int weight, string range){
            m_Name = name;
            m_Description = desc;
            m_NumberOfBytes = weight;
            m_Range = range;

            cout << m_Name + ", " + m_Description + ". Size: " + to_string(m_NumberOfBytes) + " bytes. Range: " + m_Range  << endl;
        }




};

int main(){
    DataType integer("int", "Stores whole numbers, without decimals", (int)sizeof(int), "-2147483648 to 2147483647.");
    DataType floater("float", "Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits", (int)sizeof(float), "");
    DataType doubler("double", "Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits", (int)sizeof(double), "");
    DataType longer("long, ", "a 64-bit two's complement integer", (int)sizeof(long), " -9223372036854775808 to 9223372036854775807");
    DataType charer("char", "Stores a single character/letter/number, or ASCII values", (int)sizeof(char), "0 to 255");
    DataType booler("bool", "Stores true or false values", (int)sizeof(bool), "");
    DataType wcharer_t("wchar_t", "It's used to represent characters that take up more memory than a single char to represent.", (int)sizeof(wchar_t), "1 wide character");

    /*cout << "Hello world!" << endl;

    cout << "int, size: " << sizeof(int) << " bytes" << endl;
    cout << "short, size: " << sizeof(short) << " bytes" << endl;
    cout << "long, size: " << sizeof(long) << " bytes" << endl;
    cout << "char, size: " << sizeof(char) << " bytes" << endl;
    cout << "string, size: " << sizeof(string) << " bytes" << endl;
    cout << "bool, size: " << sizeof(bool) << " bytes" << endl;

    for(int i = 0; i < 100; i++){
        cout << (i == i+1 ? "True" : "False") << endl;
    }

*/
    return 0;
}

