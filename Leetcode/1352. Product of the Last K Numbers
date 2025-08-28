#include <queue>
#include <vector>
using namespace std;

class ProductOfNumbers {
private:
    queue<int> q;           // store numbers
    vector<int> nums;       // keep history for product calculation

public:
    ProductOfNumbers() {}

    void add(int num) {
        q.push(num);
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        if (k > nums.size()) return 0; // not enough numbers
        long long prod = 1;
        for (int i = nums.size() - k; i < nums.size(); i++) {
            prod *= nums[i];
            if (prod == 0) return 0; // shortcut if zero present
        }
        return (int)prod;
    }
};
