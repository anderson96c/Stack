#include <iostream>

template<typename T>

class Stack{
	private:
		size_t m_top;// top of the stck
		size_t m_capacity; // physic size of storage area
		T * m_data; //Storage area

	private:
		void reserve(size_t new_cap)

	public:
		Stack();
		~Stack();
		Stack(const Stack &) = delete;
		Stack & operator=(const Stack &) = delete;

		void push(const T & value); 
	    T top(void) const;
	    void pop(void); // can lauch std::lenght_error
}



int main(){


	return 0;
}