#include<iostream>
#include<vector>
#include<assert.h>
#include<string>



// prints all elements of the given vector to std::cout
void printVector(std::vector<int>& vec, std::string message = ""){
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
    
    //std::vector<int> prefixSum_;
public:
    PrefixSum(std::vector<int>& array)
    {
        // TODO: implement me
        // step 1: define prefixSum_ vector
        // step 2: fill prefixSum_

        //printVector(prefixSum_, "prefixSum");
    };

    // return the sum of the subarray from a to b in constant time
    // pre: b >= a, a>=0, b<array.size()
    int sum(int a, int b)
    {
        // TODO: implement me
        return 0;
        
    }
};



int main(int argc, char const *argv[])
{
    //create simple test data
    std::vector<int> test = {
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
