#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainPair() {
    pair<int, string> p = {1, "Toka"};

    // pair<int, string> pairArr[] = {p, {2, "Puja"}, {3, "Mota"}};
    // vector<pair<int, string>> pairArr = {p, {2, "Puja"}, {3, "Mota"}};

    vector<pair<int, string>> pairArr;
    pairArr.push_back(p);
    pairArr.push_back({2, "Puja"});
    pairArr.emplace_back(3, "Mota");

    for (auto elem : pairArr) {
        cout << elem.first << " --> " << elem.second << endl;
    }
}

// to implement a vector a singly linked list is maintained internally
void explainVector() {
    vector<int> v(3, 5); // creates a vector of size 3, with elements initialized to 5

    // insert element at the end
    v.push_back(2);
    v.emplace_back(4); // {5, 5, 5, 2, 4}

    // erase function
    v.erase(v.begin(), v.begin() + 3); // {2, 4} [start, end)

    // insert function
    v.insert(v.begin() + 1, 3); // {2, 3, 4}

    // remove element from the end
    v.pop_back(); // {2, 3}

    // iterating through iterator

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    //     cout << *(it) << endl;
    // }

    for (auto it = v.begin() ; it != v.end(); it++) {
        cout << (*it) << endl;
    }
    cout << endl;

    vector<int> v1(3, 1); // {1, 1, 1}

    // swap between two vectors
    v.swap(v1);

    // using foreach loop to iterate

    for (auto elem : v) {
        cout << elem << endl;
    }
    cout << endl;

    cout << "last elem = " << v.back() << endl; // returns the last element of the vector
    cout << "size of vector is " << v.size() << endl; // returns the size of the vector
    v.clear(); // clears the entire vector
    cout << v.empty(); // returns true(1) if vector is empty, otherwise false(0)
}

// to implement a list a doubly linked list is maintained internally
void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(6); // {6, 5, 2, 4}

    for (int elem : ls) {
        cout << elem << endl;
    }

    // rest functions are same as vector
    // begin, end, clear, insert, size, swap
}

int main() {
    // explainPair();
    // explainVector();
    explainList();
    return 0;
}