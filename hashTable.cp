// Alexander Stern
// acs4wq
// 3/4/19
// hashTable.cpp

#include <iostream>
#include <string>
#include "hashTable.h"
using namespace std;

hashTable::hashTable() {
  tablesize = 0;
}

void hashTable::setTableSize(int g) {
  tablesize = g;
  ht.reserve(g);
}

hashTable::hashTable(int ts) {
  tablesize = ts;
}

int hashTable::hashingVal(string s) {
  int t = 0;
  for (int i = 0; i < s.length(); i++) {
    char c = s.at(i);
    t += (int)c;
  }
  return t % tablesize;
}

void hashTable::insertHash(string s, int h) {
  int hh = h;
  if (ht[hh] != "") {
    while (ht[hh] != "") {
      hh++;
    }
  }
  if (ht[hh] != "") {
       cout << ht[hh] << endl;
  }
  ht[hh] = s;
}

bool hashTable::findBool(string word) {
  int iword = hashingVal(word);
  while (ht[iword] != "") {
    if (ht[iword] == word) {
      return true;
    }
    else {
      iword++;
    }
  }
  return false;
}

int hashTable::getSize() {
  return ht.size();
}

void hashTable::printHash(int hs) {
  cout << ht[hs] << endl;
}

void hashTable::testHash() {
  cout << ht[0] << endl;
  if (ht[4] == "") {
    cout << "true" << endl;
  }
  else { cout << "false" << endl; }
}
