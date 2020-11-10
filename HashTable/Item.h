#pragma once
enum state { empty, full, deleted };
template <typename T, typename K>
class Item
{
public:
	T data;
	K key;
	state flag;
	Item() {}
	Item(T d, K k, state f) { data = d; key = k; flag = f; }
};
