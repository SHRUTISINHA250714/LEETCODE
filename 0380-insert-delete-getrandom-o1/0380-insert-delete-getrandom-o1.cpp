class RandomizedSet {
    vector <int> randomizedSet;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        int cnt = count(randomizedSet.begin(), randomizedSet.end(), val); 
        if (cnt > 0) { 
            return false;
        } 
        else { 
            randomizedSet.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        int cnt = count(randomizedSet.begin(), randomizedSet.end(), val); 
        if (cnt > 0) { 
            randomizedSet.erase(std::remove(randomizedSet.begin(), randomizedSet.end(), val), randomizedSet.end());

            return true;
        } 
        else { 
            return false;
        }
        
    }
    
    int getRandom() {
        int randomIndex = rand() % randomizedSet.size();
        return randomizedSet[randomIndex]; 
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */