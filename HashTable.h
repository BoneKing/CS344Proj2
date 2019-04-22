#include<iostream>
#include<vector>
#include<string>

#ifndef HASH_TABLE_H__
#define HASH_TABLE_H__

#include"HashTable.cpp"
//#include"HashEntry.cpp"

#endif

using namespace std;

template<class T>
class HashTable{
public:
	HashTable() {
		index = 0;
		hash(0);
	}
	int size(){};
	
	bool empty(){}; //Asks if empty
	
	pair<int, T> * find(int key){}; //Returns pointer to the element, if not found return null pointer
	
	bool erase(int key){}; //If erase was successfull
	
	bool insert(int key, T element){}; //If it was successfull
	
	void clear(){};
private:
	int index;
	vector<vector<pair<int, T>>> hash;
};
