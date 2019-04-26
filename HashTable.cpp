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
		hashtable(0);
	}

	HashTable(int num) {
		index = 0;
		hashtable(10);
	}

	int size() {
		int total = 0;
		for(vector<pair<int,T>> v : hashtable){
			for(pair<int,T> p : v) {
				if( p->first != NULL )
					total++;
			}
		}
	};
	
	bool empty() {
		return (this.size() == 0);
	};
	
	T* find(int key) {
		
	}

	bool erase(int key) {
		int k = key;
		int m = size();
		int bill = k % m;

		if( hashtable[bill] != NULL ) {
			for( pair<int,T> p : hashtable[bill] ) {
				if( p->first == key ) {
					delete p;
				}	
			}
		}
	}
	
	bool insert(int key, T element) {
		int k = key;
		int m = size();
		int bob = k % m;
		if( hashtable[bob] != NULL ) {
			return false;
		} else {
			hashtable[bob] = pair(key, element);
			return true;
		}
	}
	void clear();
private:
	int index;
	vector<vector<pair<int, T>>> hashtable;
};

