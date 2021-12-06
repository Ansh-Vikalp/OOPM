#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

/*                                      😍General discussion regarding List STL

*     👉 The list is another type of container which is popurly used
*     👉 It supports bidirectional, linear list and provides an efficient for deletion and insertion operation
*     👉 A list can be accessd sequentially only
*     👉 Bidirectional iterators are used for accessing list elements
*     👉 A list has two ends Front and Back(rear)
*       Ex- 10, 11, 12, 13, 14, 15
*           ↓                    ↓
*          front                back(rear)
*
*        Some important algorithms of List-->
*           1) Push_front()
*           2) Push_back()
*           3) Pop_front()
*           4) Pop_back()
*           5) list1.merge(list2)
*           6) list1.reverse()
*           
*           Also,try to make multiline comment like this this will help to ignore your tab spaces
*           /*
*            *
*            *
*            *
*            
*/


void Display(list<int> &l)
{
    list<int>::iterator p;
    for (p = l.begin(); p != l.end(); ++p)
    {
        cout << *p << " ";
    }
}

int main()
{
    list<int> list1;    // empty list of zero length
    list<int> list2(5); // empty list of size 5

    for (int i = 0; i < 3; i++)
    {
        list1.push_back(rand() / 100);
    }

    list<int>::iterator p;
    for (p = list2.begin(); p != list2.end(); ++p)
    {
        *p = rand() / 100;
    }

    cout << "List1: " << endl;
    Display(list1);
    cout << "\n\n";

    cout << "List2: " << endl;
    Display(list2);
    cout << "\n\n";

    // Adding two elements at the ends(front & rear(back)) of list1
    list1.push_front(100);
    list1.push_back(200);

    cout << "Now List1: " << endl;
    Display(list1);
    cout << "\n\n";

    // Removing two elements at the ends(front & rear(back)) of list2
    list2.pop_front();
    list2.pop_back();

    cout << "Now List2: " << endl;
    Display(list2);
    cout << "\n\n";

    list<int> listA, listB;
    listA = list1;
    listB = list2;

    // Merging two lists(1&2)----> UNSORTED
    list1.merge(list2);
    cout << "Merged unsorted list is: " << endl;
    Display(list1);
    cout << "\n\n";

    // Merging two lists(A&B)--->SORTED
    listA.sort();
    listB.sort();
    listA.merge(listB);
    cout << "Merged sorted list is: " << endl;
    Display(listA);
    cout << "\n\n";

    // Reversing a list
    listA.reverse();
    cout << "Reversed list is: " << endl;
    Display(listA);
    cout << "\n\n";

    return 0;
}