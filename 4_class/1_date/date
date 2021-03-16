#include <iostream>

struct cache {
  bool valid;
  std::string rep;
};

class Date {
  int d, m, y;
  static Date default_date;
public:
  explicit Date(int dd, int mm, int yy);
  Date(int dd, int mm);
  Date(int);
  Date();
  Date(const char*);

  std::string string_rep() const;
  int day() const { return d;}
  int month() const { return m; }
  int year() const;

  static void set_default(int dd, int mm, int yy);

  Date& add_year(int n);
  Date& add_month(int n) { m = m+n; return *this; }
  Date& add_day(int n);

private:
  cache* c;
  void compute_cache_value() const;
};

int Date::year() const
{
  return y;
}

Date::Date(int dd, int mm, int yy)
{
  d = dd ? dd : default_date.d;
  m = mm ? mm : default_date.m;
  y = yy ? yy : default_date.y;
}

Date Date::default_date{16,12,1700};

void Date::set_default(int d, int m, int y)
{
  default_date = {d, m, y};
}

Date::Date(int dd, int mm)
{
  d = dd;
  m = mm;
}

Date::Date(int dd)
{
  d = dd;
}

Date::Date()
{
}

Date& Date::add_year(int n)
{
  if (d==29 && m==2 /*&& !leapyear(y+n)*/) {
    d = 1;
    m =3;
  }
  y += n;

  return *this;
}

std::string Date::string_rep() const
{
  if (!c->valid) {
    //compute_cache_value();
    c->valid = true;
  }
  return c->rep;
}

class Date1 {
  int d, m, y;
public:
  Date1(int dd, int mm, int yy);
  void add_year(int n);
};
Date1::Date1(int dd, int mm, int yy)
{
  d = dd;
  m = mm;
  y = yy;
}

class Date2 {
  int d, m, y;
public:
  Date2(int dd, int mm, int yy);
  void add_year(int n);
};
Date2::Date2(int dd, int mm, int yy)
{
  d = dd;
  m = mm;
  y = yy;
}

class Date3 {
public:
  Date3(int dd, int mm, int yy);
  void add_year(int n);
private:
  int d, m, y;
};
Date3::Date3(int dd, int mm, int yy)
{
  d = dd;
  m = mm;
  y = yy;
}

class Date4 {
public:
  Date4(int dd, int mm, int yy);
private:
  int d, m, y;
public:
  void add_year(int n);
};
Date4::Date4(int dd, int mm, int yy)
{
  d = dd;
  m = mm;
  y = yy;
}


//Date my_birthday;

//void f()
//{
//  Date today;
//
//  today.init(16, 10, 1996);
//  my_birthday.init(30, 12, 1950);
//
//  Date tomorrow = today;
//  //tomorrow.add_day(1);
//}

int main()
{
  Date d1 = Date{16, 10, 1996};
  Date d2{16, 10};
  Date d3{16};
  Date d4;


  std::cout << sizeof(d1) << '\n';
  std::cout << sizeof(d2) << '\n';
  std::cout << sizeof(d3) << '\n';
  std::cout << sizeof(d4) << '\n';
  std::cout << "sizeof(std::string): " << sizeof(std::string) << '\n';

  return 0;
}
