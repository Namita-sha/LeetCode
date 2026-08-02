class FindSumPairs {
    using int64 = long long;

    vector<int64> a;                 // nums1 (never changes)
    vector<int64> b;                 // nums2 (mutated by add)
    unordered_map<int64,int> freq;   // current frequencies of values in nums2

public:
    // O(n2)  — build frequency table once
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        a.assign(nums1.begin(), nums1.end());
        b.assign(nums2.begin(), nums2.end());

        freq.reserve(nums2.size() * 2);     // avoid re‑hashes
        for (int64 v : b) ++freq[v];
    }

    // O(1) expected
    void add(int index, int val) {
        int64 oldVal = b[index];
        if (--freq[oldVal] == 0) freq.erase(oldVal);    // keep table lean

        int64 newVal = b[index] += val;
        ++freq[newVal];
    }

    // O(n1)  (n1 ≤ 1000)
    int count(int tot) {
        int64 res = 0;
        for (int64 x : a) {
            auto it = freq.find(tot - x);
            if (it != freq.end()) res += it->second;
        }
        return static_cast<int>(res);
    }
};

/*
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index, val);
 * int ans = obj->count(tot);
 */