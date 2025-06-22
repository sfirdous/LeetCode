class SmallestInfiniteSet {
public:
    int current;
    priority_queue<int,vector<int>,greater<>> minHeap;
    unordered_set<int> infiniteSet;
    SmallestInfiniteSet() {
        current = 1; //initialize infinite set 
    }
    
    int popSmallest() {
        if(!minHeap.empty())
        {
            int small = minHeap.top();
            minHeap.pop();
            infiniteSet.erase(small);
            return small;
        }
        return current++;
    }
    
    void addBack(int num) {
        if(num < current && infiniteSet.find(num) == infiniteSet.end())
        {
            minHeap.push(num);
            infiniteSet.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */