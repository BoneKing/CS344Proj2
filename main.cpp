#include<iostream>
#include<vector>
#include<string>

using namespace std;
template<typename T>
class HashTable{
public:
	void size(){};
	void empty(){};
	void find(int key){};
	void erase(int key){};
	void insert(int key, T element){};
	void clear(){};
private:
	int index;
	vector<T><T> colisions;
};

int main(){
	HashTable H1;
	return 0;
}
