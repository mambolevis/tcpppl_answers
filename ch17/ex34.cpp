#include <iostream>
#include "hash_set.h"
#include "hash_multimap.h"

int main() {
    using namespace ch17;
    using namespace std;

    hash_set<int> hs;
    for(int i = 0; i < 5; i++)
        hs.insert(i);

    hs.insert(4);
    hs.insert(10);

    for(hash_set<int>::iterator i = hs.begin(); i != hs.end(); i++) {
        cout << *i << endl;
    }

    cout << endl;


    hash_multimap<int,int> hmm;
    for(int i = 0; i < 5; i++) {
        hmm.insert(std::make_pair<const int, int>(i, i));
    }
    hmm.insert(std::make_pair(4, 10));
    hmm.insert(std::make_pair(1, 22));
    hmm.erase(3);

    for(hash_multimap<int,int>::iterator i = hmm.begin(); i != hmm.end(); i++) {
        cout << i->first << " = " << i->second << endl;
    }
}