#include <iostream>
#include "date.h"

Date::Date(int d, int m, int y) {
  setYear(y);
  if (m < 0 || m > 12) {
    m = 1;
  }
  setMonth(m);
  if (d < 0) {
    d = 1;
  } else if (d > monthDays(m)) {
    d = monthDays(m);
  }
  setDay(d);
}

void Date::setDay(int d) {
  day = d;
}

void Date::setMonth(int m) {
  month = m;
}

void Date::setYear(int y) {
  year = y;
}

int Date::getDay() {
  return day;
}

int Date::getMonth() {
  return month;
}

int Date::getYear() {
  return year;
}

bool Date::isLeapYear() {
  return getYear()%4 == 0;
}

int Date::monthDays(int m) {
  int dom = days[m-1];
  if (isLeapYear() && m == 2) {
    dom = 29;
  }
  return dom;
}

int Date::monthDays() {
  return monthDays(getMonth());
}

void Date::nextDay() {
  if (day < monthDays()) {
    day = day + 1;
  } else {
    day = 1;
    increaseMonth();
  }

}

void Date::increaseMonth() {
  if (getMonth() < 12) {
    month = month + 1;
  } else {
    month = 1;
    increaseYear();
  }
}

void Date::increaseYear() {
  year = year + 1;
}

void Date::printDate() {
  std::cout<<getDay()<<" "<<getMonth()<<", "<<getYear()<<"\n";
}

void Date::increaseDays(int days) {
  for (int i = 1; i <= days; i ++) {
    nextDay();
  }
}