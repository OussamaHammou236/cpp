// #include <iostream>

// class Base
// {
//     protected:
//         std::string name;
//     public:
//         Base(void) {std::cout << "base : default\n";}
//         Base(std::string name) : name(name) {}
//         std::string get_name(){std::cout << "Base: geter" << std::endl; return name; }
//         void set_name(std::string name) {this->name = name;} 
// };

// class child : public Base
// {
//     int c;
//     public:
//         child(std::string name, int c): Base(name) , c(c){std::cout << "name : called\n";}
//         child(void){}
//         std::string get_name(){std::cout << "Child: geter" << std::endl; return name;}
// };

// int main()
// {
//     child obj("simo", 5);
//     std::cout << obj.get_name();
// }
