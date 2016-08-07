#include <iostream>
#include <queue>

using namespace std;

int main()
{
   queue <string> names;
   names.push("1");
   names.push("2");
   names.push("3");
   
   cout << "front " << names.front() << endl;
   names.pop();
   cout << "front " << names.front() << endl;
   
   
   return 0;
}

