// ch03.cpp: 定义控制台应用程序的入口点。

////getlines的使用
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	std::string s;
//	while (getline(cin, s)) {
//		if (!s.empty())
//			cout << s << endl;
//	}
//
//    return 0;
//}

//unsigned int不能混用
//#include<iostream>
//int main() {
//	
//	unsigned a = 1;
//	int b = -1;
//	if (a < -1)
//	{
//		std::cout << "yes";
//	}
//}

//string对象的创建和相加
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string a = "sad"+'a'; //不能这样
//	cout << a;
//}

////统计标点符号
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string a = "asd,fdSs..";
//	//string::size_type count=0;
//	decltype(a.size()) count = 0;
//	for (auto &i : a)
//	{
//		if (ispunct(i))
//			count++;
//	}
//	cout << count;
//}	

////转为大写
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string a = "asd,,SsAD";
//	for (auto &i : a) {
//		i = toupper(i);
//	}
//	cout << a;
//}

//用迭代器二分查找
//#include<iostream>
//#include<vector>
//int main() {
//	std::vector<int> a{ 1,3,6,7,10,21,32 };
//	int b = 21;
//	auto be = a.cbegin();
//	auto en = a.cend();
//
//	while (be != en) {
//		auto mid = be + (en - be) / 2;
//		if (*mid == b) {
//			std::cout << "find :" << *mid;
//			break;
//		}
//		else if (*mid< b) 
//			be = mid;
//		else en = mid;
//	}
//}

//数组指针和指针数组
//#include<iostream>
//int main() {
//	//指针数组
//	int* a[3];
//	int* x = new int(8);
//	int* y = new int(1);
//	int* z = new int(2);
//	a[0] = x;
//	a[1] = y;
//	a[2] = z;
//	std::cout << *(a[0]);
//	//数组指针
//	int (*b) [3];
//	int c[3] = { 1,2,3 };
//	b = &c;
//	std::cout<<(*b)[2];
//	
//
//
//
//}

