#include<iostream>
#include<ctime>
#include<conio.h>
#include"windows.h"

using namespace std;

int countStudent = 10;
int gr = 3;

int index = 0;
int excellent = 0;
float BestGroup = 0;
int IndexWorstGroup = 0;
float WorstGroup = 0;
int IndexBestGroup = 0;
void SetColor(int text, int bg) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    Date date;
    string name;
    string LastName;
    bool IsPrivelege;
    float AverageMark;
    int Mark[10];
};
struct Teacher
{
    Date date;
    string name;
    string LastName;
};
struct Group
{
    float AverageMarkAllGroup;
    Student* students = new Student[countStudent];
    Teacher teachers;
    string Name;
    int IsPrivelegeInGroup;

};

void CreatStudent(Group* s)
{

    string sn[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
    string n[6] = { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав" };
    int c, b;
    float avaregeGroup = 0;
    for (int i = 0; i < 10; i++) {
        float avarege = 0;
        c = rand() % 5;
        b = rand() % 5;
        s->students[i].name = n[b];
        s->students[i].LastName = sn[c];
        s->students[i].date.day = 1 + rand() % 31;
        s->students[i].date.month = 1 + rand() % 12;
        s->students[i].date.year = 2004 + rand() % 3;
        for (int j = 0; j < 10; j++) {
            s->students[i].Mark[j] = 3 + rand() % 12;
            avarege += s->students[i].Mark[j];
            avaregeGroup += s->students[i].Mark[j];
        }
        s->students[i].AverageMark = (avarege / 10);
        if (s->students[i].AverageMark >= 8.5) {
            excellent++;
        }

        s->students[i].IsPrivelege = rand() % 2;
        if (s->students[i].IsPrivelege == true) {
            s->IsPrivelegeInGroup++;
        }
    }
    s->AverageMarkAllGroup = ((avaregeGroup / 10) / 10);


    if (s->AverageMarkAllGroup > BestGroup) {
        BestGroup = s->AverageMarkAllGroup;
        IndexBestGroup = index;
        index++;

    }
    else if (s->AverageMarkAllGroup < WorstGroup) {
        WorstGroup = s->AverageMarkAllGroup;
        IndexWorstGroup = index;

    }
}


void CreatTeacher(Group* t)
{

    string sn[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
    string n[6] = { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав" };
    int c, b;
    for (int i = 0; i < 3; i++) {
        c = rand() % 5;
        b = rand() % 5;
        t->teachers.name = n[b];
        t->teachers.LastName = sn[c];
        t->teachers.date.day = 1 + rand() % 31;
        t->teachers.date.month = 11 + rand() % 1;
        t->teachers.date.year = 1960 + rand() % 40;
    }
}
void CreateName(Group* n) {
    string sn[6] = { "A", "Б", "В", "Г", "Д", "Е" };
    int   c = rand() % 5;
    n->Name = sn[c];
}
void Output(Group* n) {
    for (int i = 0; i < countStudent; i++) {
        cout << n->students[i].name << endl;
        cout << n->students[i].LastName << endl;
        cout << n->students[i].date.day << endl;
        cout << n->students[i].date.month << endl;
        cout << n->students[i].date.year << endl;
        cout << n->students[i].AverageMark << endl;
        cout << n->students[i].IsPrivelege << endl;
    }
    cout << "Avarege group" << n->AverageMarkAllGroup << endl;
}
void Output2(Group* n) {

    for (int i = 0; i < countStudent; i++) {

        if (n->students[i].AverageMark >= 9) {
            cout << endl;
            cout << n->Name << endl;
            cout << n->students[i].name << endl;
            cout << n->students[i].LastName << endl;
            cout << n->students[i].date.day << endl;
            cout << n->students[i].date.month << endl;
            cout << n->students[i].date.year << endl;
            cout << n->students[i].AverageMark << endl;
            cout << n->students[i].IsPrivelege << endl;
        }
    }

}

void Output3(Group* n) {
    cout << n->teachers.name << endl;
    cout << n->teachers.LastName << endl;
    cout << n->AverageMarkAllGroup << endl;


}
void Output4(Group* n) {

    cout << n->Name << endl;


}
void Output5(Group* n, int indexOldest) {

    cout << n->students[indexOldest].name << endl;
    cout << n->students[indexOldest].LastName << endl;
    cout << n->students[indexOldest].date.day << endl;
    cout << n->students[indexOldest].date.month << endl;
    cout << n->students[indexOldest].date.year << endl;
    cout << n->students[indexOldest].AverageMark << endl;
    cout << n->students[indexOldest].IsPrivelege << endl;

    cout << "Avarege group" << n->AverageMarkAllGroup << endl;
}
void Output6() {

}

int main() {
    srand(time(NULL));
    Group* group = new Group[gr];
    for (int i = 0; i < gr; i++) {
        CreatTeacher(&group[i]);
        CreatStudent(&group[i]);
        CreateName(&group[i]);
    }
    WorstGroup = group[0].AverageMarkAllGroup;
    BestGroup = group[0].AverageMarkAllGroup;


    int MaxYear = group[0].students[0].date.year;
    int MaxMonth = group[0].students[0].date.month;
    int MaxDays = group[0].students[0].date.day;
    int  MostPrivelege = 0;
    int indexOldest = 0;
    int indexOldest2 = 0;
    int counts = group[0].IsPrivelegeInGroup;
    for (int i = 0; i < gr; i++) {
        WorstGroup = group[0].AverageMarkAllGroup;
        if (group[i].AverageMarkAllGroup < WorstGroup) {
            WorstGroup = group[i].AverageMarkAllGroup;
            IndexWorstGroup = i;
        }
        if (group[i].AverageMarkAllGroup > BestGroup) {
            BestGroup = group[i].AverageMarkAllGroup;
            IndexBestGroup = i;
        }
        if (group[i].IsPrivelegeInGroup > counts) {
            MostPrivelege = i;
            counts = group[i].IsPrivelegeInGroup;
        }
        for (int g = 0; g < gr; g++) {
            for (int i = 0; i < 10; i++)
            {

                if (MaxYear >= group[g].students[i].date.year) {
                    if (MaxYear > group[g].students[i].date.year) {
                        MaxDays = group[g].students[i].date.day;
                        MaxMonth = group[g].students[i].date.month;
                        MaxYear = group[g].students[i].date.year;
                        indexOldest = i;
                        indexOldest2 = g;
                    }

                    if (MaxMonth >= group[g].students[i].date.month) {
                        if (MaxMonth > group[g].students[i].date.month) {
                            MaxDays = group[g].students[i].date.day;
                            MaxMonth = group[g].students[i].date.month;
                            MaxYear = group[g].students[i].date.year;
                            indexOldest = i;
                            indexOldest2 = g;
                        }

                        index = i;
                        if (MaxDays > group[g].students[i].date.day) {
                            MaxDays = group[g].students[i].date.day;
                            MaxMonth = group[g].students[i].date.month;
                            MaxYear = group[g].students[i].date.year;

                            indexOldest = i;
                            indexOldest2 = g;
                        }
                    }
                }

            }


        }

        int achion = 1;
        setlocale(LC_ALL, "");
        string  ach[] = { "-Вивести усіх відмінників.","1- Вивести  керівника, в класі якого найкраща успішність.","2- Вивести назву класа з найгіршою успішністю.","3- Вивести всіх братів і сестер.","4- Вивести дітей, які народились в один день.","5- Вивести найстаршого учня.","6- Скільки учнів мають середній бал більше 8.5 ?","7-В якому класі найбільше пільговиків ?" };
        int a = 0;
        while (a != 13) {
            system("cls");
            for (int i = 0; i < 8; i++) {
                if (i == achion) {
                    SetColor(0, 14);
                }
                if (i != achion) {
                    SetColor(15, 0);
                }
                cout << ach[i] << endl;
                SetColor(15, 0);
            }
            a = _getch();
            if (achion != 0 && a == 119) {
                achion--;
            }
            else if (a == 115) {
                achion++;
                if (a > 8) {
                    a = 0;
                }
            }
        }
            switch (achion)
            {
            case 1: {
               
                    Output2(&group[i]);
                
                system("pause");

            }break;
            case 2: {
                
                    Output3(&group[IndexBestGroup]);
                
                system("pause");

            }break;
            case 3: {
                
                    Output4(&group[IndexWorstGroup]);
                
                system("pause");

            }break;
            case 4: {
                
                    string LastName;
                    for (int l = 0; l < countStudent; l++) {
                        LastName = group[g].students[l].LastName;
                        for (int i = 0; i < gr; i++) {
                            for (int j = 0; j < countStudent; j++) {
                                if (LastName == group[i].students[j].LastName && j != l) {
                                    if (j == 0) {
                                        Output5(&group[g], l);
                                    }
                                    Output5(&group[i], j);
                                }
                            }
                        }
                    }
                
                system("pause");


            }break;
            case 5: {
                
                    int d;
                    int m;
                    int y;
                    for (int l = 0; l < countStudent; l++) {
                        d = group[g].students[l].date.day;
                        m = group[g].students[l].date.month;
                        cout << "************************************" << endl;

                        for (int i = 0; i < gr; i++) {
                            for (int j = 0; j < countStudent; j++) {
                                if (d == group[i].students[j].date.day && m == group[i].students[j].date.month && j != l) {
                                    if (j == 0) {
                                        Output5(&group[g], l);
                                    }
                                    Output5(&group[i], j);
                                }
                            }
                        }
                    }
                
                system("pause");

            }break;
            case 6: {
                
                    Output5(&group[indexOldest2], indexOldest);
                    system("pause");
                
            }break;
            case 7: {
                
                    cout << excellent << endl;
                
                system("pause");

            }break;
            case 8: {
               
                    Output4(&group[MostPrivelege]);
                
                system("pause");

            }break;
            default:
                break;
            }


        }
    }
