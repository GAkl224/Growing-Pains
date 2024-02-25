#include <iostream>
using namespace std;

class DynamicArray
{
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
       
        //constructor
        DynamicArray()
	    {
            total = 1;
            size = 0;
            array = new int[total];
	    }

        int getSize() {
             return size; 
        }

	    // Returns the size of container
	    int getTotal() { 
            return total; 
        }

       


        
        // Inserting element after last stored index
        void append_element(int element) //push_back(int value)
        {
            // check is array having size to store element or not
            if (size == total) {

                // if not then grow the array by one
                growArray();
            }

            // insert element
            array[size] = element;
            size++;
        }

            // Searching element in the given array
        int get_element_at_index(int index)//search(int y)
        {
            int var;
            var = array[index];

            if(var != -1){
                return var;
            }

            else{
                return 0;
            }
        }

       
        // Print
        void Size()
        {
            cout << "Elements of array : ";
            for (int i = 0; i < size; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
            cout << " Total elements in array : " << size
                << ", Capacity:" << total << endl;
        }

        void reset(){
           
           //remove elements by resizung array 
            while(total > 0)
            {
            for (int i = 0; i < total; i++) {
                    array[i] = array[i + 1];
                    cout << total << " ";
            } 
    
                // last index is 0
                array[size - 1] = 0;
                size--;
                total--;
            }
            cout << "\narray is reset";
       

        }



};

//Driver
int main()
{
    DynamicArray arr;

    arr.append_element(1);
    arr.append_element(2);
    arr.append_element(99);
    arr.append_element(87);

    arr.Size();
   
    arr.reset();
    arr.Size();
    arr.append_element(1);
    arr.append_element(2);
    arr.append_element(99);
    //arr.append_element(87);
    arr.Size();

    cout << "\n" << arr.get_element_at_index(5);
    cout <<"\n" << arr.get_element_at_index(1);
   // arr.Size();
    
}
