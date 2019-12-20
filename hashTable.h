// Alexander Stern
// acs4wq
// 3/4/19
// hashTable.h

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class hashTable {
 public:
  hashTable();
  hashTable(int ts);

  
  int hashingVal(string s); // returns hashed value for insertion into table

  int tablesize;

  vector<string> ht;
  
  void setTableSize(int g);

  void insertHash(string s, int h);

  bool findBool(string word);

  int getSize();

  void printHash(int hs);
  void testHash();




};





#endif
