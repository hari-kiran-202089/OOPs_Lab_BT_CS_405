// 6.Write a STRING class that can be used to
//  store string,
//  add strings,
//  equate strings,
//  output strings

#include <iostream>

using namespace std;

class MyStr
{
private:
    char *str = NULL;
    int length = 0;

public:
    MyStr(const char *string); // parametrized constructor
    MyStr(){};                 // default constructor

    // returns legth of the string
    int getLen()
    {
        return length;
    }
    // return a const pointer to the string
    const char *getStr()
    {
        return str;
    }

    // operator overloading to add two strings
    MyStr &operator+(MyStr &str2);

    // operator overloading to compare two strings
    bool operator==(MyStr &str2);
    // overloading assignment operator
    void operator=(MyStr &str1);

    // function to display strings
    void display();
    // overloading >> and << operators to take input and display output
    friend ostream &operator<<(ostream &os, MyStr &str1);
    friend istream &operator>>(istream &is, MyStr &str1);

    ~MyStr()
    {
        delete[] str;
    }
};
ostream &operator<<(ostream &os, MyStr &str1)
{
    const char *temp = str1.getStr();
    for (int i = 0; i < str1.getLen(); i++)
    {
        os << temp[i];
    }
    os << endl;

    return os;
}
istream &operator>>(istream &is, MyStr &str1)
{
    char str[100];
    is >> str;
    str1 = *(new MyStr(str));
    return is;
}
MyStr::MyStr(const char *string)
{
    int i = 0;
    // finding the length of the string
    while (string[i] != '\0')
        i++;
    length = i;
    // converting a const character pointer to a character array
    str = new char[++length];
    // copying the string into char array
    for (int i = 0; i < length - 1; i++)
    {
        str[i] = string[i];
    }
    str[length] = '\0';
}
// to display the string
void MyStr::display()
{
    int i = 0;
    while (str[i] != '\0')
        cout << str[i++];
    cout << endl;
}
MyStr &MyStr::operator+(MyStr &str2)
{
    char *newStr = new char[length + str2.getLen() - 1];
    int i = 0;
    while (str[i] != '\0')
    {
        newStr[i] = str[i];
        i++;
    }
    for (int j = i; (j - i) < str2.getLen(); j++)
    {
        newStr[j] = str2.getStr()[j - i];
    }
    return *(new MyStr(newStr));
}

bool MyStr::operator==(MyStr &str2)
{
    int len2 = str2.getLen();
    if (length != len2)
        return false;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str2.getStr()[i])
            return false;
    }
    return true;
}
void MyStr::operator=(MyStr &str1)
{
    if (str != NULL)
    {
        delete[] str;
    }
    length = str1.getLen();
    str = new char[length];
    for (int i = 0; i < length; i++)
    {
        str[i] = str1.getStr()[i];
    }
}
int main()
{
    MyStr str1;
    MyStr str2;
    int input = 0;
    cout << "--- My String Class-----\n";
    while (input >= 0 && input <= 4)
    {
        cout << "Operations: \n";
        cout << "1.Enter a String\n2.Concatenate another string\n3.Equate two strings.\n4.Display string\n5.Exit\n";
        cout << "Enter your choice: ";
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "Enter a string: ";
            cin >> str1;
            break;
        case 2:
            cout << "Enter a string to concatenate: ";
            cin >> str2;
            str1 = str1 + str2;
            cout << "String is: " << str1;
            break;
        case 3:
            cout << "Enter a string to compare: ";
            cin >> str2;
            if (str1 == str2)
            {
                cout << "Both are equal\n";
            }
            else
            {
                cout << "Both are not equal\n";
            }
            break;
        case 4:
            cout << "String is: " << str1 << endl;
            break;
        case 5:
            cout << "Bye!\n";
            break;
        default:
            cout << "Enter a valid output\n";
        }
    }

    return 0;
}
