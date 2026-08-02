class Solution {
public:
    bool isValid(string s) {

        //4 steps 

        //step 1 : declare stack
        stack<char> st;
        int n=s.size();

        //step 2: run loop for opening brackets and push them to stack
        for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' ||s[i]=='[' ){
            st.push(s[i]);
        }

        //  step 3: if closing bracket is greater than opening last return false 
        //( First char = ) ,Stack is empty))
        else{
        if(st.empty()) return false;

        //step 4 : if matching closing bracket in string to the one in stack then pop
        if((st.top()=='('&& s[i]==')'||
        st.top()=='{'&& s[i]=='}'||
        st.top()=='['&& s[i]==']')){   

        st.pop(); }

    else{   //  if opening > closing (invalid string)  eg: when loop ends on opening elments only
        return false;
    }
        }
        }
        return st.empty(); //stack should be empty at end
    }
};


//edge case
//empty or invalid