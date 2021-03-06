#include <iostream>
#include "tree.h"
using namespace std;

int main()
{
    Tree tree;
    int size = 0;
    int* path = new int[size];
    tree.add(1, path, 0);
    size = 1;
    path = new int[size];
    path[0] = 0;
    tree.add(2, path, size);
    path[0] = 1;
    tree.add(3, path, size);
    size = 2;
    path = new int[2];
    path[0] = 0;
    path[1] = 0;
    tree.add(5, path, size);
    path[1] = 1;
    tree.add(6, path, size);

    cout << "\n";
    tree.print();
    cout << "\n";

    cout << "\n" << tree.isBinarySearch();

    cout << tree << endl;
    cout << tree.countEven() << endl;
    cout << tree.isAllPositive() << endl;
    tree.add(-6, path, size);
    cout << tree.isAllPositive() << endl;

    tree.deleteLeaves();
    cout << tree << endl;
    cout << tree.getAverageValue() << endl;
    vector<int> v = tree.findElem(2);
    cout << v.size() << endl;
    cout << v[0] << endl;
    Tree new_tree = tree;
    cout << new_tree;


    Tree tree1;
    size = 0;
    path = new int[size];
    tree1.add(8, path, 0);
    size = 1;
    path = new int[size];
    path[0] = 0;
    tree1.add(5, path, size);
    path[0] = 1;
    tree1.add(9, path, size);
    size = 2;
    path = new int[2];
    path[0] = 0;
    path[1] = 0;
    tree1.add(5, path, size);
    path[1] = 1;
    tree1.add(7, path, size);

    cout << "\n";
    tree1.print();
    cout << "\n";

    cout << "\n" << tree1.isBinarySearch();



    return 0;
}
