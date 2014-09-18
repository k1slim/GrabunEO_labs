class MyString {
	int n;
	char *str;	
	public: 
//		Constuctors
		MyString();
		MyString(int n);
		MyString(int n,char *initStr);
		MyString(const MyString &rhs);
//		Destructor
		~MyString();
//		Methods
		void getString() const;
		void setString() ;
		void addToString();
		int getFactSize() const;
		int getMaxSize() const;

//		Operators
		MyString & operator=(const MyString &rhs);
		MyString & operator+=(const MyString &rhs);
		char & operator[](int i) const;
		friend bool operator>(const MyString &first, const MyString &second);
		friend bool operator<(const MyString &first, const MyString &second);
		friend bool operator==(const MyString &first, const MyString &second);
		friend bool operator!=(const MyString &first, const MyString &second);
		friend bool operator>=(const MyString &first, const MyString &second);
		friend bool operator<=(const MyString &first, const MyString &second);
		friend const MyString operator+(const MyString &first, const MyString &second);

//		Static
		static void MyString::sort(int k,MyString *strArray);
};