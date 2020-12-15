#pragma once
template<typename MyType>
class Array
{
public:
	Array(MyType arr,size_t size);
	Array(const Array& obj);
	const size_t& GetSize() const;
	Array& operator = (Array& obj);
	const size_t& GetUpperBound() const;
	void FreeExtra() const;
	void SetSize(int size, int grow = 1);
	const Array& InsertAt( size_t index,MyType element);
	MyType & operator[](size_t index);
	const Array Append(const Array& obj);
	const Array& RemoveAt(const size_t index);
	const MyType& GetAt(size_t index) ;
	Array<MyType>& SetAt(size_t index, MyType element);
	bool isEmpty() const;
	const Array& RemoveAll();
    Array*  GetData();
	template <typename T> friend std::ostream& operator<<(std::ostream& out, const Array<T>& a);
	~Array();

private:
	MyType* arr = nullptr;
	size_t size = 0;
	size_t grow = 0;
	size_t capacity = 0;
};

template<typename MyType>
inline Array<MyType>::Array(MyType arr, size_t size) 
{
	this->size = size  < 1 ? 1 : size;
	this->capacity = this->size;
	this->grow = 0;
	this->arr = new MyType[this->size];
	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = arr;
	}
}

template<typename MyType>
inline Array<MyType>::Array(const Array& obj)
{
	if (this != &obj)
	{
		delete[] this->arr;
		size = obj.size;
		grow = obj.grow;
		capacity = obj.capacity;
		this->arr = new MyType[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = obj.arr[i];
		}
	}
}

template<typename mytype>
inline const size_t& Array<mytype>::GetSize() const
{
	return capacity;
}

template<typename MyType>
inline Array<MyType>& Array<MyType>::operator=(Array& obj)
{
	if (this != &obj)
	{
		delete[] this->arr;
		size = obj.size;
		grow = obj.grow;
		capacity = obj.capacity;
		this->arr = new MyType[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = obj.arr[i];
		}
	}
	return *this;
}

template<typename MyType>
inline const size_t& Array<MyType>::GetUpperBound() const
{
	return size;
}

template<typename MyType>
inline void Array<MyType>::FreeExtra() const
{
	capacity = size;
}

template<typename MyType>
inline void Array<MyType>::SetSize(int size, int grow)
{
	this->size = size;
	this->grow = grow;

}



template<typename MyType>
inline const Array<MyType>& Array<MyType>::InsertAt( size_t index,MyType element)
{
	MyType* temp = new MyType[size];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	arr = new MyType[size+1];
	for (size_t i = 0,j =0; i < size+1; i++)
	{
		i != index - 1 ? arr[i] = temp[j], j++ : arr[i] = element;
	}
	size++;
	if (capacity < size) {
		grow == 0 ? capacity ++ : capacity += grow;
	}
	return *this;
}

template<typename MyType>
inline MyType& Array<MyType>::operator[](size_t index)
{
	return arr[index];
}

template<typename MyType>
inline const Array<MyType> Array<MyType>::Append(const Array& obj)
{
	size_t size_s = size + obj.size;
	Array<MyType> tempArr(size_s+1,MyType());
	for (int i = 0; i < size; i++) {
		tempArr.SetAt(i,arr[i]);
	}
	for (int i = size , j = 0; i < size_s; i++) {
		tempArr.SetAt(i, obj.arr[i]);
	}
	return tempArr;
}



template<typename MyType>
inline const Array<MyType>& Array<MyType>::RemoveAt(const size_t index)
{
	MyType* temp = new MyType[size-1];
	for (size_t i = 0,j=0; i < size; i++)
	{
		if (i != index) {
			temp[j] = arr[i];
			j++;
		}
	}
	delete[] arr;
	arr = nullptr;
	size = size - 1;
	arr = new MyType[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = temp[i];
	}
	return *this;
}

template<typename MyType>
inline const MyType& Array<MyType>::GetAt(size_t index)
{
	return arr[index] ;
}

template<typename MyType>
inline  Array<MyType>& Array<MyType>::SetAt(size_t index, MyType element)
{
	if (size >= index) {
		arr[index] = element;
	}
	return *this;
}

template<typename MyType>
inline bool Array<MyType>::isEmpty() const
{
	return arr == nullptr ? true : false;
}

template<typename MyType>
inline const Array<MyType>& Array<MyType>::RemoveAll()
{
	delete[] arr;
	arr = nullptr;
	size = 0;
	return *this;
}

template<typename MyType>
inline  Array<MyType>* Array<MyType>::GetData()  
{
	return this;
}

template<typename MyType>
inline Array<MyType>::~Array()
{
	if (arr != nullptr) {
		RemoveAll();
	}
}

template<typename T>
inline std::ostream& operator<<(std::ostream& out, const Array<T>& a)
{
	for (size_t i = 0; i < a.size; i++)
	{

		out << a.arr[i]<<" ";
	}
	return out;
}
