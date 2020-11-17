#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include"windows.h"

using namespace std;

void SetColor(int text, int bg) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

class Student
{
  public:
      class Date
      {      
      public:
          static const size_t CURR_YEAR = 2020;
          void setYear(const size_t& year_) {
              if(year>= CURR_YEAR - 16)
              year = year_;            
          }
          void setMonth(const size_t& month_) {
              if (month_ <= 12 && month_ >= 1) {
                  month = month_;
              }else {
                  cout << "You enter inccrect  data" << endl;
                  cout << "Enter date";
                  int temp;
                  cin >> temp;
                  setMonth(temp);

              }

          }
          void setDay(const size_t & day_) {
                  size_t DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                  if (day_ <= DaysInMonth[month]) {                    
                      day = day_;
                  } else if (year % 4 != 0 && year % 100 == 0 || year % 400 != 0) {
                          if (day_ <= 29 && month == 2) {
                              day = day_;
                          }
                          else if (day_ <= DaysInMonth[month]) {
                              day = day_;
                          }
                  }else {
                      
                      cout << "You enter inccrect  data" << endl;
                      cout << "Enter date";
                     int temp;
                     cin >> temp;
                      setDay(temp);
          
                  }        
          }
          const size_t & getDay() {
              return day;
          }
          const size_t & getMonth() {
              return month;
          }
          const size_t & getYear() {
              return year;
          }
      private:
          size_t day, month, year;
      };
      void setNumber(string& number_) {
          size_t intNumber  = 0;
          bool  corectnumber = true;
          try {
              intNumber = stoi(number_);
          }
          catch (std::invalid_argument& e) {
              corectnumber = false;
          }
          if (corectnumber == true && size(number_)) {
              number = number_;
          }
          else {
              cout << "Enter  correct number ";
              string temp;
              getline(cin, temp);
              setNumber(temp);
          }
      }
      void setName(const string& Name_) {
          if (!Name_.empty()) {
              name = Name_;
          }
          else {
              cout << "You enter inccrect  data" << endl;
              cout << "Enter date";
              string temp;
              getline(cin, temp);
              setName(temp);
          }
      }
      void setLastname(const string& Lastname_) {
          if (!Lastname_.empty()) {
              Lastname = Lastname_;
          }
          else {
              cout << "You enter inccrect  data" << endl;
              cout << "Enter date";
              string temp;
              getline(cin, temp);
              setLastname(temp);
          }
      }
      void setFather(const string& Father_) {
          if (!Father_.empty()) {
              Lastname = Father_;
          }
          else {
              cout << "You enter inccrect  data" << endl;
              cout << "Enter date";
              string temp;
              getline(cin, temp);
              setFather(temp);
          }
      }
      void setCity(const string& city_) {
          if (!city_.empty()) {
              city = city_;
          }else {
              cout << "You enter inccrect  data" << endl;
              cout << "Enter date";
              string temp;
              getline(cin, temp);
              setCity(temp);
          }
      }
      void setCountry(const string& country_) {
          if (!country_.empty()) {
              country = country_;
          } else {
              cout << "You enter inccrect  data" << endl;
              cout << "Enter date";
              string temp;
              getline(cin, temp);
              setCountry(temp);
          }
      }
      void setNameUniversity(const string& NameUniversity_) {
          if (!NameUniversity_.empty()) {
              NameUniversity = NameUniversity_;
          }else {
              cout << "You enter inccrect  data" << endl;
              cout << "Enter date";
              string temp;
              getline(cin, temp);
              setNameUniversity(temp);
          }
      }
      void setNumberGroup(const string& NumberGroup_) {
          if (!NumberGroup_.empty()) {
              NumberGroup = NumberGroup_;
          }
      }
      void setBirth(const Date& birth_) {
          birth = birth_;
      }
      const string& getName() {
                  return name;
             }
      const string & getLastname() {
                  return Lastname;
      }
      size_t * getBirth() {
         
         size_t day_ = birth.getDay();
         size_t month_ = birth.getMonth();
         size_t year_ = birth.getYear();
         static size_t arr[3] = { day_ , month_ , year_ };
          return  arr;
      }
      const string& getNumberGroup() {
          return NumberGroup;
      }
      const string& getNameUniversity() {
          return NameUniversity;
      }
      const string& getCountry() {
          return country;
      }
      const string& getCity() {
          return city;
      }
      const string& getNumber() {
          return number;
      }
      const string& getFather() {
          return Father;
      }
      Date birth;
private:  
      string name;
      string Lastname;
      string Father;
      string number;
      string city;
      string country;
      string NameUniversity;
      string NumberGroup;
     

};

int main() {
    
}
