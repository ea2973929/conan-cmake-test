#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>
#include <string>

int main()
{
  using namespace boost::gregorian;

  try {
    std::string s("2001-10-9");
    date d(from_simple_string(s));
    std::cout << to_simple_string(d) << std::endl;

    std::string ud("20011009");
    date d1(from_undelimited_string(ud));
    std::cout << to_iso_extended_string(d1) << std::endl;
  }
  catch (std::exception &e)
    {
      std::cout << " Exception: " << e.what() << std::endl;
    }

  return 0;
}
