class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> answer(n, 0);
    stack<int> st; // stores indices

    for (int i = n - 1; i >= 0; --i) {
        // Pop all colder or same temps from the stack
        while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
            st.pop();
        }

        // If stack not empty, next warmer day found
        if (!st.empty()) {
            answer[i] = st.top() - i;
        }

        st.push(i); // Push current day's index
    }

    return answer;
}
};