class MyHashSet {
public:
vector<int> sett;
    MyHashSet() {
    }
    
    void add(int key) {
        int flag=1;
        for(auto it : sett){
            if(key == it){
                flag=0;
            }
        }
        if(flag == 1){
            sett.push_back(key);
        } else return;
    }
    
    void remove(int key) {
        for(int i = 0; i < sett.size(); i++) {
            if(sett[i] == key) {
                sett.erase(sett.begin() + i);
                return;
            }  
        }
    }
    
    bool contains(int key) {
        for(int it : sett){
            if(key == it){
                return true;
            }
        } return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */