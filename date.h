#ifndef OOP_EXAM_DATE_DATE_H
#define OOP_EXAM_DATE_DATE_H
class Date {
  private:
    int day, month, year;
    const int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  public:
    Date(int d = 1, int m = 1, int y = 1990);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay();
    int getMonth();
    int getYear();
    bool isLeapYear();
    int monthDays();
    int monthDays(int m);
    void nextDay();
    void increaseMonth();
    void increaseYear();
    void printDate();
    void increaseDays(int days);
};
#endif //OOP_EXAM_DATE_DATE_H
