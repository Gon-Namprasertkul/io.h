# io.h
Another useless c++ header

# Examples

### main.cpp

```c++
#include<io.h>
#include<string>

int main()
{
    io::console::clear();
    io::print("Hello!\n");
    io::println("Hello!");
    std::string some_var;
    io::print("Enter something: ");
    io::print("You entered: ");
    io::read(some_var);
    println(some_var);
    return 0;
}
```

### output

```
Hello!
Hello!
Enter something: Hello, world!
You entered: Hello, world!
```

## Installation
```
git clone https://github.com/foresterblox/io.h
cd io.h
./install.sh
```