#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iterator>
using namespace sol1570;
using namespace std;

/*takeaways
  - indx should always point to the next available char in the s
  - c will be updated to the next available char once its count
    reaches 0
*/

StringIterator::StringIterator(string str)
{
  s = str;
  count = 0, indx = 0;
}
char StringIterator::next()
{
  if (!hasNext())
    return ' ';
  if (count == 0)
  {
    /*point to the next available char*/
    c = s[indx++];
    /*calculate the count for the next char
      - indx will reach to s.size() when c is pointing
        to the very last char in s
    */
    while (indx < s.size() && isdigit(s[indx]))
      count = count * 10 + (s[indx++] - '0');
  }
  count--;
  return c;
}
bool StringIterator::hasNext()
{
  return !(count == 0 && indx == s.size());
}