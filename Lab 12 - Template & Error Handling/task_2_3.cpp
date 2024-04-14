#include <iostream>

template <class Type>
class my_stack
{
private:
    Type *st;
    int top;
    const int max;

public:
    class Full
    {
    };
    class Empty
    {
    };
    my_stack(int n) : max(n)
    {
        top = -1;
        st = new Type[n];
    }
    void push(Type val)
    {
        if (top >= max - 1)
            throw Full();
        else
            st[++top] = val;
    }
    Type pop()
    {
        if (top < 0)
            throw Empty();
        else
            return st[top--];
    }
    Type peek()
    {
        if (top < 0)
            throw Empty();
        else
            return st[top];
    }
};

int main()
{
    my_stack<int> s1(5);
    my_stack<char> s2(5);

    try
    {
        s1.push(11);
        s1.push(22);
        s1.push(33);
        s1.push(44);
        s1.push(55);
        s1.push(66);
        std::cout << "Top: " << s1.pop() << " popped\n";
    }
    catch (my_stack<int>::Full)
    {
        std::cout << "Int stack full, cannot push." << std::endl;
    }
    catch (my_stack<int>::Empty)
    {
        std::cout << "Int stack empty, cannot pop." << std::endl;
    }

    try
    {
        s2.push('A');
        s2.push('B');
        s2.push('C');
        std::cout << "Top: " << s2.peek() << " peeked\n";
        std::cout << "Top: " << s2.pop() << " popped\n";
        std::cout << "Top: " << s2.pop() << " popped\n";
        std::cout << "Top: " << s2.pop() << " popped\n";
        std::cout << "Top: " << s2.pop() << " popped\n";
    }
    catch (my_stack<char>::Full)
    {
        std::cout << "Char stack full, cannot push." << std::endl;
    }
    catch (my_stack<char>::Empty)
    {
        std::cout << "Char stack empty, cannot pop." << std::endl;
    }

    return 0;
}