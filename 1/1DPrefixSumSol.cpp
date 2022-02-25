#include<iostream>
#include<vector>
#include<assert.h>
#include<string>
using type = std::vector<int>;

// prints all elements of the given vector to std::cout
void printVector(type& vec, std::string message = ""){
    if (message != "")
        std::cout << message << " ";
    for (auto &&i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
}

class PrefixSum
{
private:
    type prefixSum_;
public:
    PrefixSum(type& array)
    {
        // initialize prefixSum_ matrix
        prefixSum_ = std::vector<int>(array.size());
        prefixSum_[0] = array[0];
        for (size_t i = 1; i < prefixSum_.size(); i++)
        {
            prefixSum_[i] += prefixSum_[i-1] + array[i];
        }
        printVector(prefixSum_, "prefixSum");
    };

    // return the sum of the subarray from a to b in constant time
    // pre: b >= a, a>=0, b<array.size()
    int sum(int a, int b){

        assert(b>=a);
        assert(a>=0);
        assert(b<prefixSum_.size());
        
        int upperbound = prefixSum_[b];
        int lowerbound = a > 0 ? prefixSum_[a-1] : 0;
        return upperbound - lowerbound;
    }
};



int main(int argc, char const *argv[])
{
    //create simple test data
    type test = {
        1, 2, 3, 4, 5
    };

    printVector(test, "testArray");
    PrefixSum prefixsum(test);

    // check if implemented correctly
    for (size_t i = 0; i < test.size(); i++)
    {
        for (size_t j = i; j < test.size(); j++)
        {
            // compute naive sum
            int sum = 0;
            for (size_t k = i; k < j+1; k++)
            {
                sum += test[k];
            }
            assert(sum == prefixsum.sum(i, j));
        }
        
    }
    std::cout << "all checks passed\n";
    return 0;
}
