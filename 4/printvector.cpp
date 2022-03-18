#include<iostream>
#include<vector>


//generic vector printer (useful for debugging)
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec){
    for (size_t i = 0; i < vec.size(); i++)
    {
        os << vec[i] << " ";
    }
    return os;
    
}





int main(int argc, char const *argv[])
{
    std::vector<int> x = {1, 2, 3};
    std::vector<double> y = {1.5, 2, 3};
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return 0;
}
