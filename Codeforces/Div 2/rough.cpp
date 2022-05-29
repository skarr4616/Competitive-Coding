#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template <typename Iter, typename Compare>
std::vector<int> argsort(Iter begin, Iter end, Compare comp)
{
	// Begin Iterator, End Iterator, Comp 
	std::vector<std::pair<int, Iter> > pairList; // Pair Vector
	std::vector<int> ret; // Will hold the indices

	int i = 0;
	for (auto it = begin; it < end; it++)
	{
		std::pair<int, Iter> pair(i, it); // 0: Element1, 1:Element2...
		pairList.push_back(pair); // Add to list
		i++;
	}
	// Stable sort the pair vector 
	std::stable_sort(pairList.begin(), pairList.end(),
		[comp](std::pair<int, Iter> prev, std::pair<int, Iter> next) -> bool
	{return comp(*prev.second, *next.second); } // This is the important part explained below
	);

	/*
		Comp is a templated function pointer that makes a basic comparison
		std::stable_sort takes a function pointer that takes
		(std::pair<int, Iter> prev, std::pair<int, Iter> next) 
		and returns bool. We passed a corresponding lambda to stable sort 
    and used our comp within brackets to capture it as an outer variable.
    We then applied this function to our iterators which are dereferenced.
	*/
	for (auto i : pairList)
		ret.push_back(i.first); // Take indices

	return ret;
}
int main()
{
	std::array<int, 5> arr{ { 1, 11, 3, 2, -1 } }; // Array container

	auto indices = argsort(arr.begin(), arr.end(), std::less<int>()); 
	// Use std::less functor to make an ASC sort
	for (auto i : indices)
		std::cout << i << std::endl; // Print
}
