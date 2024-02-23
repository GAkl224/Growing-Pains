#include <iostream>
using namespace std;

class DynamicArray{
    private:
        void resizeArray();
        int *array;
        int size;
        int total;

         // Increase the array size by double of current capacity
	    void growArray()
	    {

            // Creating new array of double size
            int *temp = new int[total + 1];

            total = total + 1;
            // copy element of old array in new array
            for (int i = 0; i < size; i++) {
                temp[i] = array[i];
		    }

		// Delete old array
		delete[] array;

            // Assign new array to original array
            array = temp;
	    }
    
    public:
       // append_element(int element);
       // get_element_at_index(int index);
        //size();
       // reset();

        //constructor
        DynamicArray()
	    {
            total = 1;
            size = 0;
            array = new int[total];
	    }

        int getSize() {
             return size; }

	    // Returns the size of container
	    int getTotal() { 
            return total; }

       


        
        // Inserting element after last stored index
        void append_element(int element) //push_back(int value)
        {
            // check is array having size to store element or
            // not
            if (size == total) {

                // if not then grow the array by double
                growArray();
            }

            // insert element
            array[size] = element;
            size++;
        }

            // Searching element in the given array
        int get_element_at_index(int index)//search(int y)
        {
            for (int i = 0; i < size; i++) {
                if (array[i] == index) {
                    // If element found return its index
                    return i;
                }
            }

            // element not found;
            return 0;
        }

        
        // To Print Array
        void Size()
        {
            cout << "Elements of array : ";
            for (int i = 0; i < size; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
            cout << "No of elements in array : " << size
                << ", Capacity of array :" << total << endl;
        }

        void reset(){
           
            //int *temp = new int[0];
            //array = temp;
            //delete[1] array;

            //int *array = temp;
            //delete[] temp;

           // sizze();

        }



};


int main()
{
    DynamicArray arr;

    arr.append_element(1);
    arr.append_element(2);
    arr.append_element(99);
    arr.append_element(87);

    arr.Size();
   // arr.reset();
   // arr.Size();



}
