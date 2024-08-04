#include <iostream>
#include <string>

using namespace std;

class Product {
protected:
    string name;
    double price;
    int quantity;

public:
    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {}

    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "Price: ₹" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

class Electronics : virtual public Product {
protected:
    string brand;

public:
    Electronics(const string& name, double price, int quantity, const string& brand)
        : Product(name, price, quantity), brand(brand) {}

    void display() const override {
        Product::display();
        cout << "Brand: " << brand << endl;
    }
};

class Clothing : virtual public Product {
protected:
    string size;

public:
    Clothing(const string& name, double price, int quantity, const string& size)
        : Product(name, price, quantity), size(size) {}

    void display() const override {
        Product::display();
        cout << "Size: " << size << endl;
    }
};

class Books : virtual public Product {
protected:
    string author;

public:
    Books(const string& name, double price, int quantity, const string& author)
        : Product(name, price, quantity), author(author) {}

    void display() const override {
        Product::display();
        cout << "Author: " << author << endl;
    }
};

class ElectronicsClothing : public Electronics, public Clothing {
public:
    ElectronicsClothing(const string& name, double price, int quantity, const string& brand, const string& size)
        : Product(name, price, quantity), Electronics(name, price, quantity, brand), Clothing(name, price, quantity, size) {}

    void display() const override {
        Product::display();
        cout << "Brand: " << brand << endl;
        cout << "Size: " << size << endl;
    }
};

int main() {
    Product product("Product 1", 10.99, 5);
    product.display();

    cout << endl;

    Electronics electronics("Electronics 1", 99.99, 3, "Brand 1");
    electronics.display();

    cout << endl;

    Clothing clothing("Clothing 1", 49.99, 2, "XL");
    clothing.display();

    cout << endl;

    Books books("Book 1", 19.99, 1, "Author 1");
    books.display();

    cout << endl;

    ElectronicsClothing electronicsClothing("Electronics Clothing 1", 199.99, 1, "Brand 2", "M");
    electronicsClothing.display();

    return 0;
}