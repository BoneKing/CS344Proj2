//#ifndef HASH_TABLE_H__
//#define HASH_TABLE_H__

//#include"HashTable.cpp"
//#include"HashEntry.cpp"
#include<utility>
#include<vector>

using namespace std;

template<class T>
class HashTable{
public:
	HashTable() {
		index = 0;
		hash<T>(0);
	}

	HashTable(int num) {
		index = 0;
		hash<T>(10);
	}
	
	int size() {
		int total = 0;
		for( vector<pair<int,T>> v : hash ) {
			for(pair<int,T> p : v ) {
				if( p -> first != NULL ) {
					total++;
				}
			}
		}
		return total;
	}
	
	bool empty() {
		return (this.size() == 0);
	}
	
	T* find(int key) {
		int k = key;
		int m = size();
		int bill = k % m;

		if( hash<T>[bill] != NULL ) {
			for( pair<int,T> p : hash[bill] )
				if( p->first == key ) {
					T* buck = new T* ( p->second )
					return buck;
		} else {
			void* fuck = nullptr;
			return fuck;
		}
	}

	void erase(int key) {
		int k = key;
		int m = size();
		int bill = k % m;

		if( hash[bill] != NULL ) {
			for( pair<int,T> p : hash[bill] )
				if( p->first == key ) {
					delete p;
				}
		}
	}
	
	bool insert(int key, T element) {
		int k = key;
		int m = size();
		int bob = k % m;
		if( hash[bob] != NULL ) {
			return false;
		} else {
			hash[bob] = pair(key, element);
			return true;
		}
	}
		
	void clear();
private:
	int index;
	vector<vector<pair<int, T>>> hash;
};

