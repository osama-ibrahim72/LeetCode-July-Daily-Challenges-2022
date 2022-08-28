class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;//save the answer in this vector
        for (int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){//fizzbuzz
                ans.push_back("FizzBuzz");
            }
            else if (i%3==0){//fizz
                ans.push_back("Fizz");
            }
            else if (i%5==0){//buzz
                ans.push_back("Buzz");
            }
            else { //none of the above conditions are true
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};