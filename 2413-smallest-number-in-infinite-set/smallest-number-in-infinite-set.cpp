class SmallestInfiniteSet {
public:
    vector<bool> res;
    int start;

    SmallestInfiniteSet() {
        res = vector<bool>(1001, true);
        start = 1;
    }

    int popSmallest() {
        int val = start;
        res[start] = false;
        for(int i=start+1;i<1001;i++){
            if(res[i]==true){
                start=i;
                break;
            }
        }
        return val;
    }

    void addBack(int num) {
        res[num]=true;
        if(num<start){
            start = num;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */