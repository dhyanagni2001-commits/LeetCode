class MyHashMap {
public:
vector<int> val;
vector<bool> exist;
    MyHashMap() {
        val.resize(1000001,0);
        exist.resize(1000001,false);
        
    }
    
    void put(int key, int value) {
        val[key] = value;
        exist[key] = true;
    }
    
    int get(int key) {
        if(exist[key]==true){
            return val[key];
        }
        return -1;
    }
        
    
    
    void remove(int key) {
        exist[key] = false;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */