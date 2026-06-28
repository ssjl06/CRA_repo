#include <iostream>
#include <vector>
#include <string>

// Greeter demonstrates C++ syntax highlighting in the diff viewer.
namespace demo {

template <typename T>
class Greeter {
public:
    explicit Greeter(const std::string& name) : name_(name) {}

    void greet(const T& value) const {
        std::cout << "Hello, " << name_ << "! value = " << value << std::endl;
    }

private:
    std::string name_;
};

}  // namespace demo

int main() {
    const int count = 42;
    std::vector<double> nums = {1.5, 2.0, 3.14};
    demo::Greeter<int> g("world");
    g.greet(count);
    for (const auto& n : nums) {
        std::cout << n << '\n';
    }
    return 0;
}
