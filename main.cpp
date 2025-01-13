#include <iostream>
#include "ArrayWrap.cpp"


int main() {
    try {
        // Create an ArrayWrap object with a max size of 5
        ArrayWrap<int> arr(5);

        // Test push_back and print
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.print();  // Should print: "1,2,3"

        // Test pop_back
        int popped = arr.pop_back();  // Should remove and return 3
        std::cout << "Popped: " << popped << std::endl;  // Should print: "Popped: 3"
        arr.print();  // Should print: "1,2"

        arr.push_back(8);
        arr.push_back(5);
        arr.push_back(6);
        arr.print();
        // Test remove
        arr.remove(0);  
        arr.print();  

        // // Test clear
        // arr.clear();
        // arr.print();  // Should print a newline

        // Test operator[]
        arr.push_back(42);
        arr.print();
        arr[0] = 99;  // Should set the first element to 99
        std::cout << "Element at index 0 is now changed to: " << arr[0] << std::endl;  // Should print: "Element at index 0: 99"
        arr.print();

        // Test swap
        arr.swap(0, 1);  // Swap the elements at index 0 and 1
        arr.print();  

        arr.swap(3, 4);
        arr.print();  

        arr.swap(4, 5);
        arr.print();  

        
        // // Test edge cases
        // // - Try to push more elements than the max size
        // // - Try to access an out-of-bounds index
        // // - Try to swap with invalid indices
        // arr.push_back(5);
        // arr.push_back(10);
        // arr.push_back(20);
        // arr.push_back(30);
        // arr.push_back(40);
        // arr.print();  

        // // The following lines should throw exceptions:
        // //arr.push_back(50);  // Should throw SizeException
        // //int value = arr[10];  // Should throw IndexException
        // arr.swap(4, 6);  // Should throw IndexException

    } catch (SizeException& se) {
        std::cerr << "SizeException: " << se.getError() << std::endl;
    } catch (IndexException& ie) {
        std::cerr << "IndexException: " << ie.getError() << std::endl;
    }

    return 0;
}
