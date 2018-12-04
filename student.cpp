#include "student.h"

void student::setName(std::string firstN, std::string lastN)
{
  first = firstN;
  last = lastN;
} 

std::string student::fullName()
{
  std::string full;
  std::string space = " ";
  full.append(first);
  full.append(space);
  full.append(last);
  return full;
}
