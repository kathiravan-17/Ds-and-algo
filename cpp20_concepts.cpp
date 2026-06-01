#include <iostream>
#include <concepts>

template<typename T>
concept test=
       std::copy_constructible<T> || std::move_constructible<T>;
       
struct Both {
    int value;
    Both(int v) : value(v) {}
    Both (const Both &) = default;
    Both(Both &&)=default;
};

struct onlycopy {
    int value;
    onlycopy(int v) : value(v) {}
    onlycopy (const onlycopy &) = default;
};

struct onlymove {
    int value;
    onlymove(int v) : value(v) {}
    onlymove (const onlymove &) = delete;
    onlymove(onlymove &&)=default;
};

template <typename test>
void test1(std::string name)
{
    std::cout<<"muthu engal sothu"<<std::endl;
}

int main() {
    // int — copy constructible?
    int a=10;
    
    int b=a;
    
    test1<Both> ("ruthu");
    std::cout<<std::boolalpha;
    std::cout<<std::copy_constructible<int>;
}
