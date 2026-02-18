class MyHashMap {
public:
vector<int> val;
vector<bool> exists;
    MyHashMap() {
        val.resize(1000001,0);
        exists.resize(1000001, false);
    }
    
    void put(int key, int value) {
        val[key] = value;
        exists[key]=true;
        
    }
    
    int get(int key) {
        if(exists[key])
            return val[key];
        return -1;
        
    }
    
    void remove(int key) {
        exists[key]=false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */