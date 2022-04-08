#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1570;

/*
StringIterator iterator = new StringIterator("L1e2t1C1o1d1e1");

iterator.next(); // return 'L'
iterator.next(); // return 'e'
iterator.next(); // return 'e'
iterator.next(); // return 't'
iterator.next(); // return 'C'
iterator.next(); // return 'o'
iterator.next(); // return 'd'
iterator.hasNext(); // return true
iterator.next(); // return 'e'
iterator.hasNext(); // return false
iterator.next(); // return ' '
*/

tuple<string> testFixture1()
{
  return make_tuple("L1e2t1C1o1d1e1");
}

void test1()
{
  auto f = testFixture1();
  auto iterator = StringIterator(get<0>(f));

  cout << "expect to see 'L'" << endl;
  cout << iterator.next() << endl; // return 'L'
  cout << "expect to see 'e'" << endl;
  cout << iterator.next() << endl; // return 'e'
  cout << "expect to see 'e'" << endl;
  cout << iterator.next() << endl; // return 'e'
  cout << "expect to see 't'" << endl;
  cout << iterator.next() << endl; // return 't'
  cout << "expect to see 'C'" << endl;
  cout << iterator.next() << endl; // return 'C'
  cout << "expect to see 'o'" << endl;
  cout << iterator.next() << endl; // return 'o'
  cout << "expect to see 'd'" << endl;
  cout << iterator.next() << endl; // return 'd'
  cout << "expect to see 1" << endl;
  cout << iterator.hasNext() << endl; // return true
  cout << "expect to see 'e'" << endl;
  cout << iterator.next() << endl; // return 'e'
  cout << "expect to see 0" << endl;
  cout << iterator.hasNext() << endl; // return false
  cout << "expect to see " << endl;
  cout << iterator.next() << endl; // return ' '
}

main()
{
  test1();

  return 0;
}