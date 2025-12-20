class MyHashMap {
public:
    vector<int> value;
    vector<bool> exists;

    MyHashMap() {
        value.resize(1000001, 0);
        exists.resize(1000001, false);
    }

    void put(int key, int val) {
        value[key] = val;
        exists[key] = true;
    }

    int get(int key) {
        if (exists[key])
            return value[key];
        return -1;
    }

    void remove(int key) {
        exists[key] = false;
    }
};
