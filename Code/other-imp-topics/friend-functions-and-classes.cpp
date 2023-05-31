#include <iostream>

class MyClass {
private:
    int secretValue;

public:
    MyClass(int value) : secretValue(value) {}

    friend void printSecretValue(const MyClass& obj);
    friend class FriendClass;
};

void printSecretValue(const MyClass& obj) {
    // Accessing private member of MyClass
    std::cout << "The secret value is: " << obj.secretValue << std::endl;
}

class FriendClass {
public:
    void accessSecretValue(const MyClass& obj) {
        // Accessing private member of MyClass
        std::cout << "The secret value is: " << obj.secretValue << std::endl;
    }
};

int main() {
    MyClass obj(42);
    printSecretValue(obj); // Calling friend function

    FriendClass friendObj;
    friendObj.accessSecretValue(obj); // Calling member function of friend class

    return 0;
}
