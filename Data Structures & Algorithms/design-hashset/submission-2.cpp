class MyHashSet {
    private:
    int n;
    vector<list<int>> hs;
   public:
    MyHashSet() {
        n = 1000;
        hs.resize(n);
    }

    void add(int key) {
        int idx = key % n;
        for (int val : hs[idx]) {
            if (val == key) return;
        }
        hs[idx].push_back(key);
    }

    void remove(int key) {
        int idx = key % n;
        hs[idx].remove(key);
    }

    bool contains(int key) {
        int idx = key % n;
        for (int val : hs[idx]) {
            if (val == key) return true;
        }
        return false;
    }
};