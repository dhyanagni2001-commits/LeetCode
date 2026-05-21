class MyHashMap {
public:
    vector<int> value1;
    vector<bool> mp;
    MyHashMap() {
        mp.resize(1000001,false);
        value1.resize(1000001,0);
    }
    
    void put(int key, int value) {
        mp[key]=true;
        value1[key] = value;
        
    }
    
    int get(int key) {
        if(mp[key]==true){
            return value1[key];
        }
        return -1;
    }
    
    void remove(int key) {
        mp[key]=false;
    }

};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */