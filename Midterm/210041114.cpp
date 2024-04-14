#include <iostream>
#include <string>

using namespace std;

struct info
{
    string name;
    float msmnt;
    bool isgm;
};

class ImperialConverter
{
private:
    float value;
    bool isGram;

public:
    ImperialConverter(float _value, bool _isGram) : value(_value), isGram(_isGram){};
    ~ImperialConverter() {}

    float convert()
    {
        if (isGram)
            value *= 0.5;
        else
            value *= 2;
        return value;
    }
};

class DessertRecipe
{
private:
    string des_name;
    info ingredient[100];
    int ingredient_count;
    bool isGram(string s)
    {
        if (s != "0" || s == "Yes" || s == "yes" || s == "YES" || s == "Y" || s == "y")
            return true;
        else
            return false;
    }
    void sortIngredients()
    {
        info temp;
        for (int i = 0; i < ingredient_count - 1; i++)
        {
            for (int j = i + 1; j < ingredient_count; j++)
            {
                if (ingredient[i].msmnt > ingredient[j].msmnt)
                {
                    temp = ingredient[i];
                    ingredient[i] = ingredient[j];
                    ingredient[j] = temp;
                }
            }
        }
    }

public:
    DessertRecipe() : ingredient_count(0) {}
    DessertRecipe(string _name) : des_name(_name), ingredient_count(0) {}
    ~DessertRecipe() {}

    string getName()
    {
        return des_name;
    }
    void setName(string _name)
    {
        des_name = _name;
    }
    void addIngredient(string _name, float _msmnt, string _isGram)
    {
        if (isGram(_isGram))
        {
            ingredient[ingredient_count].name = _name;
            ingredient[ingredient_count].msmnt = _msmnt;
            ingredient[ingredient_count].isgm = true;
            ingredient_count++;
        }
        else
        {
            ingredient[ingredient_count].name = _name;
            ingredient[ingredient_count].msmnt = _msmnt;
            ingredient[ingredient_count].isgm = false;
            ingredient_count++;
        }
    }
    void printRecipeMetric()
    {
        sortIngredients();
        cout << "Dessert name: " << des_name << endl;
        cout << "Ingredients:" << endl;

        for (int i = 0; i < ingredient_count; i++)
        {
            cout << i + 1 << ". " << ingredient[i].name << " " << ingredient[i].msmnt;
            if (ingredient[i].isgm)
                cout << " grams" << endl;
            else
                cout << " millilitres" << endl;
        }
    }
    void printRecipeImperial()
    {
        sortIngredients();
        cout << "Dessert name: " << des_name << endl;
        cout << "Ingredients:" << endl;

        for (int i = 0; i < ingredient_count; i++)
        {
            ImperialConverter IC(ingredient[i].msmnt, ingredient[i].isgm);
            cout << i + 1 << ". " << ingredient[i].name << " " << IC.convert();
            if (ingredient[i].isgm)
                cout << " ounces" << endl;
            else
                cout << " fluid ounces" << endl;
        }
    }

    friend ImperialConverter::ImperialConverter(float _value, bool _isGram);
    friend ImperialConverter::~ImperialConverter();
    float friend ImperialConverter::convert();
};

int main()
{
    DessertRecipe dessert;
    dessert.setName("Cake");
    dessert.addIngredient("Flour", 500.0, "Yes");
    dessert.addIngredient("Eggs", 100.0, "No");
    dessert.addIngredient("Water", 300.0, "No");
    dessert.printRecipeMetric();
    dessert.printRecipeImperial();
    return 0;
}
