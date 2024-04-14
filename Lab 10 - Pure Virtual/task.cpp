#include <iostream>
#include <string>

class Product
{
protected:
    static int product_count;
    std::string title;
    int ID;

public:
    Product() {}
    Product(std::string t, int id) : title(t), ID(id)
    {
        product_count++;
    }
    virtual void displayInfo() const = 0;
    static int getProductCount()
    {
        return product_count;
    }
    virtual bool operator<(Product &p) const
    {
        return ID < p.ID;
    }
    virtual bool operator>(Product &p) const
    {
        return ID > p.ID;
    }
};

class Book : public Product
{
private:
    std::string author;

public:
    Book(std::string t, std::string a, int id) : Product(t, id), author(a) {}
    void displayInfo() const
    {
        std::cout << "Book details: \n";
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Product ID: " << ID << "\n\n";
    }
    Book operator=(Book b)
    {
        return Book(b.title, b.author, b.ID);
    }
    bool operator<(Book& b) const
    {
        return ID < b.ID;
    }
    bool operator>(Book& b) const
    {
        return ID > b.ID;
    }
};

class DVD : public Product
{
private:
    std::string director;

public:
    DVD(std::string t, std::string d, int id) : Product(t, id), director(d) {}
    void displayInfo() const
    {
        std::cout << "DVD details: \n";
        std::cout << "Title: " << title << "\n";
        std::cout << "Director: " << director << "\n";
        std::cout << "Product ID: " << ID << "\n\n";
    }
    DVD operator=(DVD d)
    {
        return DVD(d.title, d.director, d.ID);
    }
    bool operator<(DVD& d) const
    {
        return ID < d.ID;
    }
    bool operator>(DVD& d) const
    {
        return ID > d.ID;
    }
};

int Product::product_count = 0;

int main()
{
    int func_id;
    Product *p[5];
    std::string title, creator;
    int ID;

    while (1)
    {
        int product_no = Product::getProductCount();

        std::cout << "1 : Add new book\n";
        std::cout << "2 : Add new DVD\n";
        std::cout << "3 : Sort products\n";
        std::cout << "0 : View all products' info\n";
        std::cout << "-1 : Exit\n\n";
        std::cout << "Enter choice: ";

        std::cin >> func_id;

        if (func_id == 1)
        {
            if (product_no == 5)
                std::cout << "Can't add anymore products. Inventory full.\n\n";
            else
            {
                std::cout << "Enter book info: \n";
                std::cout << "Title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Author: ";
                std::getline(std::cin, creator);
                std::cout << "ID: ";
                std::cin >> ID;
                p[product_no] = new Book(title, creator, ID);
                std::cout << "New book entered!\n\n";
            }
        }
        else if (func_id == 2)
        {
            if (product_no == 5)
                std::cout << "Can't add anymore products. Inventory full.\n\n";
            else
            {
                std::cout << "Enter DVD info:\n";
                std::cout << "Title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Director: ";
                std::getline(std::cin, creator);
                std::cout << "ID: ";
                std::cin >> ID;
                p[product_no] = new DVD(title, creator, ID);
                std::cout << "New DVD entered!\n\n";
            }
        }
        else if (func_id == 3)
        {
            for (int i = 0; i < product_no - 1; i++)
            {
                for (int j = i + 1; j < product_no; j++)
                {
                    if (p[i] > p[j])
                    {
                        Product *temp = p[i];
                        p[i] = p[j];
                        p[j] = temp;
                    }
                }
            }
        }
        else if (func_id == 0)
        {
            if (Product::getProductCount() == 0)
                std::cout << "No product in inventory\n\n";
            else
            {
                for (int i = 0; i < Product::getProductCount(); i++)
                {
                    p[i]->displayInfo();
                }
            }
        }
        else
            break;
    }

    std::cout << "\nTotal number of products created: " << Product::getProductCount() << std::endl;

    Book b1("Origin", "Dan Brown", 10);
    Book b2 = b1;
    b2.displayInfo();

    Book b3("Harry Potter and the Deathly Hallows", "JK Rowling", 15);
    b3.displayInfo();
    b3 = b2;
    b3.displayInfo();

    return 0;
}