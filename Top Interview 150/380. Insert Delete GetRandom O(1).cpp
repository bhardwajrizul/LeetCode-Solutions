class RandomizedSet {
public:
    unordered_set<int>* mySet;
    RandomizedSet() {
        mySet = new unordered_set<int>();
    }
    
    bool insert(int val) {
        if (mySet->find(val) == mySet->end()) {
            mySet->insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        auto it = mySet->find(val);
        if (it != mySet->end()) {
            mySet->erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() { // to get O(1) access mantain a seperate vector alongside a set
        int randomPos = rand() % mySet->size();
        int currPos = 0;
        for (int val : *mySet) {
            if(currPos == randomPos) return val;
            else currPos++;
        }
        return 0; // will never reach here
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */