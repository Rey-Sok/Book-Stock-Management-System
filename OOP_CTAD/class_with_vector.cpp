#include <iostream>
#include <vector>

using namespace std;

class Product {
    private:
    int ID;
    string name;
    double price;
    int quantity;
    
    public:

    void setdata(int ID, string name, double price , int quantity){
        this->ID = ID;
        this->name = name;
        this->price = price;
        this->quantity = 0;
    }
    
    void print (){
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "========================" << endl;
    }
};

int main (){
    system("cls");

    int n;
    vector<Product>products;

    cout << "Enter the number of products: ";
    cin >> n;
    for (int i=0; i<n; i++){
        int id;
        string name;
        double price;
        int quantity;

        cout << "Enter product ID: "; cin >> id;
        cout << "Enter product name: "; cin.ignore();getline(cin, name);
        cout << "Enter product price: $"; cin >> price;
        cout << "Enter product quantity: "; cin >> quantity;

        Product p;
        p.setdata(id, name, price , quantity);
        products.push_back(p);
    }
    
    cout << "\n===|Products|===\n";
    for (Product p : products){
        p.print();
    }

    return 0;
}