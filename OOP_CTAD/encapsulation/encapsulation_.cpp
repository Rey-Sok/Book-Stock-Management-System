#include <iostream>
#include <vector>
using namespace std;

    class Product{
    private:
        int id;
        string name;
        double price;
    public:
        void setName(string name) {
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setPrice(double price) {
            this->price = price;
        }
        double getPrice(){
            return this->price;
        }
        void setId(int id) {
            this->id = id;
        }
        int getId() { 
            return this->id;
        }
    };

class Order{
    private:
        int id;
        string name;
        string remark;
        vector<Product> products;
    public:
        void setId(int id) {
            this->id = id;
        }
        int getId() {
            return id;
        }
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
        void setRemark(string remark) {
            this->remark = remark;
        }
        string getRemark() {
            return remark;
        }
        void addProduct(Product product) {
            products.push_back(product);
        }
        vector<Product> getProducts(){
            return products;
        }
};

    


int main(){
    Product p1;
    p1.setId(999999);
    p1.setName("Product 1");
    p1.setPrice(19.99);
    //
    Order order1;
    order1.setId(123456);
    order1.setName("Coca order");
    order1.setRemark("coca with no ice");
    order1.addProduct(p1);
    // 
    cout<<"[+] List all project"<<endl;
    for(Product p: order1.getProducts()){
        cout<<p.getId()<<endl;
        cout<<""<<p.getName()<<endl;
        cout<<""<<p.getPrice()<<endl;
    }
    return 0;
}
