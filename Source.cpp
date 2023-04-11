#include <iostream>

template<class T>
class Student
{
	T* m_cat;
public:
	Student(T* cat = nullptr)
		:m_cat(cat)
	{
	}

	~Student()
	{
		delete m_cat;
	}

	Student(const Student& x)
	{
		m_cat = new T;
		*m_cat = *x.m_cat;
	}

	Student(Student& x)
		: m_cat(x.m_cat)
	{
		x.m_cat = nullptr; 
	}

	Student& operator=(const Student&& x)
	{
		if (&x == this)
			return *this;

		delete m_cat;

		m_cat = new T;
		*m_cat = *x.m_cat;

		return *this;
	}
	Student& operator=(Student&& x)
	{
		if (&x == this)
			return *this;

		delete m_cat;

		m_cat = x.m_cat;
		x.m_cat = nullptr;

		return *this;
	}

	T& operator*() const { return *m_cat; }
	T* operator->() const { return m_cat; }
	bool isNull() const { return m_cat == nullptr; }
};

class Item
{
public:
	Item() { std::cout << "Item acquired\n"; }
	~Item() { std::cout << "Item destroyed\n"; }
};

Student<Item> generateItem()
{
	Student<Item> item(new Item);
	return item; 
}



int main()
{
	Student<Item> mainItem;
	mainItem = generateItem();

	return 0;
}