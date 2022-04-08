
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;
namespace sol1570
{
    class StringIterator
    {
    private:
        string s;
        int indx;
        int count;
        char c;

    public:
        StringIterator(string str);
        char next();
        bool hasNext();
    };
}
#endif