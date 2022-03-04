#include<iostream>


template<typename T>
class Vector{
private:
    T* x_;
    unsigned int sz_;
public:
    Vector(size_t sz);
    ~Vector(){
        delete[] x_;
    }
    const T* begin() const {
        return x_;
    }
    const T* end() const{
        return x_ + sz_;
    }
    T* begin(){
        return x_;
    }
    T* end(){
        return x_+sz_;
    }
};


template<typename T>
Vector<T>::Vector(size_t sz){
    x_ = new T[sz];
    sz_ = sz;
    std::cout << "default constructor called.\n";
}

template<>
Vector<bool>::Vector(size_t sz){
    x_ = new bool[sz];
    sz_ = sz;
    std::cout << "bool constructor called.\n";
}


int main(int argc, char const *argv[])
{ 
    Vector<bool> Q(3);
    for(auto x :  Q){ 
        std::cout << x << " ";
    }
    std::cout << std::endl;
    for(auto x : Q){
        x = true; // Frage: warum klappt das nicht? 
                  //(nächste Scheife gibt wieder 0 0 0 aus)
    }
    for(auto x :  Q){ 
        std::cout << x << " ";
    }
    
    // for(const auto &x :  Q){ // Frage: warum compile-time Fehler?
    //     x = true;
    // }
    
    std::cout << std::endl;
    return 0;
    
}
