using namespace std;
template<class K, class V>
class HashEntry {
	
private:
	K key;
	V value;
	
public:
	HashEntry(K key, V value) {
		this.key = key;
		this.value = value;
	}

	K* getKey() {
		return key;
	}

	V* getValue() {
		return value;
	}
};
