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

// to implement a vector a dynamic array is maintained internally
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
    ls.pop_back(); // {6, 5, 2}
    ls.pop_front(); // {5, 2}

    cout << ls.back() << " " << ls.front() << endl;

    for (int elem : ls) {
        cout << elem << endl;
    }

    // rest functions are same as vector
    // begin, end, clear, insert, size, swap
}

// internally uses dynamic array which supports 
// constant time insertion and removal of elements at the beginning of the sequence
void explainDeque() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    // rest functions are same as vector
    // begin, end, clear, insert, size, swap

    cout << dq.back() << " " << dq.front() << endl;
}

void explainStack() {
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(8);
    st.push(2);
    st.emplace(6);

    cout << st.top() << endl;

    st.pop();

    cout << st.size() << endl;

    cout << st.empty();
}

void explainQueue() {
    // insertion happens in the back and removal from front
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;

    cout << q.back() << " " << q.front() << endl;

    q.pop(); // {2, 9}

    cout << q.front();
}

// Priority Queue internally uses tree data structure
void explainPQ() {
    // push & pop takes O(logn), top takes O(1)
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(10); // {10, 5}
    pq.push(8); // {10, 8, 5}

    cout << pq.top() << endl; // 10

    pq.emplace(2); // {10, 8, 5, 2}
    pq.pop(); // {8, 5, 2}


    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(5); // {5}
    minPQ.push(10); // {5, 10}
    minPQ.push(8); // {5, 8, 10}

    cout << minPQ.top() << endl; // 5

    minPQ.emplace(2); // {2, 5, 8, 10}
    minPQ.pop(); // {5, 8, 10}
}

// Internally uses tree data structure
void explainSet() {
    // Set stores unique elements in sorted order
    // insert, find, erase takes O(logn)
    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(4);
    st.insert(2);
    st.insert(2);
    st.insert(3); // {1, 2, 3, 4}

    auto it = st.find(6); // returns a pointer to st.end() as 6 is not present in the set
    it = st.find(4); // returns a pointer pointing to the element 4

    st.erase(3); // {1, 2, 4} // takes O(logn)
    st.erase(it); // {1, 2} // takes O(1)

    int cnt = st.count(1); // returns 1 if element exists, else returns 0

    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << endl;
    }
}

void explainMultiSet() {
    // stores elements in sorted order but allows duplicate
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1, 1, 1, 1}

    auto it = ms.find(1);

    ms.erase(it); // {1, 1, 1} // if we pass iterator only that element is erased

    for (auto it : ms) {
        cout << it <<  " ";
    }

    ms.erase(1); // all 1's are deleted as the element is passed
}

void explainUnorderedSet() {
    // stores unique elements in random order
    // lower_bound & upper_bound functions do not work
    // time complexity is O(1) in most cases but in worst case it is O(n)
}

void explainMap() {
    // map stores unique keys in sorted order
    // all operations take O(logn) time
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 5);
    mpp.insert({2, 9});

    cout << mpp[1];
    cout << mpp[5]; // it prints 0, as key 5 is not present inside the map

    auto it = mpp.find(5); // iterator points to mpp.end()
    it = mpp.find(3);

    cout << (*it).second << endl;

    for (const auto& elem : mpp) {
        // auto& doesn't copy the large data structure instead makes the variable a reference to the original element 
        // const doesn't permit the modification of the element using the variable
        cout << elem.first << "->" << elem.second << endl;
    }

    // erase, swap, size, empty are same as above
}

void explainMultiMap() {
    // stores keys in sorted order, but allows duplicate keys
    // mpp[key] can't be used here
    multimap<int, int> mpp;
    mpp.insert({1, 3});
    mpp.insert({1, 5});

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
}

void explainUnorderedMap() {
    //stores unique keys in random order
    // generally takes O(1) but in worst case takes O(n)
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    if (p1.first > p1.second) return true;
    return false;
}

void explainSort() {
    int arr[] = {2, 5, 1, 7, 4};
    // sorts the array in ascending order by default
    sort(arr, arr + 5); // {1, 2, 4, 5, 7}
    sort(arr, arr + 5, greater<int>()); // {7, 5, 4, 2, 1} // sorts in descending order
    sort(arr + 1, arr + 3); // {7, 4, 5, 2, 1}

    vector<int> v = {7, 9, 1, 2, 5};
    sort(v.begin(), v.end()); // {1, 2, 5, 7, 9}
    sort(v.begin() + 3, v.end(), greater<int>()); // {1, 2, 5, 9, 7}

    // usage of comparator function
    pair<int, int> p[] = {{1,2}, {2,1}, {4,1}};
    // sort it ascending to second element
    // if second element is same, then sort it
    // according to the first element but in descending
    sort(p, p + 3, comp); // {{4, 1}, {2, 1}, {1, 2}}

    for (auto elem : p) {
        cout << elem.first << ", " << elem.second << endl;
    }

    string s = "teststring";
    sort(s.begin(), s.end()); // sorts elements in dictionary order
    cout << s;
}

void explainExtra() {
    // __builtin_popcount function counts the number of set bits i.e. number of 1's in binary format
    int num = 7;
    int cnt = __builtin_popcount(num);
    long long longNumber = 165265234256635;
    cnt = __builtin_popcountll(longNumber);
    cout << cnt << endl;
    cout << "\n";

    // next permutation
    string s = "213";
    sort(s.begin(), s.end());

    // if we don't use sort the permutations occuring after 213 will be present only
    // if we use sort, the string will become "123" & all the 6 permutations will be present

    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    cout << "\n";

    int arr[] = {10, 47, 89, 11, 234, 109};
    int maxElem = *max_element(arr, arr + 6);
    cout << maxElem << " ";
    int minElem = *min_element(arr, arr + 6);
    cout << minElem << endl;
}

int main() {
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderedMap();
    // explainSort();
    explainExtra();
    return 0;
}