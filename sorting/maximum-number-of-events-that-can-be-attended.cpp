class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
    sort(events.begin(), events.end()); // sort by startDay
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    int day = 1, i = 0, res = 0, n = events.size();

    // Find the max day for boundary
    int maxDay = 0;
    for (auto& e : events) maxDay = max(maxDay, e[1]);

    for (day = 1; day <= maxDay; ++day) {
        // Push events starting today
        while (i < n && events[i][0] == day)
            minHeap.push(events[i++][1]);
        
        // Remove events that already ended
        while (!minHeap.empty() && minHeap.top() < day)
            minHeap.pop();

        // Attend the event with earliest end
        if (!minHeap.empty()) {
            minHeap.pop();
            ++res;
        }
    }

    return res;
}
};