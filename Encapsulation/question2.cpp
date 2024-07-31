#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
 
    Rectangle(int width, int height){
        this->width = width;     
        this->height = height;   
    }

  
    void displayDimensions(){
        cout << "Width: " << this->width << endl;
        cout << "Height: " << this->height << endl;
    }
};

int main() {
    Rectangle rect(10, 5);
    rect.displayDimensions();
    
    return 0;
}
