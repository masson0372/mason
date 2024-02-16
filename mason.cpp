#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    int age;
    int waight;
    string name;

public:

    Human(int valueA, int valueW, string valueN)
    {
        age = valueA;
        waight = valueW;
        name = valueN;
    }

    void SetAge(int valueAGE)
    {
        age = valueAGE;
    }
    void SetWaight(int valueWaight)
    {
        waight = valueWaight;
    }
    void SetName(string valueName)
    {
        name = valueName;
    }


    int GetAge()
    {
        return age;
    }
    int GetWaight()
    {
        return waight;
    }
    string GetName()
    {
        return name;
    }

    void Print()
    {
        cout << "Имя " << name << "\nВес " << waight << "\nВозраст " << age;
        cout << endl << "----------------------------------------" << endl;
    }
};



int main()
{
    setlocale(0, "");

    // обьект 1 на конструкторе
    Human firstHuman(1, 1, "1");
    cout << endl << "значения по умолчанию" << endl;
    firstHuman.Print();
    cout << endl << "------------------------------" << endl;

    //ввод параметров обьектов 1 и 2
    firstHuman.SetAge(22);
    firstHuman.SetName("sheglov pavel");
    firstHuman.SetWaight(93);

    Human secondHuman(1, 1, "1");

    secondHuman.SetAge(15);
    secondHuman.SetName("saboba boba bibo");
    secondHuman.SetWaight(80);

    //вывод результата
    firstHuman.Print();
    secondHuman.Print();

    // выводы вводы по приколу
    int result = firstHuman.GetAge();
    cout << endl << "1 возраст: " << result;
    cout << endl << "------------------------------" << endl;

    cin >> result;
    secondHuman.SetWaight(result);
    cout << endl << "вес 2: " << secondHuman.GetWaight();
    

    return 0;
}



