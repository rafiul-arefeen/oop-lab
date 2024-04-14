#include <iostream>
#include <algorithm>
#include <string>

class Item
{
    virtual void display_info() {}
    friend class Library;
};

class Book : public Item
{
protected:
    std::string title;
    std::string author;
    std::string publisher;

public:
    Book(std::string t, std::string a, std::string p) : title(t), author(a), publisher(p) {}
    virtual void display_info() {}
    friend class Library;
};
class Academic : public Book
{
private:
    std::string topic;
    int edition;
    const int typeID;

public:
    Academic(std::string t, std::string a, std::string p, std::string to, int ed) : Book(t, a, p), topic(to), edition(ed), typeID(1) {}
    void display_info()
    {
        std::cout << "Academic Book Details: " << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publisher: " << publisher << std::endl;
        std::cout << "Topic: " << topic << std::endl;
        std::cout << "Edition: " << edition << std::endl
                  << std::endl;
    }
};
class Entertainment : public Book
{
private:
    std::string genre;
    const int typeID;

public:
    Entertainment(std::string t, std::string a, std::string p, std::string g) : Book(t, a, p), genre(g), typeID(2) {}
    void display_info()
    {
        std::cout << "Entertainment Book Details: " << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publisher: " << publisher << std::endl;
        std::cout << "Genre: " << genre << std::endl
                  << std::endl;
    }
};
class Journals : public Item
{
private:
    std::string title;
    std::string author_list[3];
    int pub_year;
    std::string topic;
    const int typeID;

public:
    Journals(std::string t, std::string a1, std::string a2, std::string a3, int p, std::string to) : title(t), pub_year(p), topic(to), typeID(3)
    {
        author_list[0] = a1;
        author_list[1] = a2;
        author_list[2] = a3;
    }
    void display_info()
    {
        std::cout << "Journal Details: " << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author 1: " << author_list[0] << std::endl;
        std::cout << "Author 2: " << author_list[1] << std::endl;
        std::cout << "Author 3: " << author_list[2] << std::endl;
        std::cout << "Publishing Year: " << pub_year << std::endl;
        std::cout << "Topic: " << topic << std::endl
                  << std::endl;
    }
};

class Library
{
private:
    int capacity;
    int inventory;
    Item *it;

public:
    class InvalidQuantityException
    {
    };
    class BookNotAvailableException
    {
    };
    class JournalNotAvailableException
    {
    };
    Library(int cap) : capacity(cap), inventory(0)
    {
        it = new Item[cap];
    }
    Academic *addAcademic(std::string t, std::string a, std::string p, std::string to, int ed)
    {
        if (inventory == capacity)
            throw InvalidQuantityException();
        Academic academic(t, a, p, to, ed);
        it[capacity] = academic;
        inventory++;
        return &academic;
    }
    Entertainment *addEntertainment(std::string t, std::string a, std::string p, std::string g)
    {
        if (inventory == capacity)
            throw InvalidQuantityException();
        Entertainment entertainment(t, a, p, g);
        it[capacity] = entertainment;
        inventory++;
        return &entertainment;
    }
    Journals *addJournal(std::string t, std::string a1, std::string a2, std::string a3, int p, std::string to)
    {
        if (inventory == capacity)
            throw InvalidQuantityException();
        Journals journal(t, a1, a2, a3, p, to);
        it[capacity] = journal;
        inventory++;
        return &journal;
    }

    void displayInfo()
    {
        for (int i = 0; i < capacity; i++)
        {
            it[i].display_info();
        }
    }

    friend void sortItem(Item **itp, int n);
};

int main()
{
    Item *it[10];
    Library lib(10);

    try
    {
        it[0] = lib.addAcademic("A", "AA", "AAA", "AAAA", 12);
    }
    catch (Library::BookNotAvailableException)
    {
        std::cout << "Requested book not available\n";
    }
    catch (Library::JournalNotAvailableException)
    {
        std::cout << "Requested journal not available\n";
    }
    catch (Library::InvalidQuantityException)
    {
        std::cout << "Library capacity exceeded\n";
    }

    return 0;
}