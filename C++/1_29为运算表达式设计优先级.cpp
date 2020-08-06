class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> lResult;
        vector<int> rResult;
        vector<int> result;
        int len = input.size();
        bool flag = false;
        char op;
 
        if (len == 0) return result;
 
        for (int i = 0; i < len; i++) {
            switch (input[i]) {
                case '+':
                case '-':
                case '*':
                    flag = true;
                    op = input[i];
                    lResult = diffWaysToCompute(input.substr(0, i));
                    rResult = diffWaysToCompute(input.substr(i + 1, len - i - 1));
                    for (int j = 0; j < lResult.size(); j++) {
                        for (int k = 0; k < rResult.size(); k++) {
                            switch (op) {
                            case '+':
                                result.push_back(lResult[j] + rResult[k]);
                                break;
                            case '-':
                                result.push_back(lResult[j] - rResult[k]);
                                break;
                            case '*':
                                result.push_back(lResult[j] * rResult[k]);
                                break;
                            default:
                                break;
                            }
                        }
                    }
                    break;
                default:
                    break;
            }
        }
 
        if (flag == false) {
            result.push_back(atoi(input.data()));
        }
 
        return result;
    }
    
};

