#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int s : students) q.push(s);
        
        int index = 0;  // sandwich index
        int attempts = 0;  // consecutive failures
        
        while (!q.empty() && attempts < q.size()) {
            if (q.front() == sandwiches[index]) {
                q.pop();
                index++;
                attempts = 0; // reset since someone ate
            } else {
                q.push(q.front());
                q.pop();
                attempts++;
            }
        }
        return q.size();
    }
};
